/*
  The MyAsm programming language
  Copyright 2019 Eric J. Deiman

  This file is part of the MyAsm programming language.
  The MyAsm programming language is free software: you can redistribute it
  and/ormodify it under the terms of the GNU General Public License as published by the
  Free Software Foundation, either version 3 of the License, or (at your option) any
  later version.

  The MyAsm programming language is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  You should have received a copy of the GNU General Public License along with the
  MyAsm programming language. If not, see <https://www.gnu.org/licenses/>
*/

// The standard C++ enum class doesn't do one important thing:
// limit the enumeration values to what's listed in the declaration.
// So, given the following enum class:
// enum class RGB {
//   red,
//   green,
//   blue
// }
//
// The following code works, even though I don't want it to:
// RGB invalid = static_cast< RGB >( 99 );
//
// So, what does invalid represent, anyway?
//
// This is my attempt to make enums do something more in line with what I think
// they should do.

#include <memory>

class MyEnum {
public:
  enum Value {
    red,
    green,
    blue
  };

  MyEnum() = delete;
  MyEnum( const MyEnum& ) = default;
  MyEnum( MyEnum&& ) = default;

  MyEnum( int i ) {
    if( red <= i && i <= blue ) {
      value = static_cast< Value >( i );
      valid = true;
    }
    else {
      valid = false;
    }
  }

  MyEnum( Value v ) {
    if( red <= v && v <= blue ) {
      value = v;
      valid = true;
    }
    else {
      valid = false;
    }
  }

  MyEnum& operator=( const MyEnum& other ) {
    if( other.valid ) {
      value = other.value;
      valid = true;
    }
    else {
      throw "attempt to (copy) assign from an invalid MyEnum";
    }

    return *this;
  }


  MyEnum& operator=( MyEnum&& other ) {
    if( other.valid ) {
      value = std::move( other.value );
      valid = true;
    }
    else {
      throw "attempt to (move) assign from an invalid MyEnum";
    }

    return *this;
  }

  operator Value() {
    if( valid ) {
      return value;
    }
    else {
      throw "attempted use of invalid MyEnum";
    }
  }

  operator bool() = delete;

private:
  Value value;
  bool valid;
};
