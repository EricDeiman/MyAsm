
test.bin:     file format binary


Disassembly of section .data:

0000000000000000 <.data>:
       0:	48 2d 10 32 54 76    	sub    rax,0x76543210
       6:	48 2d 10 32 54 76    	sub    rax,0x76543210
       c:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
      13:	48 2b c0             	sub    rax,rax
      16:	48 29 00             	sub    QWORD PTR [rax],rax
      19:	48 2b 00             	sub    rax,QWORD PTR [rax]
      1c:	48 f7 e8             	imul   rax
      1f:	48 f7 28             	imul   QWORD PTR [rax]
      22:	48 f7 e8             	imul   rax
      25:	48 69 c0 10 32 54 76 	imul   rax,rax,0x76543210
      2c:	48 0f af 00          	imul   rax,QWORD PTR [rax]
      30:	48 69 00 10 32 54 76 	imul   rax,QWORD PTR [rax],0x76543210
      37:	48 f7 f8             	idiv   rax
      3a:	48 f7 38             	idiv   QWORD PTR [rax]
      3d:	0f 8d 10 32 54 76    	jge    0x76543253
      43:	e9 10 32 54 76       	jmp    0x76543258
      48:	ff e0                	jmp    rax
      4a:	48 8b c0             	mov    rax,rax
      4d:	48 8b 00             	mov    rax,QWORD PTR [rax]
      50:	48 89 00             	mov    QWORD PTR [rax],rax
      53:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
      5a:	09 00 00 
      5d:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
      64:	00 00 00 
      67:	e8 10 32 54 76       	call   0x7654327c
      6c:	ff d0                	call   rax
      6e:	c3                   	ret    
      6f:	48 d1 e8             	shr    rax,1
      72:	48 c1 e8 12          	shr    rax,0x12
      76:	48 d1 28             	shr    QWORD PTR [rax],1
      79:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
      7d:	48 f7 d8             	neg    rax
      80:	48 f7 18             	neg    QWORD PTR [rax]
      83:	0f 05                	syscall 
      85:	50                   	push   rax
      86:	ff 30                	push   QWORD PTR [rax]
      88:	68 10 32 54 76       	push   0x76543210
      8d:	58                   	pop    rax
      8e:	8f 00                	pop    QWORD PTR [rax]
      90:	48 ff c0             	inc    rax
      93:	48 ff 00             	inc    QWORD PTR [rax]
      96:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
      97:	f3 e2 12             	repz loop 0xac
      9a:	e1 12                	loope  0xae
      9c:	e0 12                	loopne 0xb0
      9e:	f2 0f 10 c0          	movsd  xmm0,xmm0
      a2:	f2 0f 10 00          	movsd  xmm0,QWORD PTR [rax]
      a6:	f2 48 0f 2d c0       	cvtsd2si rax,xmm0
      ab:	f2 48 0f 2d 00       	cvtsd2si rax,QWORD PTR [rax]
      b0:	f2 48 0f 2a c0       	cvtsi2sd xmm0,rax
      b5:	f2 0f 2a 00          	cvtsi2sd xmm0,DWORD PTR [rax]
      b9:	48 2d 10 32 54 76    	sub    rax,0x76543210
      bf:	48 2d 10 32 54 76    	sub    rax,0x76543210
      c5:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
      cc:	48 2b c1             	sub    rax,rcx
      cf:	48 29 01             	sub    QWORD PTR [rcx],rax
      d2:	48 2b 08             	sub    rcx,QWORD PTR [rax]
      d5:	48 f7 e9             	imul   rcx
      d8:	48 f7 29             	imul   QWORD PTR [rcx]
      db:	48 f7 e9             	imul   rcx
      de:	48 69 c1 10 32 54 76 	imul   rax,rcx,0x76543210
      e5:	48 0f af 01          	imul   rax,QWORD PTR [rcx]
      e9:	48 69 01 10 32 54 76 	imul   rax,QWORD PTR [rcx],0x76543210
      f0:	48 f7 f9             	idiv   rcx
      f3:	48 f7 39             	idiv   QWORD PTR [rcx]
      f6:	0f 8d 10 32 54 76    	jge    0x7654330c
      fc:	e9 10 32 54 76       	jmp    0x76543311
     101:	ff e1                	jmp    rcx
     103:	48 8b c1             	mov    rax,rcx
     106:	48 8b 01             	mov    rax,QWORD PTR [rcx]
     109:	48 89 08             	mov    QWORD PTR [rax],rcx
     10c:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     113:	09 00 00 
     116:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     11d:	00 00 00 
     120:	e8 10 32 54 76       	call   0x76543335
     125:	ff d1                	call   rcx
     127:	c3                   	ret    
     128:	48 d1 e9             	shr    rcx,1
     12b:	48 c1 e9 12          	shr    rcx,0x12
     12f:	48 d1 29             	shr    QWORD PTR [rcx],1
     132:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
     136:	48 f7 d9             	neg    rcx
     139:	48 f7 19             	neg    QWORD PTR [rcx]
     13c:	0f 05                	syscall 
     13e:	51                   	push   rcx
     13f:	ff 31                	push   QWORD PTR [rcx]
     141:	68 10 32 54 76       	push   0x76543210
     146:	59                   	pop    rcx
     147:	8f 01                	pop    QWORD PTR [rcx]
     149:	48 ff c1             	inc    rcx
     14c:	48 ff 01             	inc    QWORD PTR [rcx]
     14f:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     150:	f3 e2 12             	repz loop 0x165
     153:	e1 12                	loope  0x167
     155:	e0 12                	loopne 0x169
     157:	f2 0f 10 c1          	movsd  xmm0,xmm1
     15b:	f2 0f 10 01          	movsd  xmm0,QWORD PTR [rcx]
     15f:	f2 48 0f 2d c1       	cvtsd2si rax,xmm1
     164:	f2 48 0f 2d 01       	cvtsd2si rax,QWORD PTR [rcx]
     169:	f2 48 0f 2a c1       	cvtsi2sd xmm0,rcx
     16e:	f2 0f 2a 01          	cvtsi2sd xmm0,DWORD PTR [rcx]
     172:	48 2d 10 32 54 76    	sub    rax,0x76543210
     178:	48 2d 10 32 54 76    	sub    rax,0x76543210
     17e:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     185:	48 2b c2             	sub    rax,rdx
     188:	48 29 02             	sub    QWORD PTR [rdx],rax
     18b:	48 2b 10             	sub    rdx,QWORD PTR [rax]
     18e:	48 f7 ea             	imul   rdx
     191:	48 f7 2a             	imul   QWORD PTR [rdx]
     194:	48 f7 ea             	imul   rdx
     197:	48 69 c2 10 32 54 76 	imul   rax,rdx,0x76543210
     19e:	48 0f af 02          	imul   rax,QWORD PTR [rdx]
     1a2:	48 69 02 10 32 54 76 	imul   rax,QWORD PTR [rdx],0x76543210
     1a9:	48 f7 fa             	idiv   rdx
     1ac:	48 f7 3a             	idiv   QWORD PTR [rdx]
     1af:	0f 8d 10 32 54 76    	jge    0x765433c5
     1b5:	e9 10 32 54 76       	jmp    0x765433ca
     1ba:	ff e2                	jmp    rdx
     1bc:	48 8b c2             	mov    rax,rdx
     1bf:	48 8b 02             	mov    rax,QWORD PTR [rdx]
     1c2:	48 89 10             	mov    QWORD PTR [rax],rdx
     1c5:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     1cc:	09 00 00 
     1cf:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     1d6:	00 00 00 
     1d9:	e8 10 32 54 76       	call   0x765433ee
     1de:	ff d2                	call   rdx
     1e0:	c3                   	ret    
     1e1:	48 d1 ea             	shr    rdx,1
     1e4:	48 c1 ea 12          	shr    rdx,0x12
     1e8:	48 d1 2a             	shr    QWORD PTR [rdx],1
     1eb:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
     1ef:	48 f7 da             	neg    rdx
     1f2:	48 f7 1a             	neg    QWORD PTR [rdx]
     1f5:	0f 05                	syscall 
     1f7:	52                   	push   rdx
     1f8:	ff 32                	push   QWORD PTR [rdx]
     1fa:	68 10 32 54 76       	push   0x76543210
     1ff:	5a                   	pop    rdx
     200:	8f 02                	pop    QWORD PTR [rdx]
     202:	48 ff c2             	inc    rdx
     205:	48 ff 02             	inc    QWORD PTR [rdx]
     208:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     209:	f3 e2 12             	repz loop 0x21e
     20c:	e1 12                	loope  0x220
     20e:	e0 12                	loopne 0x222
     210:	f2 0f 10 c2          	movsd  xmm0,xmm2
     214:	f2 0f 10 02          	movsd  xmm0,QWORD PTR [rdx]
     218:	f2 48 0f 2d c2       	cvtsd2si rax,xmm2
     21d:	f2 48 0f 2d 02       	cvtsd2si rax,QWORD PTR [rdx]
     222:	f2 48 0f 2a c2       	cvtsi2sd xmm0,rdx
     227:	f2 0f 2a 02          	cvtsi2sd xmm0,DWORD PTR [rdx]
     22b:	48 2d 10 32 54 76    	sub    rax,0x76543210
     231:	48 2d 10 32 54 76    	sub    rax,0x76543210
     237:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     23e:	48 2b c3             	sub    rax,rbx
     241:	48 29 03             	sub    QWORD PTR [rbx],rax
     244:	48 2b 18             	sub    rbx,QWORD PTR [rax]
     247:	48 f7 eb             	imul   rbx
     24a:	48 f7 2b             	imul   QWORD PTR [rbx]
     24d:	48 f7 eb             	imul   rbx
     250:	48 69 c3 10 32 54 76 	imul   rax,rbx,0x76543210
     257:	48 0f af 03          	imul   rax,QWORD PTR [rbx]
     25b:	48 69 03 10 32 54 76 	imul   rax,QWORD PTR [rbx],0x76543210
     262:	48 f7 fb             	idiv   rbx
     265:	48 f7 3b             	idiv   QWORD PTR [rbx]
     268:	0f 8d 10 32 54 76    	jge    0x7654347e
     26e:	e9 10 32 54 76       	jmp    0x76543483
     273:	ff e3                	jmp    rbx
     275:	48 8b c3             	mov    rax,rbx
     278:	48 8b 03             	mov    rax,QWORD PTR [rbx]
     27b:	48 89 18             	mov    QWORD PTR [rax],rbx
     27e:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     285:	09 00 00 
     288:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     28f:	00 00 00 
     292:	e8 10 32 54 76       	call   0x765434a7
     297:	ff d3                	call   rbx
     299:	c3                   	ret    
     29a:	48 d1 eb             	shr    rbx,1
     29d:	48 c1 eb 12          	shr    rbx,0x12
     2a1:	48 d1 2b             	shr    QWORD PTR [rbx],1
     2a4:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
     2a8:	48 f7 db             	neg    rbx
     2ab:	48 f7 1b             	neg    QWORD PTR [rbx]
     2ae:	0f 05                	syscall 
     2b0:	53                   	push   rbx
     2b1:	ff 33                	push   QWORD PTR [rbx]
     2b3:	68 10 32 54 76       	push   0x76543210
     2b8:	5b                   	pop    rbx
     2b9:	8f 03                	pop    QWORD PTR [rbx]
     2bb:	48 ff c3             	inc    rbx
     2be:	48 ff 03             	inc    QWORD PTR [rbx]
     2c1:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     2c2:	f3 e2 12             	repz loop 0x2d7
     2c5:	e1 12                	loope  0x2d9
     2c7:	e0 12                	loopne 0x2db
     2c9:	f2 0f 10 c3          	movsd  xmm0,xmm3
     2cd:	f2 0f 10 03          	movsd  xmm0,QWORD PTR [rbx]
     2d1:	f2 48 0f 2d c3       	cvtsd2si rax,xmm3
     2d6:	f2 48 0f 2d 03       	cvtsd2si rax,QWORD PTR [rbx]
     2db:	f2 48 0f 2a c3       	cvtsi2sd xmm0,rbx
     2e0:	f2 0f 2a 03          	cvtsi2sd xmm0,DWORD PTR [rbx]
     2e4:	48 2d 10 32 54 76    	sub    rax,0x76543210
     2ea:	48 2d 10 32 54 76    	sub    rax,0x76543210
     2f0:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     2f7:	48 2b c4             	sub    rax,rsp
     2fa:	48 29 04 24          	sub    QWORD PTR [rsp],rax
     2fe:	48 2b 20             	sub    rsp,QWORD PTR [rax]
     301:	48 f7 ec             	imul   rsp
     304:	48 f7 2c 24          	imul   QWORD PTR [rsp]
     308:	48 f7 ec             	imul   rsp
     30b:	48 69 c4 10 32 54 76 	imul   rax,rsp,0x76543210
     312:	48 0f af 04 24       	imul   rax,QWORD PTR [rsp]
     317:	48 69 04 24 10 32 54 	imul   rax,QWORD PTR [rsp],0x76543210
     31e:	76 
     31f:	48 f7 fc             	idiv   rsp
     322:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
     326:	0f 8d 10 32 54 76    	jge    0x7654353c
     32c:	e9 10 32 54 76       	jmp    0x76543541
     331:	ff e4                	jmp    rsp
     333:	48 8b c4             	mov    rax,rsp
     336:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
     33a:	48 89 20             	mov    QWORD PTR [rax],rsp
     33d:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     344:	09 00 00 
     347:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     34e:	00 00 00 
     351:	e8 10 32 54 76       	call   0x76543566
     356:	ff d4                	call   rsp
     358:	c3                   	ret    
     359:	48 d1 ec             	shr    rsp,1
     35c:	48 c1 ec 12          	shr    rsp,0x12
     360:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
     364:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
     369:	48 f7 dc             	neg    rsp
     36c:	48 f7 1c 24          	neg    QWORD PTR [rsp]
     370:	0f 05                	syscall 
     372:	54                   	push   rsp
     373:	ff 34 24             	push   QWORD PTR [rsp]
     376:	68 10 32 54 76       	push   0x76543210
     37b:	5c                   	pop    rsp
     37c:	8f 04 24             	pop    QWORD PTR [rsp]
     37f:	48 ff c4             	inc    rsp
     382:	48 ff 04 24          	inc    QWORD PTR [rsp]
     386:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     387:	f3 e2 12             	repz loop 0x39c
     38a:	e1 12                	loope  0x39e
     38c:	e0 12                	loopne 0x3a0
     38e:	f2 0f 10 c4          	movsd  xmm0,xmm4
     392:	f2 0f 10 04 24       	movsd  xmm0,QWORD PTR [rsp]
     397:	f2 48 0f 2d c4       	cvtsd2si rax,xmm4
     39c:	f2 48 0f 2d 04 24    	cvtsd2si rax,QWORD PTR [rsp]
     3a2:	f2 48 0f 2a c4       	cvtsi2sd xmm0,rsp
     3a7:	f2 0f 2a 04 24       	cvtsi2sd xmm0,DWORD PTR [rsp]
     3ac:	48 2d 10 32 54 76    	sub    rax,0x76543210
     3b2:	48 2d 10 32 54 76    	sub    rax,0x76543210
     3b8:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     3bf:	48 2b c5             	sub    rax,rbp
     3c2:	48 29 45 00          	sub    QWORD PTR [rbp+0x0],rax
     3c6:	48 2b 28             	sub    rbp,QWORD PTR [rax]
     3c9:	48 f7 ed             	imul   rbp
     3cc:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
     3d0:	48 f7 ed             	imul   rbp
     3d3:	48 69 c5 10 32 54 76 	imul   rax,rbp,0x76543210
     3da:	48 0f af 45 00       	imul   rax,QWORD PTR [rbp+0x0]
     3df:	48 69 45 00 10 32 54 	imul   rax,QWORD PTR [rbp+0x0],0x76543210
     3e6:	76 
     3e7:	48 f7 fd             	idiv   rbp
     3ea:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
     3ee:	0f 8d 10 32 54 76    	jge    0x76543604
     3f4:	e9 10 32 54 76       	jmp    0x76543609
     3f9:	ff e5                	jmp    rbp
     3fb:	48 8b c5             	mov    rax,rbp
     3fe:	48 8b 45 00          	mov    rax,QWORD PTR [rbp+0x0]
     402:	48 89 28             	mov    QWORD PTR [rax],rbp
     405:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     40c:	09 00 00 
     40f:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     416:	00 00 00 
     419:	e8 10 32 54 76       	call   0x7654362e
     41e:	ff d5                	call   rbp
     420:	c3                   	ret    
     421:	48 d1 ed             	shr    rbp,1
     424:	48 c1 ed 12          	shr    rbp,0x12
     428:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
     42c:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
     431:	48 f7 dd             	neg    rbp
     434:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
     438:	0f 05                	syscall 
     43a:	55                   	push   rbp
     43b:	ff 75 00             	push   QWORD PTR [rbp+0x0]
     43e:	68 10 32 54 76       	push   0x76543210
     443:	5d                   	pop    rbp
     444:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
     447:	48 ff c5             	inc    rbp
     44a:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
     44e:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     44f:	f3 e2 12             	repz loop 0x464
     452:	e1 12                	loope  0x466
     454:	e0 12                	loopne 0x468
     456:	f2 0f 10 c5          	movsd  xmm0,xmm5
     45a:	f2 0f 10 45 00       	movsd  xmm0,QWORD PTR [rbp+0x0]
     45f:	f2 48 0f 2d c5       	cvtsd2si rax,xmm5
     464:	f2 48 0f 2d 45 00    	cvtsd2si rax,QWORD PTR [rbp+0x0]
     46a:	f2 48 0f 2a c5       	cvtsi2sd xmm0,rbp
     46f:	f2 0f 2a 45 00       	cvtsi2sd xmm0,DWORD PTR [rbp+0x0]
     474:	48 2d 10 32 54 76    	sub    rax,0x76543210
     47a:	48 2d 10 32 54 76    	sub    rax,0x76543210
     480:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     487:	48 2b c6             	sub    rax,rsi
     48a:	48 29 06             	sub    QWORD PTR [rsi],rax
     48d:	48 2b 30             	sub    rsi,QWORD PTR [rax]
     490:	48 f7 ee             	imul   rsi
     493:	48 f7 2e             	imul   QWORD PTR [rsi]
     496:	48 f7 ee             	imul   rsi
     499:	48 69 c6 10 32 54 76 	imul   rax,rsi,0x76543210
     4a0:	48 0f af 06          	imul   rax,QWORD PTR [rsi]
     4a4:	48 69 06 10 32 54 76 	imul   rax,QWORD PTR [rsi],0x76543210
     4ab:	48 f7 fe             	idiv   rsi
     4ae:	48 f7 3e             	idiv   QWORD PTR [rsi]
     4b1:	0f 8d 10 32 54 76    	jge    0x765436c7
     4b7:	e9 10 32 54 76       	jmp    0x765436cc
     4bc:	ff e6                	jmp    rsi
     4be:	48 8b c6             	mov    rax,rsi
     4c1:	48 8b 06             	mov    rax,QWORD PTR [rsi]
     4c4:	48 89 30             	mov    QWORD PTR [rax],rsi
     4c7:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     4ce:	09 00 00 
     4d1:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     4d8:	00 00 00 
     4db:	e8 10 32 54 76       	call   0x765436f0
     4e0:	ff d6                	call   rsi
     4e2:	c3                   	ret    
     4e3:	48 d1 ee             	shr    rsi,1
     4e6:	48 c1 ee 12          	shr    rsi,0x12
     4ea:	48 d1 2e             	shr    QWORD PTR [rsi],1
     4ed:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
     4f1:	48 f7 de             	neg    rsi
     4f4:	48 f7 1e             	neg    QWORD PTR [rsi]
     4f7:	0f 05                	syscall 
     4f9:	56                   	push   rsi
     4fa:	ff 36                	push   QWORD PTR [rsi]
     4fc:	68 10 32 54 76       	push   0x76543210
     501:	5e                   	pop    rsi
     502:	8f 06                	pop    QWORD PTR [rsi]
     504:	48 ff c6             	inc    rsi
     507:	48 ff 06             	inc    QWORD PTR [rsi]
     50a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     50b:	f3 e2 12             	repz loop 0x520
     50e:	e1 12                	loope  0x522
     510:	e0 12                	loopne 0x524
     512:	f2 0f 10 c6          	movsd  xmm0,xmm6
     516:	f2 0f 10 06          	movsd  xmm0,QWORD PTR [rsi]
     51a:	f2 48 0f 2d c6       	cvtsd2si rax,xmm6
     51f:	f2 48 0f 2d 06       	cvtsd2si rax,QWORD PTR [rsi]
     524:	f2 48 0f 2a c6       	cvtsi2sd xmm0,rsi
     529:	f2 0f 2a 06          	cvtsi2sd xmm0,DWORD PTR [rsi]
     52d:	48 2d 10 32 54 76    	sub    rax,0x76543210
     533:	48 2d 10 32 54 76    	sub    rax,0x76543210
     539:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     540:	48 2b c7             	sub    rax,rdi
     543:	48 29 07             	sub    QWORD PTR [rdi],rax
     546:	48 2b 38             	sub    rdi,QWORD PTR [rax]
     549:	48 f7 ef             	imul   rdi
     54c:	48 f7 2f             	imul   QWORD PTR [rdi]
     54f:	48 f7 ef             	imul   rdi
     552:	48 69 c7 10 32 54 76 	imul   rax,rdi,0x76543210
     559:	48 0f af 07          	imul   rax,QWORD PTR [rdi]
     55d:	48 69 07 10 32 54 76 	imul   rax,QWORD PTR [rdi],0x76543210
     564:	48 f7 ff             	idiv   rdi
     567:	48 f7 3f             	idiv   QWORD PTR [rdi]
     56a:	0f 8d 10 32 54 76    	jge    0x76543780
     570:	e9 10 32 54 76       	jmp    0x76543785
     575:	ff e7                	jmp    rdi
     577:	48 8b c7             	mov    rax,rdi
     57a:	48 8b 07             	mov    rax,QWORD PTR [rdi]
     57d:	48 89 38             	mov    QWORD PTR [rax],rdi
     580:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     587:	09 00 00 
     58a:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     591:	00 00 00 
     594:	e8 10 32 54 76       	call   0x765437a9
     599:	ff d7                	call   rdi
     59b:	c3                   	ret    
     59c:	48 d1 ef             	shr    rdi,1
     59f:	48 c1 ef 12          	shr    rdi,0x12
     5a3:	48 d1 2f             	shr    QWORD PTR [rdi],1
     5a6:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
     5aa:	48 f7 df             	neg    rdi
     5ad:	48 f7 1f             	neg    QWORD PTR [rdi]
     5b0:	0f 05                	syscall 
     5b2:	57                   	push   rdi
     5b3:	ff 37                	push   QWORD PTR [rdi]
     5b5:	68 10 32 54 76       	push   0x76543210
     5ba:	5f                   	pop    rdi
     5bb:	8f 07                	pop    QWORD PTR [rdi]
     5bd:	48 ff c7             	inc    rdi
     5c0:	48 ff 07             	inc    QWORD PTR [rdi]
     5c3:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     5c4:	f3 e2 12             	repz loop 0x5d9
     5c7:	e1 12                	loope  0x5db
     5c9:	e0 12                	loopne 0x5dd
     5cb:	f2 0f 10 c7          	movsd  xmm0,xmm7
     5cf:	f2 0f 10 07          	movsd  xmm0,QWORD PTR [rdi]
     5d3:	f2 48 0f 2d c7       	cvtsd2si rax,xmm7
     5d8:	f2 48 0f 2d 07       	cvtsd2si rax,QWORD PTR [rdi]
     5dd:	f2 48 0f 2a c7       	cvtsi2sd xmm0,rdi
     5e2:	f2 0f 2a 07          	cvtsi2sd xmm0,DWORD PTR [rdi]
     5e6:	48 2d 10 32 54 76    	sub    rax,0x76543210
     5ec:	48 2d 10 32 54 76    	sub    rax,0x76543210
     5f2:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     5f9:	49 2b c0             	sub    rax,r8
     5fc:	49 29 00             	sub    QWORD PTR [r8],rax
     5ff:	4c 2b 00             	sub    r8,QWORD PTR [rax]
     602:	49 f7 e8             	imul   r8
     605:	49 f7 28             	imul   QWORD PTR [r8]
     608:	49 f7 e8             	imul   r8
     60b:	49 69 c0 10 32 54 76 	imul   rax,r8,0x76543210
     612:	49 0f af 00          	imul   rax,QWORD PTR [r8]
     616:	49 69 00 10 32 54 76 	imul   rax,QWORD PTR [r8],0x76543210
     61d:	49 f7 f8             	idiv   r8
     620:	49 f7 38             	idiv   QWORD PTR [r8]
     623:	0f 8d 10 32 54 76    	jge    0x76543839
     629:	e9 10 32 54 76       	jmp    0x7654383e
     62e:	41 ff e0             	jmp    r8
     631:	49 8b c0             	mov    rax,r8
     634:	49 8b 00             	mov    rax,QWORD PTR [r8]
     637:	4c 89 00             	mov    QWORD PTR [rax],r8
     63a:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     641:	09 00 00 
     644:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     64b:	00 00 00 
     64e:	e8 10 32 54 76       	call   0x76543863
     653:	41 ff d0             	call   r8
     656:	c3                   	ret    
     657:	49 d1 e8             	shr    r8,1
     65a:	49 c1 e8 12          	shr    r8,0x12
     65e:	49 d1 28             	shr    QWORD PTR [r8],1
     661:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
     665:	49 f7 d8             	neg    r8
     668:	49 f7 18             	neg    QWORD PTR [r8]
     66b:	0f 05                	syscall 
     66d:	41 50                	push   r8
     66f:	41 ff 30             	push   QWORD PTR [r8]
     672:	68 10 32 54 76       	push   0x76543210
     677:	41 58                	pop    r8
     679:	41 8f 00             	pop    QWORD PTR [r8]
     67c:	49 ff c0             	inc    r8
     67f:	49 ff 00             	inc    QWORD PTR [r8]
     682:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     683:	f3 e2 12             	repz loop 0x698
     686:	e1 12                	loope  0x69a
     688:	e0 12                	loopne 0x69c
     68a:	f2 41 0f 10 c0       	movsd  xmm0,xmm8
     68f:	f2 41 0f 10 00       	movsd  xmm0,QWORD PTR [r8]
     694:	f2 49 0f 2d c0       	cvtsd2si rax,xmm8
     699:	f2 49 0f 2d 00       	cvtsd2si rax,QWORD PTR [r8]
     69e:	f2 49 0f 2a c0       	cvtsi2sd xmm0,r8
     6a3:	f2 41 0f 2a 00       	cvtsi2sd xmm0,DWORD PTR [r8]
     6a8:	48 2d 10 32 54 76    	sub    rax,0x76543210
     6ae:	48 2d 10 32 54 76    	sub    rax,0x76543210
     6b4:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     6bb:	49 2b c1             	sub    rax,r9
     6be:	49 29 01             	sub    QWORD PTR [r9],rax
     6c1:	4c 2b 08             	sub    r9,QWORD PTR [rax]
     6c4:	49 f7 e9             	imul   r9
     6c7:	49 f7 29             	imul   QWORD PTR [r9]
     6ca:	49 f7 e9             	imul   r9
     6cd:	49 69 c1 10 32 54 76 	imul   rax,r9,0x76543210
     6d4:	49 0f af 01          	imul   rax,QWORD PTR [r9]
     6d8:	49 69 01 10 32 54 76 	imul   rax,QWORD PTR [r9],0x76543210
     6df:	49 f7 f9             	idiv   r9
     6e2:	49 f7 39             	idiv   QWORD PTR [r9]
     6e5:	0f 8d 10 32 54 76    	jge    0x765438fb
     6eb:	e9 10 32 54 76       	jmp    0x76543900
     6f0:	41 ff e1             	jmp    r9
     6f3:	49 8b c1             	mov    rax,r9
     6f6:	49 8b 01             	mov    rax,QWORD PTR [r9]
     6f9:	4c 89 08             	mov    QWORD PTR [rax],r9
     6fc:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     703:	09 00 00 
     706:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     70d:	00 00 00 
     710:	e8 10 32 54 76       	call   0x76543925
     715:	41 ff d1             	call   r9
     718:	c3                   	ret    
     719:	49 d1 e9             	shr    r9,1
     71c:	49 c1 e9 12          	shr    r9,0x12
     720:	49 d1 29             	shr    QWORD PTR [r9],1
     723:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
     727:	49 f7 d9             	neg    r9
     72a:	49 f7 19             	neg    QWORD PTR [r9]
     72d:	0f 05                	syscall 
     72f:	41 51                	push   r9
     731:	41 ff 31             	push   QWORD PTR [r9]
     734:	68 10 32 54 76       	push   0x76543210
     739:	41 59                	pop    r9
     73b:	41 8f 01             	pop    QWORD PTR [r9]
     73e:	49 ff c1             	inc    r9
     741:	49 ff 01             	inc    QWORD PTR [r9]
     744:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     745:	f3 e2 12             	repz loop 0x75a
     748:	e1 12                	loope  0x75c
     74a:	e0 12                	loopne 0x75e
     74c:	f2 41 0f 10 c1       	movsd  xmm0,xmm9
     751:	f2 41 0f 10 01       	movsd  xmm0,QWORD PTR [r9]
     756:	f2 49 0f 2d c1       	cvtsd2si rax,xmm9
     75b:	f2 49 0f 2d 01       	cvtsd2si rax,QWORD PTR [r9]
     760:	f2 49 0f 2a c1       	cvtsi2sd xmm0,r9
     765:	f2 41 0f 2a 01       	cvtsi2sd xmm0,DWORD PTR [r9]
     76a:	48 2d 10 32 54 76    	sub    rax,0x76543210
     770:	48 2d 10 32 54 76    	sub    rax,0x76543210
     776:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     77d:	49 2b c2             	sub    rax,r10
     780:	49 29 02             	sub    QWORD PTR [r10],rax
     783:	4c 2b 10             	sub    r10,QWORD PTR [rax]
     786:	49 f7 ea             	imul   r10
     789:	49 f7 2a             	imul   QWORD PTR [r10]
     78c:	49 f7 ea             	imul   r10
     78f:	49 69 c2 10 32 54 76 	imul   rax,r10,0x76543210
     796:	49 0f af 02          	imul   rax,QWORD PTR [r10]
     79a:	49 69 02 10 32 54 76 	imul   rax,QWORD PTR [r10],0x76543210
     7a1:	49 f7 fa             	idiv   r10
     7a4:	49 f7 3a             	idiv   QWORD PTR [r10]
     7a7:	0f 8d 10 32 54 76    	jge    0x765439bd
     7ad:	e9 10 32 54 76       	jmp    0x765439c2
     7b2:	41 ff e2             	jmp    r10
     7b5:	49 8b c2             	mov    rax,r10
     7b8:	49 8b 02             	mov    rax,QWORD PTR [r10]
     7bb:	4c 89 10             	mov    QWORD PTR [rax],r10
     7be:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     7c5:	09 00 00 
     7c8:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     7cf:	00 00 00 
     7d2:	e8 10 32 54 76       	call   0x765439e7
     7d7:	41 ff d2             	call   r10
     7da:	c3                   	ret    
     7db:	49 d1 ea             	shr    r10,1
     7de:	49 c1 ea 12          	shr    r10,0x12
     7e2:	49 d1 2a             	shr    QWORD PTR [r10],1
     7e5:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
     7e9:	49 f7 da             	neg    r10
     7ec:	49 f7 1a             	neg    QWORD PTR [r10]
     7ef:	0f 05                	syscall 
     7f1:	41 52                	push   r10
     7f3:	41 ff 32             	push   QWORD PTR [r10]
     7f6:	68 10 32 54 76       	push   0x76543210
     7fb:	41 5a                	pop    r10
     7fd:	41 8f 02             	pop    QWORD PTR [r10]
     800:	49 ff c2             	inc    r10
     803:	49 ff 02             	inc    QWORD PTR [r10]
     806:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     807:	f3 e2 12             	repz loop 0x81c
     80a:	e1 12                	loope  0x81e
     80c:	e0 12                	loopne 0x820
     80e:	f2 41 0f 10 c2       	movsd  xmm0,xmm10
     813:	f2 41 0f 10 02       	movsd  xmm0,QWORD PTR [r10]
     818:	f2 49 0f 2d c2       	cvtsd2si rax,xmm10
     81d:	f2 49 0f 2d 02       	cvtsd2si rax,QWORD PTR [r10]
     822:	f2 49 0f 2a c2       	cvtsi2sd xmm0,r10
     827:	f2 41 0f 2a 02       	cvtsi2sd xmm0,DWORD PTR [r10]
     82c:	48 2d 10 32 54 76    	sub    rax,0x76543210
     832:	48 2d 10 32 54 76    	sub    rax,0x76543210
     838:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     83f:	49 2b c3             	sub    rax,r11
     842:	49 29 03             	sub    QWORD PTR [r11],rax
     845:	4c 2b 18             	sub    r11,QWORD PTR [rax]
     848:	49 f7 eb             	imul   r11
     84b:	49 f7 2b             	imul   QWORD PTR [r11]
     84e:	49 f7 eb             	imul   r11
     851:	49 69 c3 10 32 54 76 	imul   rax,r11,0x76543210
     858:	49 0f af 03          	imul   rax,QWORD PTR [r11]
     85c:	49 69 03 10 32 54 76 	imul   rax,QWORD PTR [r11],0x76543210
     863:	49 f7 fb             	idiv   r11
     866:	49 f7 3b             	idiv   QWORD PTR [r11]
     869:	0f 8d 10 32 54 76    	jge    0x76543a7f
     86f:	e9 10 32 54 76       	jmp    0x76543a84
     874:	41 ff e3             	jmp    r11
     877:	49 8b c3             	mov    rax,r11
     87a:	49 8b 03             	mov    rax,QWORD PTR [r11]
     87d:	4c 89 18             	mov    QWORD PTR [rax],r11
     880:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     887:	09 00 00 
     88a:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     891:	00 00 00 
     894:	e8 10 32 54 76       	call   0x76543aa9
     899:	41 ff d3             	call   r11
     89c:	c3                   	ret    
     89d:	49 d1 eb             	shr    r11,1
     8a0:	49 c1 eb 12          	shr    r11,0x12
     8a4:	49 d1 2b             	shr    QWORD PTR [r11],1
     8a7:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
     8ab:	49 f7 db             	neg    r11
     8ae:	49 f7 1b             	neg    QWORD PTR [r11]
     8b1:	0f 05                	syscall 
     8b3:	41 53                	push   r11
     8b5:	41 ff 33             	push   QWORD PTR [r11]
     8b8:	68 10 32 54 76       	push   0x76543210
     8bd:	41 5b                	pop    r11
     8bf:	41 8f 03             	pop    QWORD PTR [r11]
     8c2:	49 ff c3             	inc    r11
     8c5:	49 ff 03             	inc    QWORD PTR [r11]
     8c8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     8c9:	f3 e2 12             	repz loop 0x8de
     8cc:	e1 12                	loope  0x8e0
     8ce:	e0 12                	loopne 0x8e2
     8d0:	f2 41 0f 10 c3       	movsd  xmm0,xmm11
     8d5:	f2 41 0f 10 03       	movsd  xmm0,QWORD PTR [r11]
     8da:	f2 49 0f 2d c3       	cvtsd2si rax,xmm11
     8df:	f2 49 0f 2d 03       	cvtsd2si rax,QWORD PTR [r11]
     8e4:	f2 49 0f 2a c3       	cvtsi2sd xmm0,r11
     8e9:	f2 41 0f 2a 03       	cvtsi2sd xmm0,DWORD PTR [r11]
     8ee:	48 2d 10 32 54 76    	sub    rax,0x76543210
     8f4:	48 2d 10 32 54 76    	sub    rax,0x76543210
     8fa:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     901:	49 2b c4             	sub    rax,r12
     904:	49 29 04 24          	sub    QWORD PTR [r12],rax
     908:	4c 2b 20             	sub    r12,QWORD PTR [rax]
     90b:	49 f7 ec             	imul   r12
     90e:	49 f7 2c 24          	imul   QWORD PTR [r12]
     912:	49 f7 ec             	imul   r12
     915:	49 69 c4 10 32 54 76 	imul   rax,r12,0x76543210
     91c:	49 0f af 04 24       	imul   rax,QWORD PTR [r12]
     921:	49 69 04 24 10 32 54 	imul   rax,QWORD PTR [r12],0x76543210
     928:	76 
     929:	49 f7 fc             	idiv   r12
     92c:	49 f7 3c 24          	idiv   QWORD PTR [r12]
     930:	0f 8d 10 32 54 76    	jge    0x76543b46
     936:	e9 10 32 54 76       	jmp    0x76543b4b
     93b:	41 ff e4             	jmp    r12
     93e:	49 8b c4             	mov    rax,r12
     941:	49 8b 04 24          	mov    rax,QWORD PTR [r12]
     945:	4c 89 20             	mov    QWORD PTR [rax],r12
     948:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     94f:	09 00 00 
     952:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     959:	00 00 00 
     95c:	e8 10 32 54 76       	call   0x76543b71
     961:	41 ff d4             	call   r12
     964:	c3                   	ret    
     965:	49 d1 ec             	shr    r12,1
     968:	49 c1 ec 12          	shr    r12,0x12
     96c:	49 d1 2c 24          	shr    QWORD PTR [r12],1
     970:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
     975:	49 f7 dc             	neg    r12
     978:	49 f7 1c 24          	neg    QWORD PTR [r12]
     97c:	0f 05                	syscall 
     97e:	41 54                	push   r12
     980:	41 ff 34 24          	push   QWORD PTR [r12]
     984:	68 10 32 54 76       	push   0x76543210
     989:	41 5c                	pop    r12
     98b:	41 8f 04 24          	pop    QWORD PTR [r12]
     98f:	49 ff c4             	inc    r12
     992:	49 ff 04 24          	inc    QWORD PTR [r12]
     996:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     997:	f3 e2 12             	repz loop 0x9ac
     99a:	e1 12                	loope  0x9ae
     99c:	e0 12                	loopne 0x9b0
     99e:	f2 41 0f 10 c4       	movsd  xmm0,xmm12
     9a3:	f2 41 0f 10 04 24    	movsd  xmm0,QWORD PTR [r12]
     9a9:	f2 49 0f 2d c4       	cvtsd2si rax,xmm12
     9ae:	f2 49 0f 2d 04 24    	cvtsd2si rax,QWORD PTR [r12]
     9b4:	f2 49 0f 2a c4       	cvtsi2sd xmm0,r12
     9b9:	f2 41 0f 2a 04 24    	cvtsi2sd xmm0,DWORD PTR [r12]
     9bf:	48 2d 10 32 54 76    	sub    rax,0x76543210
     9c5:	48 2d 10 32 54 76    	sub    rax,0x76543210
     9cb:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     9d2:	49 2b c5             	sub    rax,r13
     9d5:	49 29 45 00          	sub    QWORD PTR [r13+0x0],rax
     9d9:	4c 2b 28             	sub    r13,QWORD PTR [rax]
     9dc:	49 f7 ed             	imul   r13
     9df:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
     9e3:	49 f7 ed             	imul   r13
     9e6:	49 69 c5 10 32 54 76 	imul   rax,r13,0x76543210
     9ed:	49 0f af 45 00       	imul   rax,QWORD PTR [r13+0x0]
     9f2:	49 69 45 00 10 32 54 	imul   rax,QWORD PTR [r13+0x0],0x76543210
     9f9:	76 
     9fa:	49 f7 fd             	idiv   r13
     9fd:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
     a01:	0f 8d 10 32 54 76    	jge    0x76543c17
     a07:	e9 10 32 54 76       	jmp    0x76543c1c
     a0c:	41 ff e5             	jmp    r13
     a0f:	49 8b c5             	mov    rax,r13
     a12:	49 8b 45 00          	mov    rax,QWORD PTR [r13+0x0]
     a16:	4c 89 28             	mov    QWORD PTR [rax],r13
     a19:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     a20:	09 00 00 
     a23:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     a2a:	00 00 00 
     a2d:	e8 10 32 54 76       	call   0x76543c42
     a32:	41 ff d5             	call   r13
     a35:	c3                   	ret    
     a36:	49 d1 ed             	shr    r13,1
     a39:	49 c1 ed 12          	shr    r13,0x12
     a3d:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
     a41:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
     a46:	49 f7 dd             	neg    r13
     a49:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
     a4d:	0f 05                	syscall 
     a4f:	41 55                	push   r13
     a51:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
     a55:	68 10 32 54 76       	push   0x76543210
     a5a:	41 5d                	pop    r13
     a5c:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
     a60:	49 ff c5             	inc    r13
     a63:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
     a67:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     a68:	f3 e2 12             	repz loop 0xa7d
     a6b:	e1 12                	loope  0xa7f
     a6d:	e0 12                	loopne 0xa81
     a6f:	f2 41 0f 10 c5       	movsd  xmm0,xmm13
     a74:	f2 41 0f 10 45 00    	movsd  xmm0,QWORD PTR [r13+0x0]
     a7a:	f2 49 0f 2d c5       	cvtsd2si rax,xmm13
     a7f:	f2 49 0f 2d 45 00    	cvtsd2si rax,QWORD PTR [r13+0x0]
     a85:	f2 49 0f 2a c5       	cvtsi2sd xmm0,r13
     a8a:	f2 41 0f 2a 45 00    	cvtsi2sd xmm0,DWORD PTR [r13+0x0]
     a90:	48 2d 10 32 54 76    	sub    rax,0x76543210
     a96:	48 2d 10 32 54 76    	sub    rax,0x76543210
     a9c:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     aa3:	49 2b c6             	sub    rax,r14
     aa6:	49 29 06             	sub    QWORD PTR [r14],rax
     aa9:	4c 2b 30             	sub    r14,QWORD PTR [rax]
     aac:	49 f7 ee             	imul   r14
     aaf:	49 f7 2e             	imul   QWORD PTR [r14]
     ab2:	49 f7 ee             	imul   r14
     ab5:	49 69 c6 10 32 54 76 	imul   rax,r14,0x76543210
     abc:	49 0f af 06          	imul   rax,QWORD PTR [r14]
     ac0:	49 69 06 10 32 54 76 	imul   rax,QWORD PTR [r14],0x76543210
     ac7:	49 f7 fe             	idiv   r14
     aca:	49 f7 3e             	idiv   QWORD PTR [r14]
     acd:	0f 8d 10 32 54 76    	jge    0x76543ce3
     ad3:	e9 10 32 54 76       	jmp    0x76543ce8
     ad8:	41 ff e6             	jmp    r14
     adb:	49 8b c6             	mov    rax,r14
     ade:	49 8b 06             	mov    rax,QWORD PTR [r14]
     ae1:	4c 89 30             	mov    QWORD PTR [rax],r14
     ae4:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     aeb:	09 00 00 
     aee:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     af5:	00 00 00 
     af8:	e8 10 32 54 76       	call   0x76543d0d
     afd:	41 ff d6             	call   r14
     b00:	c3                   	ret    
     b01:	49 d1 ee             	shr    r14,1
     b04:	49 c1 ee 12          	shr    r14,0x12
     b08:	49 d1 2e             	shr    QWORD PTR [r14],1
     b0b:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
     b0f:	49 f7 de             	neg    r14
     b12:	49 f7 1e             	neg    QWORD PTR [r14]
     b15:	0f 05                	syscall 
     b17:	41 56                	push   r14
     b19:	41 ff 36             	push   QWORD PTR [r14]
     b1c:	68 10 32 54 76       	push   0x76543210
     b21:	41 5e                	pop    r14
     b23:	41 8f 06             	pop    QWORD PTR [r14]
     b26:	49 ff c6             	inc    r14
     b29:	49 ff 06             	inc    QWORD PTR [r14]
     b2c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     b2d:	f3 e2 12             	repz loop 0xb42
     b30:	e1 12                	loope  0xb44
     b32:	e0 12                	loopne 0xb46
     b34:	f2 41 0f 10 c6       	movsd  xmm0,xmm14
     b39:	f2 41 0f 10 06       	movsd  xmm0,QWORD PTR [r14]
     b3e:	f2 49 0f 2d c6       	cvtsd2si rax,xmm14
     b43:	f2 49 0f 2d 06       	cvtsd2si rax,QWORD PTR [r14]
     b48:	f2 49 0f 2a c6       	cvtsi2sd xmm0,r14
     b4d:	f2 41 0f 2a 06       	cvtsi2sd xmm0,DWORD PTR [r14]
     b52:	48 2d 10 32 54 76    	sub    rax,0x76543210
     b58:	48 2d 10 32 54 76    	sub    rax,0x76543210
     b5e:	48 81 28 10 32 54 76 	sub    QWORD PTR [rax],0x76543210
     b65:	49 2b c7             	sub    rax,r15
     b68:	49 29 07             	sub    QWORD PTR [r15],rax
     b6b:	4c 2b 38             	sub    r15,QWORD PTR [rax]
     b6e:	49 f7 ef             	imul   r15
     b71:	49 f7 2f             	imul   QWORD PTR [r15]
     b74:	49 f7 ef             	imul   r15
     b77:	49 69 c7 10 32 54 76 	imul   rax,r15,0x76543210
     b7e:	49 0f af 07          	imul   rax,QWORD PTR [r15]
     b82:	49 69 07 10 32 54 76 	imul   rax,QWORD PTR [r15],0x76543210
     b89:	49 f7 ff             	idiv   r15
     b8c:	49 f7 3f             	idiv   QWORD PTR [r15]
     b8f:	0f 8d 10 32 54 76    	jge    0x76543da5
     b95:	e9 10 32 54 76       	jmp    0x76543daa
     b9a:	41 ff e7             	jmp    r15
     b9d:	49 8b c7             	mov    rax,r15
     ba0:	49 8b 07             	mov    rax,QWORD PTR [r15]
     ba3:	4c 89 38             	mov    QWORD PTR [rax],r15
     ba6:	48 b8 09 21 43 65 87 	movabs rax,0x98765432109
     bad:	09 00 00 
     bb0:	48 b8 10 32 54 76 00 	movabs rax,0x76543210
     bb7:	00 00 00 
     bba:	e8 10 32 54 76       	call   0x76543dcf
     bbf:	41 ff d7             	call   r15
     bc2:	c3                   	ret    
     bc3:	49 d1 ef             	shr    r15,1
     bc6:	49 c1 ef 12          	shr    r15,0x12
     bca:	49 d1 2f             	shr    QWORD PTR [r15],1
     bcd:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
     bd1:	49 f7 df             	neg    r15
     bd4:	49 f7 1f             	neg    QWORD PTR [r15]
     bd7:	0f 05                	syscall 
     bd9:	41 57                	push   r15
     bdb:	41 ff 37             	push   QWORD PTR [r15]
     bde:	68 10 32 54 76       	push   0x76543210
     be3:	41 5f                	pop    r15
     be5:	41 8f 07             	pop    QWORD PTR [r15]
     be8:	49 ff c7             	inc    r15
     beb:	49 ff 07             	inc    QWORD PTR [r15]
     bee:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     bef:	f3 e2 12             	repz loop 0xc04
     bf2:	e1 12                	loope  0xc06
     bf4:	e0 12                	loopne 0xc08
     bf6:	f2 41 0f 10 c7       	movsd  xmm0,xmm15
     bfb:	f2 41 0f 10 07       	movsd  xmm0,QWORD PTR [r15]
     c00:	f2 49 0f 2d c7       	cvtsd2si rax,xmm15
     c05:	f2 49 0f 2d 07       	cvtsd2si rax,QWORD PTR [r15]
     c0a:	f2 49 0f 2a c7       	cvtsi2sd xmm0,r15
     c0f:	f2 41 0f 2a 07       	cvtsi2sd xmm0,DWORD PTR [r15]
     c14:	48 2d 10 32 54 76    	sub    rax,0x76543210
     c1a:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
     c21:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
     c28:	48 2b c8             	sub    rcx,rax
     c2b:	48 29 08             	sub    QWORD PTR [rax],rcx
     c2e:	48 2b 01             	sub    rax,QWORD PTR [rcx]
     c31:	48 f7 e8             	imul   rax
     c34:	48 f7 28             	imul   QWORD PTR [rax]
     c37:	48 0f af c8          	imul   rcx,rax
     c3b:	48 69 c8 10 32 54 76 	imul   rcx,rax,0x76543210
     c42:	48 0f af 08          	imul   rcx,QWORD PTR [rax]
     c46:	48 69 08 10 32 54 76 	imul   rcx,QWORD PTR [rax],0x76543210
     c4d:	48 f7 f8             	idiv   rax
     c50:	48 f7 38             	idiv   QWORD PTR [rax]
     c53:	0f 8d 10 32 54 76    	jge    0x76543e69
     c59:	e9 10 32 54 76       	jmp    0x76543e6e
     c5e:	ff e0                	jmp    rax
     c60:	48 8b c8             	mov    rcx,rax
     c63:	48 8b 08             	mov    rcx,QWORD PTR [rax]
     c66:	48 89 01             	mov    QWORD PTR [rcx],rax
     c69:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
     c70:	09 00 00 
     c73:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
     c7a:	00 00 00 
     c7d:	e8 10 32 54 76       	call   0x76543e92
     c82:	ff d0                	call   rax
     c84:	c3                   	ret    
     c85:	48 d1 e8             	shr    rax,1
     c88:	48 c1 e8 12          	shr    rax,0x12
     c8c:	48 d1 28             	shr    QWORD PTR [rax],1
     c8f:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
     c93:	48 f7 d8             	neg    rax
     c96:	48 f7 18             	neg    QWORD PTR [rax]
     c99:	0f 05                	syscall 
     c9b:	50                   	push   rax
     c9c:	ff 30                	push   QWORD PTR [rax]
     c9e:	68 10 32 54 76       	push   0x76543210
     ca3:	58                   	pop    rax
     ca4:	8f 00                	pop    QWORD PTR [rax]
     ca6:	48 ff c0             	inc    rax
     ca9:	48 ff 00             	inc    QWORD PTR [rax]
     cac:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     cad:	f3 e2 12             	repz loop 0xcc2
     cb0:	e1 12                	loope  0xcc4
     cb2:	e0 12                	loopne 0xcc6
     cb4:	f2 0f 10 c8          	movsd  xmm1,xmm0
     cb8:	f2 0f 10 08          	movsd  xmm1,QWORD PTR [rax]
     cbc:	f2 48 0f 2d c8       	cvtsd2si rcx,xmm0
     cc1:	f2 48 0f 2d 08       	cvtsd2si rcx,QWORD PTR [rax]
     cc6:	f2 48 0f 2a c8       	cvtsi2sd xmm1,rax
     ccb:	f2 0f 2a 08          	cvtsi2sd xmm1,DWORD PTR [rax]
     ccf:	48 2d 10 32 54 76    	sub    rax,0x76543210
     cd5:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
     cdc:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
     ce3:	48 2b c9             	sub    rcx,rcx
     ce6:	48 29 09             	sub    QWORD PTR [rcx],rcx
     ce9:	48 2b 09             	sub    rcx,QWORD PTR [rcx]
     cec:	48 f7 e9             	imul   rcx
     cef:	48 f7 29             	imul   QWORD PTR [rcx]
     cf2:	48 0f af c9          	imul   rcx,rcx
     cf6:	48 69 c9 10 32 54 76 	imul   rcx,rcx,0x76543210
     cfd:	48 0f af 09          	imul   rcx,QWORD PTR [rcx]
     d01:	48 69 09 10 32 54 76 	imul   rcx,QWORD PTR [rcx],0x76543210
     d08:	48 f7 f9             	idiv   rcx
     d0b:	48 f7 39             	idiv   QWORD PTR [rcx]
     d0e:	0f 8d 10 32 54 76    	jge    0x76543f24
     d14:	e9 10 32 54 76       	jmp    0x76543f29
     d19:	ff e1                	jmp    rcx
     d1b:	48 8b c9             	mov    rcx,rcx
     d1e:	48 8b 09             	mov    rcx,QWORD PTR [rcx]
     d21:	48 89 09             	mov    QWORD PTR [rcx],rcx
     d24:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
     d2b:	09 00 00 
     d2e:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
     d35:	00 00 00 
     d38:	e8 10 32 54 76       	call   0x76543f4d
     d3d:	ff d1                	call   rcx
     d3f:	c3                   	ret    
     d40:	48 d1 e9             	shr    rcx,1
     d43:	48 c1 e9 12          	shr    rcx,0x12
     d47:	48 d1 29             	shr    QWORD PTR [rcx],1
     d4a:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
     d4e:	48 f7 d9             	neg    rcx
     d51:	48 f7 19             	neg    QWORD PTR [rcx]
     d54:	0f 05                	syscall 
     d56:	51                   	push   rcx
     d57:	ff 31                	push   QWORD PTR [rcx]
     d59:	68 10 32 54 76       	push   0x76543210
     d5e:	59                   	pop    rcx
     d5f:	8f 01                	pop    QWORD PTR [rcx]
     d61:	48 ff c1             	inc    rcx
     d64:	48 ff 01             	inc    QWORD PTR [rcx]
     d67:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     d68:	f3 e2 12             	repz loop 0xd7d
     d6b:	e1 12                	loope  0xd7f
     d6d:	e0 12                	loopne 0xd81
     d6f:	f2 0f 10 c9          	movsd  xmm1,xmm1
     d73:	f2 0f 10 09          	movsd  xmm1,QWORD PTR [rcx]
     d77:	f2 48 0f 2d c9       	cvtsd2si rcx,xmm1
     d7c:	f2 48 0f 2d 09       	cvtsd2si rcx,QWORD PTR [rcx]
     d81:	f2 48 0f 2a c9       	cvtsi2sd xmm1,rcx
     d86:	f2 0f 2a 09          	cvtsi2sd xmm1,DWORD PTR [rcx]
     d8a:	48 2d 10 32 54 76    	sub    rax,0x76543210
     d90:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
     d97:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
     d9e:	48 2b ca             	sub    rcx,rdx
     da1:	48 29 0a             	sub    QWORD PTR [rdx],rcx
     da4:	48 2b 11             	sub    rdx,QWORD PTR [rcx]
     da7:	48 f7 ea             	imul   rdx
     daa:	48 f7 2a             	imul   QWORD PTR [rdx]
     dad:	48 0f af ca          	imul   rcx,rdx
     db1:	48 69 ca 10 32 54 76 	imul   rcx,rdx,0x76543210
     db8:	48 0f af 0a          	imul   rcx,QWORD PTR [rdx]
     dbc:	48 69 0a 10 32 54 76 	imul   rcx,QWORD PTR [rdx],0x76543210
     dc3:	48 f7 fa             	idiv   rdx
     dc6:	48 f7 3a             	idiv   QWORD PTR [rdx]
     dc9:	0f 8d 10 32 54 76    	jge    0x76543fdf
     dcf:	e9 10 32 54 76       	jmp    0x76543fe4
     dd4:	ff e2                	jmp    rdx
     dd6:	48 8b ca             	mov    rcx,rdx
     dd9:	48 8b 0a             	mov    rcx,QWORD PTR [rdx]
     ddc:	48 89 11             	mov    QWORD PTR [rcx],rdx
     ddf:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
     de6:	09 00 00 
     de9:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
     df0:	00 00 00 
     df3:	e8 10 32 54 76       	call   0x76544008
     df8:	ff d2                	call   rdx
     dfa:	c3                   	ret    
     dfb:	48 d1 ea             	shr    rdx,1
     dfe:	48 c1 ea 12          	shr    rdx,0x12
     e02:	48 d1 2a             	shr    QWORD PTR [rdx],1
     e05:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
     e09:	48 f7 da             	neg    rdx
     e0c:	48 f7 1a             	neg    QWORD PTR [rdx]
     e0f:	0f 05                	syscall 
     e11:	52                   	push   rdx
     e12:	ff 32                	push   QWORD PTR [rdx]
     e14:	68 10 32 54 76       	push   0x76543210
     e19:	5a                   	pop    rdx
     e1a:	8f 02                	pop    QWORD PTR [rdx]
     e1c:	48 ff c2             	inc    rdx
     e1f:	48 ff 02             	inc    QWORD PTR [rdx]
     e22:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     e23:	f3 e2 12             	repz loop 0xe38
     e26:	e1 12                	loope  0xe3a
     e28:	e0 12                	loopne 0xe3c
     e2a:	f2 0f 10 ca          	movsd  xmm1,xmm2
     e2e:	f2 0f 10 0a          	movsd  xmm1,QWORD PTR [rdx]
     e32:	f2 48 0f 2d ca       	cvtsd2si rcx,xmm2
     e37:	f2 48 0f 2d 0a       	cvtsd2si rcx,QWORD PTR [rdx]
     e3c:	f2 48 0f 2a ca       	cvtsi2sd xmm1,rdx
     e41:	f2 0f 2a 0a          	cvtsi2sd xmm1,DWORD PTR [rdx]
     e45:	48 2d 10 32 54 76    	sub    rax,0x76543210
     e4b:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
     e52:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
     e59:	48 2b cb             	sub    rcx,rbx
     e5c:	48 29 0b             	sub    QWORD PTR [rbx],rcx
     e5f:	48 2b 19             	sub    rbx,QWORD PTR [rcx]
     e62:	48 f7 eb             	imul   rbx
     e65:	48 f7 2b             	imul   QWORD PTR [rbx]
     e68:	48 0f af cb          	imul   rcx,rbx
     e6c:	48 69 cb 10 32 54 76 	imul   rcx,rbx,0x76543210
     e73:	48 0f af 0b          	imul   rcx,QWORD PTR [rbx]
     e77:	48 69 0b 10 32 54 76 	imul   rcx,QWORD PTR [rbx],0x76543210
     e7e:	48 f7 fb             	idiv   rbx
     e81:	48 f7 3b             	idiv   QWORD PTR [rbx]
     e84:	0f 8d 10 32 54 76    	jge    0x7654409a
     e8a:	e9 10 32 54 76       	jmp    0x7654409f
     e8f:	ff e3                	jmp    rbx
     e91:	48 8b cb             	mov    rcx,rbx
     e94:	48 8b 0b             	mov    rcx,QWORD PTR [rbx]
     e97:	48 89 19             	mov    QWORD PTR [rcx],rbx
     e9a:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
     ea1:	09 00 00 
     ea4:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
     eab:	00 00 00 
     eae:	e8 10 32 54 76       	call   0x765440c3
     eb3:	ff d3                	call   rbx
     eb5:	c3                   	ret    
     eb6:	48 d1 eb             	shr    rbx,1
     eb9:	48 c1 eb 12          	shr    rbx,0x12
     ebd:	48 d1 2b             	shr    QWORD PTR [rbx],1
     ec0:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
     ec4:	48 f7 db             	neg    rbx
     ec7:	48 f7 1b             	neg    QWORD PTR [rbx]
     eca:	0f 05                	syscall 
     ecc:	53                   	push   rbx
     ecd:	ff 33                	push   QWORD PTR [rbx]
     ecf:	68 10 32 54 76       	push   0x76543210
     ed4:	5b                   	pop    rbx
     ed5:	8f 03                	pop    QWORD PTR [rbx]
     ed7:	48 ff c3             	inc    rbx
     eda:	48 ff 03             	inc    QWORD PTR [rbx]
     edd:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     ede:	f3 e2 12             	repz loop 0xef3
     ee1:	e1 12                	loope  0xef5
     ee3:	e0 12                	loopne 0xef7
     ee5:	f2 0f 10 cb          	movsd  xmm1,xmm3
     ee9:	f2 0f 10 0b          	movsd  xmm1,QWORD PTR [rbx]
     eed:	f2 48 0f 2d cb       	cvtsd2si rcx,xmm3
     ef2:	f2 48 0f 2d 0b       	cvtsd2si rcx,QWORD PTR [rbx]
     ef7:	f2 48 0f 2a cb       	cvtsi2sd xmm1,rbx
     efc:	f2 0f 2a 0b          	cvtsi2sd xmm1,DWORD PTR [rbx]
     f00:	48 2d 10 32 54 76    	sub    rax,0x76543210
     f06:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
     f0d:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
     f14:	48 2b cc             	sub    rcx,rsp
     f17:	48 29 0c 24          	sub    QWORD PTR [rsp],rcx
     f1b:	48 2b 21             	sub    rsp,QWORD PTR [rcx]
     f1e:	48 f7 ec             	imul   rsp
     f21:	48 f7 2c 24          	imul   QWORD PTR [rsp]
     f25:	48 0f af cc          	imul   rcx,rsp
     f29:	48 69 cc 10 32 54 76 	imul   rcx,rsp,0x76543210
     f30:	48 0f af 0c 24       	imul   rcx,QWORD PTR [rsp]
     f35:	48 69 0c 24 10 32 54 	imul   rcx,QWORD PTR [rsp],0x76543210
     f3c:	76 
     f3d:	48 f7 fc             	idiv   rsp
     f40:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
     f44:	0f 8d 10 32 54 76    	jge    0x7654415a
     f4a:	e9 10 32 54 76       	jmp    0x7654415f
     f4f:	ff e4                	jmp    rsp
     f51:	48 8b cc             	mov    rcx,rsp
     f54:	48 8b 0c 24          	mov    rcx,QWORD PTR [rsp]
     f58:	48 89 21             	mov    QWORD PTR [rcx],rsp
     f5b:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
     f62:	09 00 00 
     f65:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
     f6c:	00 00 00 
     f6f:	e8 10 32 54 76       	call   0x76544184
     f74:	ff d4                	call   rsp
     f76:	c3                   	ret    
     f77:	48 d1 ec             	shr    rsp,1
     f7a:	48 c1 ec 12          	shr    rsp,0x12
     f7e:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
     f82:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
     f87:	48 f7 dc             	neg    rsp
     f8a:	48 f7 1c 24          	neg    QWORD PTR [rsp]
     f8e:	0f 05                	syscall 
     f90:	54                   	push   rsp
     f91:	ff 34 24             	push   QWORD PTR [rsp]
     f94:	68 10 32 54 76       	push   0x76543210
     f99:	5c                   	pop    rsp
     f9a:	8f 04 24             	pop    QWORD PTR [rsp]
     f9d:	48 ff c4             	inc    rsp
     fa0:	48 ff 04 24          	inc    QWORD PTR [rsp]
     fa4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
     fa5:	f3 e2 12             	repz loop 0xfba
     fa8:	e1 12                	loope  0xfbc
     faa:	e0 12                	loopne 0xfbe
     fac:	f2 0f 10 cc          	movsd  xmm1,xmm4
     fb0:	f2 0f 10 0c 24       	movsd  xmm1,QWORD PTR [rsp]
     fb5:	f2 48 0f 2d cc       	cvtsd2si rcx,xmm4
     fba:	f2 48 0f 2d 0c 24    	cvtsd2si rcx,QWORD PTR [rsp]
     fc0:	f2 48 0f 2a cc       	cvtsi2sd xmm1,rsp
     fc5:	f2 0f 2a 0c 24       	cvtsi2sd xmm1,DWORD PTR [rsp]
     fca:	48 2d 10 32 54 76    	sub    rax,0x76543210
     fd0:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
     fd7:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
     fde:	48 2b cd             	sub    rcx,rbp
     fe1:	48 29 4d 00          	sub    QWORD PTR [rbp+0x0],rcx
     fe5:	48 2b 29             	sub    rbp,QWORD PTR [rcx]
     fe8:	48 f7 ed             	imul   rbp
     feb:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
     fef:	48 0f af cd          	imul   rcx,rbp
     ff3:	48 69 cd 10 32 54 76 	imul   rcx,rbp,0x76543210
     ffa:	48 0f af 4d 00       	imul   rcx,QWORD PTR [rbp+0x0]
     fff:	48 69 4d 00 10 32 54 	imul   rcx,QWORD PTR [rbp+0x0],0x76543210
    1006:	76 
    1007:	48 f7 fd             	idiv   rbp
    100a:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    100e:	0f 8d 10 32 54 76    	jge    0x76544224
    1014:	e9 10 32 54 76       	jmp    0x76544229
    1019:	ff e5                	jmp    rbp
    101b:	48 8b cd             	mov    rcx,rbp
    101e:	48 8b 4d 00          	mov    rcx,QWORD PTR [rbp+0x0]
    1022:	48 89 29             	mov    QWORD PTR [rcx],rbp
    1025:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    102c:	09 00 00 
    102f:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    1036:	00 00 00 
    1039:	e8 10 32 54 76       	call   0x7654424e
    103e:	ff d5                	call   rbp
    1040:	c3                   	ret    
    1041:	48 d1 ed             	shr    rbp,1
    1044:	48 c1 ed 12          	shr    rbp,0x12
    1048:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    104c:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    1051:	48 f7 dd             	neg    rbp
    1054:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    1058:	0f 05                	syscall 
    105a:	55                   	push   rbp
    105b:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    105e:	68 10 32 54 76       	push   0x76543210
    1063:	5d                   	pop    rbp
    1064:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    1067:	48 ff c5             	inc    rbp
    106a:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    106e:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    106f:	f3 e2 12             	repz loop 0x1084
    1072:	e1 12                	loope  0x1086
    1074:	e0 12                	loopne 0x1088
    1076:	f2 0f 10 cd          	movsd  xmm1,xmm5
    107a:	f2 0f 10 4d 00       	movsd  xmm1,QWORD PTR [rbp+0x0]
    107f:	f2 48 0f 2d cd       	cvtsd2si rcx,xmm5
    1084:	f2 48 0f 2d 4d 00    	cvtsd2si rcx,QWORD PTR [rbp+0x0]
    108a:	f2 48 0f 2a cd       	cvtsi2sd xmm1,rbp
    108f:	f2 0f 2a 4d 00       	cvtsi2sd xmm1,DWORD PTR [rbp+0x0]
    1094:	48 2d 10 32 54 76    	sub    rax,0x76543210
    109a:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
    10a1:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
    10a8:	48 2b ce             	sub    rcx,rsi
    10ab:	48 29 0e             	sub    QWORD PTR [rsi],rcx
    10ae:	48 2b 31             	sub    rsi,QWORD PTR [rcx]
    10b1:	48 f7 ee             	imul   rsi
    10b4:	48 f7 2e             	imul   QWORD PTR [rsi]
    10b7:	48 0f af ce          	imul   rcx,rsi
    10bb:	48 69 ce 10 32 54 76 	imul   rcx,rsi,0x76543210
    10c2:	48 0f af 0e          	imul   rcx,QWORD PTR [rsi]
    10c6:	48 69 0e 10 32 54 76 	imul   rcx,QWORD PTR [rsi],0x76543210
    10cd:	48 f7 fe             	idiv   rsi
    10d0:	48 f7 3e             	idiv   QWORD PTR [rsi]
    10d3:	0f 8d 10 32 54 76    	jge    0x765442e9
    10d9:	e9 10 32 54 76       	jmp    0x765442ee
    10de:	ff e6                	jmp    rsi
    10e0:	48 8b ce             	mov    rcx,rsi
    10e3:	48 8b 0e             	mov    rcx,QWORD PTR [rsi]
    10e6:	48 89 31             	mov    QWORD PTR [rcx],rsi
    10e9:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    10f0:	09 00 00 
    10f3:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    10fa:	00 00 00 
    10fd:	e8 10 32 54 76       	call   0x76544312
    1102:	ff d6                	call   rsi
    1104:	c3                   	ret    
    1105:	48 d1 ee             	shr    rsi,1
    1108:	48 c1 ee 12          	shr    rsi,0x12
    110c:	48 d1 2e             	shr    QWORD PTR [rsi],1
    110f:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    1113:	48 f7 de             	neg    rsi
    1116:	48 f7 1e             	neg    QWORD PTR [rsi]
    1119:	0f 05                	syscall 
    111b:	56                   	push   rsi
    111c:	ff 36                	push   QWORD PTR [rsi]
    111e:	68 10 32 54 76       	push   0x76543210
    1123:	5e                   	pop    rsi
    1124:	8f 06                	pop    QWORD PTR [rsi]
    1126:	48 ff c6             	inc    rsi
    1129:	48 ff 06             	inc    QWORD PTR [rsi]
    112c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    112d:	f3 e2 12             	repz loop 0x1142
    1130:	e1 12                	loope  0x1144
    1132:	e0 12                	loopne 0x1146
    1134:	f2 0f 10 ce          	movsd  xmm1,xmm6
    1138:	f2 0f 10 0e          	movsd  xmm1,QWORD PTR [rsi]
    113c:	f2 48 0f 2d ce       	cvtsd2si rcx,xmm6
    1141:	f2 48 0f 2d 0e       	cvtsd2si rcx,QWORD PTR [rsi]
    1146:	f2 48 0f 2a ce       	cvtsi2sd xmm1,rsi
    114b:	f2 0f 2a 0e          	cvtsi2sd xmm1,DWORD PTR [rsi]
    114f:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1155:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
    115c:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
    1163:	48 2b cf             	sub    rcx,rdi
    1166:	48 29 0f             	sub    QWORD PTR [rdi],rcx
    1169:	48 2b 39             	sub    rdi,QWORD PTR [rcx]
    116c:	48 f7 ef             	imul   rdi
    116f:	48 f7 2f             	imul   QWORD PTR [rdi]
    1172:	48 0f af cf          	imul   rcx,rdi
    1176:	48 69 cf 10 32 54 76 	imul   rcx,rdi,0x76543210
    117d:	48 0f af 0f          	imul   rcx,QWORD PTR [rdi]
    1181:	48 69 0f 10 32 54 76 	imul   rcx,QWORD PTR [rdi],0x76543210
    1188:	48 f7 ff             	idiv   rdi
    118b:	48 f7 3f             	idiv   QWORD PTR [rdi]
    118e:	0f 8d 10 32 54 76    	jge    0x765443a4
    1194:	e9 10 32 54 76       	jmp    0x765443a9
    1199:	ff e7                	jmp    rdi
    119b:	48 8b cf             	mov    rcx,rdi
    119e:	48 8b 0f             	mov    rcx,QWORD PTR [rdi]
    11a1:	48 89 39             	mov    QWORD PTR [rcx],rdi
    11a4:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    11ab:	09 00 00 
    11ae:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    11b5:	00 00 00 
    11b8:	e8 10 32 54 76       	call   0x765443cd
    11bd:	ff d7                	call   rdi
    11bf:	c3                   	ret    
    11c0:	48 d1 ef             	shr    rdi,1
    11c3:	48 c1 ef 12          	shr    rdi,0x12
    11c7:	48 d1 2f             	shr    QWORD PTR [rdi],1
    11ca:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    11ce:	48 f7 df             	neg    rdi
    11d1:	48 f7 1f             	neg    QWORD PTR [rdi]
    11d4:	0f 05                	syscall 
    11d6:	57                   	push   rdi
    11d7:	ff 37                	push   QWORD PTR [rdi]
    11d9:	68 10 32 54 76       	push   0x76543210
    11de:	5f                   	pop    rdi
    11df:	8f 07                	pop    QWORD PTR [rdi]
    11e1:	48 ff c7             	inc    rdi
    11e4:	48 ff 07             	inc    QWORD PTR [rdi]
    11e7:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    11e8:	f3 e2 12             	repz loop 0x11fd
    11eb:	e1 12                	loope  0x11ff
    11ed:	e0 12                	loopne 0x1201
    11ef:	f2 0f 10 cf          	movsd  xmm1,xmm7
    11f3:	f2 0f 10 0f          	movsd  xmm1,QWORD PTR [rdi]
    11f7:	f2 48 0f 2d cf       	cvtsd2si rcx,xmm7
    11fc:	f2 48 0f 2d 0f       	cvtsd2si rcx,QWORD PTR [rdi]
    1201:	f2 48 0f 2a cf       	cvtsi2sd xmm1,rdi
    1206:	f2 0f 2a 0f          	cvtsi2sd xmm1,DWORD PTR [rdi]
    120a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1210:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
    1217:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
    121e:	49 2b c8             	sub    rcx,r8
    1221:	49 29 08             	sub    QWORD PTR [r8],rcx
    1224:	4c 2b 01             	sub    r8,QWORD PTR [rcx]
    1227:	49 f7 e8             	imul   r8
    122a:	49 f7 28             	imul   QWORD PTR [r8]
    122d:	49 0f af c8          	imul   rcx,r8
    1231:	49 69 c8 10 32 54 76 	imul   rcx,r8,0x76543210
    1238:	49 0f af 08          	imul   rcx,QWORD PTR [r8]
    123c:	49 69 08 10 32 54 76 	imul   rcx,QWORD PTR [r8],0x76543210
    1243:	49 f7 f8             	idiv   r8
    1246:	49 f7 38             	idiv   QWORD PTR [r8]
    1249:	0f 8d 10 32 54 76    	jge    0x7654445f
    124f:	e9 10 32 54 76       	jmp    0x76544464
    1254:	41 ff e0             	jmp    r8
    1257:	49 8b c8             	mov    rcx,r8
    125a:	49 8b 08             	mov    rcx,QWORD PTR [r8]
    125d:	4c 89 01             	mov    QWORD PTR [rcx],r8
    1260:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    1267:	09 00 00 
    126a:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    1271:	00 00 00 
    1274:	e8 10 32 54 76       	call   0x76544489
    1279:	41 ff d0             	call   r8
    127c:	c3                   	ret    
    127d:	49 d1 e8             	shr    r8,1
    1280:	49 c1 e8 12          	shr    r8,0x12
    1284:	49 d1 28             	shr    QWORD PTR [r8],1
    1287:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    128b:	49 f7 d8             	neg    r8
    128e:	49 f7 18             	neg    QWORD PTR [r8]
    1291:	0f 05                	syscall 
    1293:	41 50                	push   r8
    1295:	41 ff 30             	push   QWORD PTR [r8]
    1298:	68 10 32 54 76       	push   0x76543210
    129d:	41 58                	pop    r8
    129f:	41 8f 00             	pop    QWORD PTR [r8]
    12a2:	49 ff c0             	inc    r8
    12a5:	49 ff 00             	inc    QWORD PTR [r8]
    12a8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    12a9:	f3 e2 12             	repz loop 0x12be
    12ac:	e1 12                	loope  0x12c0
    12ae:	e0 12                	loopne 0x12c2
    12b0:	f2 41 0f 10 c8       	movsd  xmm1,xmm8
    12b5:	f2 41 0f 10 08       	movsd  xmm1,QWORD PTR [r8]
    12ba:	f2 49 0f 2d c8       	cvtsd2si rcx,xmm8
    12bf:	f2 49 0f 2d 08       	cvtsd2si rcx,QWORD PTR [r8]
    12c4:	f2 49 0f 2a c8       	cvtsi2sd xmm1,r8
    12c9:	f2 41 0f 2a 08       	cvtsi2sd xmm1,DWORD PTR [r8]
    12ce:	48 2d 10 32 54 76    	sub    rax,0x76543210
    12d4:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
    12db:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
    12e2:	49 2b c9             	sub    rcx,r9
    12e5:	49 29 09             	sub    QWORD PTR [r9],rcx
    12e8:	4c 2b 09             	sub    r9,QWORD PTR [rcx]
    12eb:	49 f7 e9             	imul   r9
    12ee:	49 f7 29             	imul   QWORD PTR [r9]
    12f1:	49 0f af c9          	imul   rcx,r9
    12f5:	49 69 c9 10 32 54 76 	imul   rcx,r9,0x76543210
    12fc:	49 0f af 09          	imul   rcx,QWORD PTR [r9]
    1300:	49 69 09 10 32 54 76 	imul   rcx,QWORD PTR [r9],0x76543210
    1307:	49 f7 f9             	idiv   r9
    130a:	49 f7 39             	idiv   QWORD PTR [r9]
    130d:	0f 8d 10 32 54 76    	jge    0x76544523
    1313:	e9 10 32 54 76       	jmp    0x76544528
    1318:	41 ff e1             	jmp    r9
    131b:	49 8b c9             	mov    rcx,r9
    131e:	49 8b 09             	mov    rcx,QWORD PTR [r9]
    1321:	4c 89 09             	mov    QWORD PTR [rcx],r9
    1324:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    132b:	09 00 00 
    132e:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    1335:	00 00 00 
    1338:	e8 10 32 54 76       	call   0x7654454d
    133d:	41 ff d1             	call   r9
    1340:	c3                   	ret    
    1341:	49 d1 e9             	shr    r9,1
    1344:	49 c1 e9 12          	shr    r9,0x12
    1348:	49 d1 29             	shr    QWORD PTR [r9],1
    134b:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    134f:	49 f7 d9             	neg    r9
    1352:	49 f7 19             	neg    QWORD PTR [r9]
    1355:	0f 05                	syscall 
    1357:	41 51                	push   r9
    1359:	41 ff 31             	push   QWORD PTR [r9]
    135c:	68 10 32 54 76       	push   0x76543210
    1361:	41 59                	pop    r9
    1363:	41 8f 01             	pop    QWORD PTR [r9]
    1366:	49 ff c1             	inc    r9
    1369:	49 ff 01             	inc    QWORD PTR [r9]
    136c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    136d:	f3 e2 12             	repz loop 0x1382
    1370:	e1 12                	loope  0x1384
    1372:	e0 12                	loopne 0x1386
    1374:	f2 41 0f 10 c9       	movsd  xmm1,xmm9
    1379:	f2 41 0f 10 09       	movsd  xmm1,QWORD PTR [r9]
    137e:	f2 49 0f 2d c9       	cvtsd2si rcx,xmm9
    1383:	f2 49 0f 2d 09       	cvtsd2si rcx,QWORD PTR [r9]
    1388:	f2 49 0f 2a c9       	cvtsi2sd xmm1,r9
    138d:	f2 41 0f 2a 09       	cvtsi2sd xmm1,DWORD PTR [r9]
    1392:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1398:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
    139f:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
    13a6:	49 2b ca             	sub    rcx,r10
    13a9:	49 29 0a             	sub    QWORD PTR [r10],rcx
    13ac:	4c 2b 11             	sub    r10,QWORD PTR [rcx]
    13af:	49 f7 ea             	imul   r10
    13b2:	49 f7 2a             	imul   QWORD PTR [r10]
    13b5:	49 0f af ca          	imul   rcx,r10
    13b9:	49 69 ca 10 32 54 76 	imul   rcx,r10,0x76543210
    13c0:	49 0f af 0a          	imul   rcx,QWORD PTR [r10]
    13c4:	49 69 0a 10 32 54 76 	imul   rcx,QWORD PTR [r10],0x76543210
    13cb:	49 f7 fa             	idiv   r10
    13ce:	49 f7 3a             	idiv   QWORD PTR [r10]
    13d1:	0f 8d 10 32 54 76    	jge    0x765445e7
    13d7:	e9 10 32 54 76       	jmp    0x765445ec
    13dc:	41 ff e2             	jmp    r10
    13df:	49 8b ca             	mov    rcx,r10
    13e2:	49 8b 0a             	mov    rcx,QWORD PTR [r10]
    13e5:	4c 89 11             	mov    QWORD PTR [rcx],r10
    13e8:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    13ef:	09 00 00 
    13f2:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    13f9:	00 00 00 
    13fc:	e8 10 32 54 76       	call   0x76544611
    1401:	41 ff d2             	call   r10
    1404:	c3                   	ret    
    1405:	49 d1 ea             	shr    r10,1
    1408:	49 c1 ea 12          	shr    r10,0x12
    140c:	49 d1 2a             	shr    QWORD PTR [r10],1
    140f:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    1413:	49 f7 da             	neg    r10
    1416:	49 f7 1a             	neg    QWORD PTR [r10]
    1419:	0f 05                	syscall 
    141b:	41 52                	push   r10
    141d:	41 ff 32             	push   QWORD PTR [r10]
    1420:	68 10 32 54 76       	push   0x76543210
    1425:	41 5a                	pop    r10
    1427:	41 8f 02             	pop    QWORD PTR [r10]
    142a:	49 ff c2             	inc    r10
    142d:	49 ff 02             	inc    QWORD PTR [r10]
    1430:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1431:	f3 e2 12             	repz loop 0x1446
    1434:	e1 12                	loope  0x1448
    1436:	e0 12                	loopne 0x144a
    1438:	f2 41 0f 10 ca       	movsd  xmm1,xmm10
    143d:	f2 41 0f 10 0a       	movsd  xmm1,QWORD PTR [r10]
    1442:	f2 49 0f 2d ca       	cvtsd2si rcx,xmm10
    1447:	f2 49 0f 2d 0a       	cvtsd2si rcx,QWORD PTR [r10]
    144c:	f2 49 0f 2a ca       	cvtsi2sd xmm1,r10
    1451:	f2 41 0f 2a 0a       	cvtsi2sd xmm1,DWORD PTR [r10]
    1456:	48 2d 10 32 54 76    	sub    rax,0x76543210
    145c:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
    1463:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
    146a:	49 2b cb             	sub    rcx,r11
    146d:	49 29 0b             	sub    QWORD PTR [r11],rcx
    1470:	4c 2b 19             	sub    r11,QWORD PTR [rcx]
    1473:	49 f7 eb             	imul   r11
    1476:	49 f7 2b             	imul   QWORD PTR [r11]
    1479:	49 0f af cb          	imul   rcx,r11
    147d:	49 69 cb 10 32 54 76 	imul   rcx,r11,0x76543210
    1484:	49 0f af 0b          	imul   rcx,QWORD PTR [r11]
    1488:	49 69 0b 10 32 54 76 	imul   rcx,QWORD PTR [r11],0x76543210
    148f:	49 f7 fb             	idiv   r11
    1492:	49 f7 3b             	idiv   QWORD PTR [r11]
    1495:	0f 8d 10 32 54 76    	jge    0x765446ab
    149b:	e9 10 32 54 76       	jmp    0x765446b0
    14a0:	41 ff e3             	jmp    r11
    14a3:	49 8b cb             	mov    rcx,r11
    14a6:	49 8b 0b             	mov    rcx,QWORD PTR [r11]
    14a9:	4c 89 19             	mov    QWORD PTR [rcx],r11
    14ac:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    14b3:	09 00 00 
    14b6:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    14bd:	00 00 00 
    14c0:	e8 10 32 54 76       	call   0x765446d5
    14c5:	41 ff d3             	call   r11
    14c8:	c3                   	ret    
    14c9:	49 d1 eb             	shr    r11,1
    14cc:	49 c1 eb 12          	shr    r11,0x12
    14d0:	49 d1 2b             	shr    QWORD PTR [r11],1
    14d3:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    14d7:	49 f7 db             	neg    r11
    14da:	49 f7 1b             	neg    QWORD PTR [r11]
    14dd:	0f 05                	syscall 
    14df:	41 53                	push   r11
    14e1:	41 ff 33             	push   QWORD PTR [r11]
    14e4:	68 10 32 54 76       	push   0x76543210
    14e9:	41 5b                	pop    r11
    14eb:	41 8f 03             	pop    QWORD PTR [r11]
    14ee:	49 ff c3             	inc    r11
    14f1:	49 ff 03             	inc    QWORD PTR [r11]
    14f4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    14f5:	f3 e2 12             	repz loop 0x150a
    14f8:	e1 12                	loope  0x150c
    14fa:	e0 12                	loopne 0x150e
    14fc:	f2 41 0f 10 cb       	movsd  xmm1,xmm11
    1501:	f2 41 0f 10 0b       	movsd  xmm1,QWORD PTR [r11]
    1506:	f2 49 0f 2d cb       	cvtsd2si rcx,xmm11
    150b:	f2 49 0f 2d 0b       	cvtsd2si rcx,QWORD PTR [r11]
    1510:	f2 49 0f 2a cb       	cvtsi2sd xmm1,r11
    1515:	f2 41 0f 2a 0b       	cvtsi2sd xmm1,DWORD PTR [r11]
    151a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1520:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
    1527:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
    152e:	49 2b cc             	sub    rcx,r12
    1531:	49 29 0c 24          	sub    QWORD PTR [r12],rcx
    1535:	4c 2b 21             	sub    r12,QWORD PTR [rcx]
    1538:	49 f7 ec             	imul   r12
    153b:	49 f7 2c 24          	imul   QWORD PTR [r12]
    153f:	49 0f af cc          	imul   rcx,r12
    1543:	49 69 cc 10 32 54 76 	imul   rcx,r12,0x76543210
    154a:	49 0f af 0c 24       	imul   rcx,QWORD PTR [r12]
    154f:	49 69 0c 24 10 32 54 	imul   rcx,QWORD PTR [r12],0x76543210
    1556:	76 
    1557:	49 f7 fc             	idiv   r12
    155a:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    155e:	0f 8d 10 32 54 76    	jge    0x76544774
    1564:	e9 10 32 54 76       	jmp    0x76544779
    1569:	41 ff e4             	jmp    r12
    156c:	49 8b cc             	mov    rcx,r12
    156f:	49 8b 0c 24          	mov    rcx,QWORD PTR [r12]
    1573:	4c 89 21             	mov    QWORD PTR [rcx],r12
    1576:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    157d:	09 00 00 
    1580:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    1587:	00 00 00 
    158a:	e8 10 32 54 76       	call   0x7654479f
    158f:	41 ff d4             	call   r12
    1592:	c3                   	ret    
    1593:	49 d1 ec             	shr    r12,1
    1596:	49 c1 ec 12          	shr    r12,0x12
    159a:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    159e:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    15a3:	49 f7 dc             	neg    r12
    15a6:	49 f7 1c 24          	neg    QWORD PTR [r12]
    15aa:	0f 05                	syscall 
    15ac:	41 54                	push   r12
    15ae:	41 ff 34 24          	push   QWORD PTR [r12]
    15b2:	68 10 32 54 76       	push   0x76543210
    15b7:	41 5c                	pop    r12
    15b9:	41 8f 04 24          	pop    QWORD PTR [r12]
    15bd:	49 ff c4             	inc    r12
    15c0:	49 ff 04 24          	inc    QWORD PTR [r12]
    15c4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    15c5:	f3 e2 12             	repz loop 0x15da
    15c8:	e1 12                	loope  0x15dc
    15ca:	e0 12                	loopne 0x15de
    15cc:	f2 41 0f 10 cc       	movsd  xmm1,xmm12
    15d1:	f2 41 0f 10 0c 24    	movsd  xmm1,QWORD PTR [r12]
    15d7:	f2 49 0f 2d cc       	cvtsd2si rcx,xmm12
    15dc:	f2 49 0f 2d 0c 24    	cvtsd2si rcx,QWORD PTR [r12]
    15e2:	f2 49 0f 2a cc       	cvtsi2sd xmm1,r12
    15e7:	f2 41 0f 2a 0c 24    	cvtsi2sd xmm1,DWORD PTR [r12]
    15ed:	48 2d 10 32 54 76    	sub    rax,0x76543210
    15f3:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
    15fa:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
    1601:	49 2b cd             	sub    rcx,r13
    1604:	49 29 4d 00          	sub    QWORD PTR [r13+0x0],rcx
    1608:	4c 2b 29             	sub    r13,QWORD PTR [rcx]
    160b:	49 f7 ed             	imul   r13
    160e:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    1612:	49 0f af cd          	imul   rcx,r13
    1616:	49 69 cd 10 32 54 76 	imul   rcx,r13,0x76543210
    161d:	49 0f af 4d 00       	imul   rcx,QWORD PTR [r13+0x0]
    1622:	49 69 4d 00 10 32 54 	imul   rcx,QWORD PTR [r13+0x0],0x76543210
    1629:	76 
    162a:	49 f7 fd             	idiv   r13
    162d:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    1631:	0f 8d 10 32 54 76    	jge    0x76544847
    1637:	e9 10 32 54 76       	jmp    0x7654484c
    163c:	41 ff e5             	jmp    r13
    163f:	49 8b cd             	mov    rcx,r13
    1642:	49 8b 4d 00          	mov    rcx,QWORD PTR [r13+0x0]
    1646:	4c 89 29             	mov    QWORD PTR [rcx],r13
    1649:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    1650:	09 00 00 
    1653:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    165a:	00 00 00 
    165d:	e8 10 32 54 76       	call   0x76544872
    1662:	41 ff d5             	call   r13
    1665:	c3                   	ret    
    1666:	49 d1 ed             	shr    r13,1
    1669:	49 c1 ed 12          	shr    r13,0x12
    166d:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    1671:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    1676:	49 f7 dd             	neg    r13
    1679:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    167d:	0f 05                	syscall 
    167f:	41 55                	push   r13
    1681:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    1685:	68 10 32 54 76       	push   0x76543210
    168a:	41 5d                	pop    r13
    168c:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    1690:	49 ff c5             	inc    r13
    1693:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    1697:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1698:	f3 e2 12             	repz loop 0x16ad
    169b:	e1 12                	loope  0x16af
    169d:	e0 12                	loopne 0x16b1
    169f:	f2 41 0f 10 cd       	movsd  xmm1,xmm13
    16a4:	f2 41 0f 10 4d 00    	movsd  xmm1,QWORD PTR [r13+0x0]
    16aa:	f2 49 0f 2d cd       	cvtsd2si rcx,xmm13
    16af:	f2 49 0f 2d 4d 00    	cvtsd2si rcx,QWORD PTR [r13+0x0]
    16b5:	f2 49 0f 2a cd       	cvtsi2sd xmm1,r13
    16ba:	f2 41 0f 2a 4d 00    	cvtsi2sd xmm1,DWORD PTR [r13+0x0]
    16c0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    16c6:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
    16cd:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
    16d4:	49 2b ce             	sub    rcx,r14
    16d7:	49 29 0e             	sub    QWORD PTR [r14],rcx
    16da:	4c 2b 31             	sub    r14,QWORD PTR [rcx]
    16dd:	49 f7 ee             	imul   r14
    16e0:	49 f7 2e             	imul   QWORD PTR [r14]
    16e3:	49 0f af ce          	imul   rcx,r14
    16e7:	49 69 ce 10 32 54 76 	imul   rcx,r14,0x76543210
    16ee:	49 0f af 0e          	imul   rcx,QWORD PTR [r14]
    16f2:	49 69 0e 10 32 54 76 	imul   rcx,QWORD PTR [r14],0x76543210
    16f9:	49 f7 fe             	idiv   r14
    16fc:	49 f7 3e             	idiv   QWORD PTR [r14]
    16ff:	0f 8d 10 32 54 76    	jge    0x76544915
    1705:	e9 10 32 54 76       	jmp    0x7654491a
    170a:	41 ff e6             	jmp    r14
    170d:	49 8b ce             	mov    rcx,r14
    1710:	49 8b 0e             	mov    rcx,QWORD PTR [r14]
    1713:	4c 89 31             	mov    QWORD PTR [rcx],r14
    1716:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    171d:	09 00 00 
    1720:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    1727:	00 00 00 
    172a:	e8 10 32 54 76       	call   0x7654493f
    172f:	41 ff d6             	call   r14
    1732:	c3                   	ret    
    1733:	49 d1 ee             	shr    r14,1
    1736:	49 c1 ee 12          	shr    r14,0x12
    173a:	49 d1 2e             	shr    QWORD PTR [r14],1
    173d:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    1741:	49 f7 de             	neg    r14
    1744:	49 f7 1e             	neg    QWORD PTR [r14]
    1747:	0f 05                	syscall 
    1749:	41 56                	push   r14
    174b:	41 ff 36             	push   QWORD PTR [r14]
    174e:	68 10 32 54 76       	push   0x76543210
    1753:	41 5e                	pop    r14
    1755:	41 8f 06             	pop    QWORD PTR [r14]
    1758:	49 ff c6             	inc    r14
    175b:	49 ff 06             	inc    QWORD PTR [r14]
    175e:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    175f:	f3 e2 12             	repz loop 0x1774
    1762:	e1 12                	loope  0x1776
    1764:	e0 12                	loopne 0x1778
    1766:	f2 41 0f 10 ce       	movsd  xmm1,xmm14
    176b:	f2 41 0f 10 0e       	movsd  xmm1,QWORD PTR [r14]
    1770:	f2 49 0f 2d ce       	cvtsd2si rcx,xmm14
    1775:	f2 49 0f 2d 0e       	cvtsd2si rcx,QWORD PTR [r14]
    177a:	f2 49 0f 2a ce       	cvtsi2sd xmm1,r14
    177f:	f2 41 0f 2a 0e       	cvtsi2sd xmm1,DWORD PTR [r14]
    1784:	48 2d 10 32 54 76    	sub    rax,0x76543210
    178a:	48 81 e9 10 32 54 76 	sub    rcx,0x76543210
    1791:	48 81 29 10 32 54 76 	sub    QWORD PTR [rcx],0x76543210
    1798:	49 2b cf             	sub    rcx,r15
    179b:	49 29 0f             	sub    QWORD PTR [r15],rcx
    179e:	4c 2b 39             	sub    r15,QWORD PTR [rcx]
    17a1:	49 f7 ef             	imul   r15
    17a4:	49 f7 2f             	imul   QWORD PTR [r15]
    17a7:	49 0f af cf          	imul   rcx,r15
    17ab:	49 69 cf 10 32 54 76 	imul   rcx,r15,0x76543210
    17b2:	49 0f af 0f          	imul   rcx,QWORD PTR [r15]
    17b6:	49 69 0f 10 32 54 76 	imul   rcx,QWORD PTR [r15],0x76543210
    17bd:	49 f7 ff             	idiv   r15
    17c0:	49 f7 3f             	idiv   QWORD PTR [r15]
    17c3:	0f 8d 10 32 54 76    	jge    0x765449d9
    17c9:	e9 10 32 54 76       	jmp    0x765449de
    17ce:	41 ff e7             	jmp    r15
    17d1:	49 8b cf             	mov    rcx,r15
    17d4:	49 8b 0f             	mov    rcx,QWORD PTR [r15]
    17d7:	4c 89 39             	mov    QWORD PTR [rcx],r15
    17da:	48 b9 09 21 43 65 87 	movabs rcx,0x98765432109
    17e1:	09 00 00 
    17e4:	48 b9 10 32 54 76 00 	movabs rcx,0x76543210
    17eb:	00 00 00 
    17ee:	e8 10 32 54 76       	call   0x76544a03
    17f3:	41 ff d7             	call   r15
    17f6:	c3                   	ret    
    17f7:	49 d1 ef             	shr    r15,1
    17fa:	49 c1 ef 12          	shr    r15,0x12
    17fe:	49 d1 2f             	shr    QWORD PTR [r15],1
    1801:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    1805:	49 f7 df             	neg    r15
    1808:	49 f7 1f             	neg    QWORD PTR [r15]
    180b:	0f 05                	syscall 
    180d:	41 57                	push   r15
    180f:	41 ff 37             	push   QWORD PTR [r15]
    1812:	68 10 32 54 76       	push   0x76543210
    1817:	41 5f                	pop    r15
    1819:	41 8f 07             	pop    QWORD PTR [r15]
    181c:	49 ff c7             	inc    r15
    181f:	49 ff 07             	inc    QWORD PTR [r15]
    1822:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1823:	f3 e2 12             	repz loop 0x1838
    1826:	e1 12                	loope  0x183a
    1828:	e0 12                	loopne 0x183c
    182a:	f2 41 0f 10 cf       	movsd  xmm1,xmm15
    182f:	f2 41 0f 10 0f       	movsd  xmm1,QWORD PTR [r15]
    1834:	f2 49 0f 2d cf       	cvtsd2si rcx,xmm15
    1839:	f2 49 0f 2d 0f       	cvtsd2si rcx,QWORD PTR [r15]
    183e:	f2 49 0f 2a cf       	cvtsi2sd xmm1,r15
    1843:	f2 41 0f 2a 0f       	cvtsi2sd xmm1,DWORD PTR [r15]
    1848:	48 2d 10 32 54 76    	sub    rax,0x76543210
    184e:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    1855:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    185c:	48 2b d0             	sub    rdx,rax
    185f:	48 29 10             	sub    QWORD PTR [rax],rdx
    1862:	48 2b 02             	sub    rax,QWORD PTR [rdx]
    1865:	48 f7 e8             	imul   rax
    1868:	48 f7 28             	imul   QWORD PTR [rax]
    186b:	48 0f af d0          	imul   rdx,rax
    186f:	48 69 d0 10 32 54 76 	imul   rdx,rax,0x76543210
    1876:	48 0f af 10          	imul   rdx,QWORD PTR [rax]
    187a:	48 69 10 10 32 54 76 	imul   rdx,QWORD PTR [rax],0x76543210
    1881:	48 f7 f8             	idiv   rax
    1884:	48 f7 38             	idiv   QWORD PTR [rax]
    1887:	0f 8d 10 32 54 76    	jge    0x76544a9d
    188d:	e9 10 32 54 76       	jmp    0x76544aa2
    1892:	ff e0                	jmp    rax
    1894:	48 8b d0             	mov    rdx,rax
    1897:	48 8b 10             	mov    rdx,QWORD PTR [rax]
    189a:	48 89 02             	mov    QWORD PTR [rdx],rax
    189d:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    18a4:	09 00 00 
    18a7:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    18ae:	00 00 00 
    18b1:	e8 10 32 54 76       	call   0x76544ac6
    18b6:	ff d0                	call   rax
    18b8:	c3                   	ret    
    18b9:	48 d1 e8             	shr    rax,1
    18bc:	48 c1 e8 12          	shr    rax,0x12
    18c0:	48 d1 28             	shr    QWORD PTR [rax],1
    18c3:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    18c7:	48 f7 d8             	neg    rax
    18ca:	48 f7 18             	neg    QWORD PTR [rax]
    18cd:	0f 05                	syscall 
    18cf:	50                   	push   rax
    18d0:	ff 30                	push   QWORD PTR [rax]
    18d2:	68 10 32 54 76       	push   0x76543210
    18d7:	58                   	pop    rax
    18d8:	8f 00                	pop    QWORD PTR [rax]
    18da:	48 ff c0             	inc    rax
    18dd:	48 ff 00             	inc    QWORD PTR [rax]
    18e0:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    18e1:	f3 e2 12             	repz loop 0x18f6
    18e4:	e1 12                	loope  0x18f8
    18e6:	e0 12                	loopne 0x18fa
    18e8:	f2 0f 10 d0          	movsd  xmm2,xmm0
    18ec:	f2 0f 10 10          	movsd  xmm2,QWORD PTR [rax]
    18f0:	f2 48 0f 2d d0       	cvtsd2si rdx,xmm0
    18f5:	f2 48 0f 2d 10       	cvtsd2si rdx,QWORD PTR [rax]
    18fa:	f2 48 0f 2a d0       	cvtsi2sd xmm2,rax
    18ff:	f2 0f 2a 10          	cvtsi2sd xmm2,DWORD PTR [rax]
    1903:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1909:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    1910:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    1917:	48 2b d1             	sub    rdx,rcx
    191a:	48 29 11             	sub    QWORD PTR [rcx],rdx
    191d:	48 2b 0a             	sub    rcx,QWORD PTR [rdx]
    1920:	48 f7 e9             	imul   rcx
    1923:	48 f7 29             	imul   QWORD PTR [rcx]
    1926:	48 0f af d1          	imul   rdx,rcx
    192a:	48 69 d1 10 32 54 76 	imul   rdx,rcx,0x76543210
    1931:	48 0f af 11          	imul   rdx,QWORD PTR [rcx]
    1935:	48 69 11 10 32 54 76 	imul   rdx,QWORD PTR [rcx],0x76543210
    193c:	48 f7 f9             	idiv   rcx
    193f:	48 f7 39             	idiv   QWORD PTR [rcx]
    1942:	0f 8d 10 32 54 76    	jge    0x76544b58
    1948:	e9 10 32 54 76       	jmp    0x76544b5d
    194d:	ff e1                	jmp    rcx
    194f:	48 8b d1             	mov    rdx,rcx
    1952:	48 8b 11             	mov    rdx,QWORD PTR [rcx]
    1955:	48 89 0a             	mov    QWORD PTR [rdx],rcx
    1958:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    195f:	09 00 00 
    1962:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    1969:	00 00 00 
    196c:	e8 10 32 54 76       	call   0x76544b81
    1971:	ff d1                	call   rcx
    1973:	c3                   	ret    
    1974:	48 d1 e9             	shr    rcx,1
    1977:	48 c1 e9 12          	shr    rcx,0x12
    197b:	48 d1 29             	shr    QWORD PTR [rcx],1
    197e:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    1982:	48 f7 d9             	neg    rcx
    1985:	48 f7 19             	neg    QWORD PTR [rcx]
    1988:	0f 05                	syscall 
    198a:	51                   	push   rcx
    198b:	ff 31                	push   QWORD PTR [rcx]
    198d:	68 10 32 54 76       	push   0x76543210
    1992:	59                   	pop    rcx
    1993:	8f 01                	pop    QWORD PTR [rcx]
    1995:	48 ff c1             	inc    rcx
    1998:	48 ff 01             	inc    QWORD PTR [rcx]
    199b:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    199c:	f3 e2 12             	repz loop 0x19b1
    199f:	e1 12                	loope  0x19b3
    19a1:	e0 12                	loopne 0x19b5
    19a3:	f2 0f 10 d1          	movsd  xmm2,xmm1
    19a7:	f2 0f 10 11          	movsd  xmm2,QWORD PTR [rcx]
    19ab:	f2 48 0f 2d d1       	cvtsd2si rdx,xmm1
    19b0:	f2 48 0f 2d 11       	cvtsd2si rdx,QWORD PTR [rcx]
    19b5:	f2 48 0f 2a d1       	cvtsi2sd xmm2,rcx
    19ba:	f2 0f 2a 11          	cvtsi2sd xmm2,DWORD PTR [rcx]
    19be:	48 2d 10 32 54 76    	sub    rax,0x76543210
    19c4:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    19cb:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    19d2:	48 2b d2             	sub    rdx,rdx
    19d5:	48 29 12             	sub    QWORD PTR [rdx],rdx
    19d8:	48 2b 12             	sub    rdx,QWORD PTR [rdx]
    19db:	48 f7 ea             	imul   rdx
    19de:	48 f7 2a             	imul   QWORD PTR [rdx]
    19e1:	48 0f af d2          	imul   rdx,rdx
    19e5:	48 69 d2 10 32 54 76 	imul   rdx,rdx,0x76543210
    19ec:	48 0f af 12          	imul   rdx,QWORD PTR [rdx]
    19f0:	48 69 12 10 32 54 76 	imul   rdx,QWORD PTR [rdx],0x76543210
    19f7:	48 f7 fa             	idiv   rdx
    19fa:	48 f7 3a             	idiv   QWORD PTR [rdx]
    19fd:	0f 8d 10 32 54 76    	jge    0x76544c13
    1a03:	e9 10 32 54 76       	jmp    0x76544c18
    1a08:	ff e2                	jmp    rdx
    1a0a:	48 8b d2             	mov    rdx,rdx
    1a0d:	48 8b 12             	mov    rdx,QWORD PTR [rdx]
    1a10:	48 89 12             	mov    QWORD PTR [rdx],rdx
    1a13:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    1a1a:	09 00 00 
    1a1d:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    1a24:	00 00 00 
    1a27:	e8 10 32 54 76       	call   0x76544c3c
    1a2c:	ff d2                	call   rdx
    1a2e:	c3                   	ret    
    1a2f:	48 d1 ea             	shr    rdx,1
    1a32:	48 c1 ea 12          	shr    rdx,0x12
    1a36:	48 d1 2a             	shr    QWORD PTR [rdx],1
    1a39:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    1a3d:	48 f7 da             	neg    rdx
    1a40:	48 f7 1a             	neg    QWORD PTR [rdx]
    1a43:	0f 05                	syscall 
    1a45:	52                   	push   rdx
    1a46:	ff 32                	push   QWORD PTR [rdx]
    1a48:	68 10 32 54 76       	push   0x76543210
    1a4d:	5a                   	pop    rdx
    1a4e:	8f 02                	pop    QWORD PTR [rdx]
    1a50:	48 ff c2             	inc    rdx
    1a53:	48 ff 02             	inc    QWORD PTR [rdx]
    1a56:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1a57:	f3 e2 12             	repz loop 0x1a6c
    1a5a:	e1 12                	loope  0x1a6e
    1a5c:	e0 12                	loopne 0x1a70
    1a5e:	f2 0f 10 d2          	movsd  xmm2,xmm2
    1a62:	f2 0f 10 12          	movsd  xmm2,QWORD PTR [rdx]
    1a66:	f2 48 0f 2d d2       	cvtsd2si rdx,xmm2
    1a6b:	f2 48 0f 2d 12       	cvtsd2si rdx,QWORD PTR [rdx]
    1a70:	f2 48 0f 2a d2       	cvtsi2sd xmm2,rdx
    1a75:	f2 0f 2a 12          	cvtsi2sd xmm2,DWORD PTR [rdx]
    1a79:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1a7f:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    1a86:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    1a8d:	48 2b d3             	sub    rdx,rbx
    1a90:	48 29 13             	sub    QWORD PTR [rbx],rdx
    1a93:	48 2b 1a             	sub    rbx,QWORD PTR [rdx]
    1a96:	48 f7 eb             	imul   rbx
    1a99:	48 f7 2b             	imul   QWORD PTR [rbx]
    1a9c:	48 0f af d3          	imul   rdx,rbx
    1aa0:	48 69 d3 10 32 54 76 	imul   rdx,rbx,0x76543210
    1aa7:	48 0f af 13          	imul   rdx,QWORD PTR [rbx]
    1aab:	48 69 13 10 32 54 76 	imul   rdx,QWORD PTR [rbx],0x76543210
    1ab2:	48 f7 fb             	idiv   rbx
    1ab5:	48 f7 3b             	idiv   QWORD PTR [rbx]
    1ab8:	0f 8d 10 32 54 76    	jge    0x76544cce
    1abe:	e9 10 32 54 76       	jmp    0x76544cd3
    1ac3:	ff e3                	jmp    rbx
    1ac5:	48 8b d3             	mov    rdx,rbx
    1ac8:	48 8b 13             	mov    rdx,QWORD PTR [rbx]
    1acb:	48 89 1a             	mov    QWORD PTR [rdx],rbx
    1ace:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    1ad5:	09 00 00 
    1ad8:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    1adf:	00 00 00 
    1ae2:	e8 10 32 54 76       	call   0x76544cf7
    1ae7:	ff d3                	call   rbx
    1ae9:	c3                   	ret    
    1aea:	48 d1 eb             	shr    rbx,1
    1aed:	48 c1 eb 12          	shr    rbx,0x12
    1af1:	48 d1 2b             	shr    QWORD PTR [rbx],1
    1af4:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    1af8:	48 f7 db             	neg    rbx
    1afb:	48 f7 1b             	neg    QWORD PTR [rbx]
    1afe:	0f 05                	syscall 
    1b00:	53                   	push   rbx
    1b01:	ff 33                	push   QWORD PTR [rbx]
    1b03:	68 10 32 54 76       	push   0x76543210
    1b08:	5b                   	pop    rbx
    1b09:	8f 03                	pop    QWORD PTR [rbx]
    1b0b:	48 ff c3             	inc    rbx
    1b0e:	48 ff 03             	inc    QWORD PTR [rbx]
    1b11:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1b12:	f3 e2 12             	repz loop 0x1b27
    1b15:	e1 12                	loope  0x1b29
    1b17:	e0 12                	loopne 0x1b2b
    1b19:	f2 0f 10 d3          	movsd  xmm2,xmm3
    1b1d:	f2 0f 10 13          	movsd  xmm2,QWORD PTR [rbx]
    1b21:	f2 48 0f 2d d3       	cvtsd2si rdx,xmm3
    1b26:	f2 48 0f 2d 13       	cvtsd2si rdx,QWORD PTR [rbx]
    1b2b:	f2 48 0f 2a d3       	cvtsi2sd xmm2,rbx
    1b30:	f2 0f 2a 13          	cvtsi2sd xmm2,DWORD PTR [rbx]
    1b34:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1b3a:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    1b41:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    1b48:	48 2b d4             	sub    rdx,rsp
    1b4b:	48 29 14 24          	sub    QWORD PTR [rsp],rdx
    1b4f:	48 2b 22             	sub    rsp,QWORD PTR [rdx]
    1b52:	48 f7 ec             	imul   rsp
    1b55:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    1b59:	48 0f af d4          	imul   rdx,rsp
    1b5d:	48 69 d4 10 32 54 76 	imul   rdx,rsp,0x76543210
    1b64:	48 0f af 14 24       	imul   rdx,QWORD PTR [rsp]
    1b69:	48 69 14 24 10 32 54 	imul   rdx,QWORD PTR [rsp],0x76543210
    1b70:	76 
    1b71:	48 f7 fc             	idiv   rsp
    1b74:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    1b78:	0f 8d 10 32 54 76    	jge    0x76544d8e
    1b7e:	e9 10 32 54 76       	jmp    0x76544d93
    1b83:	ff e4                	jmp    rsp
    1b85:	48 8b d4             	mov    rdx,rsp
    1b88:	48 8b 14 24          	mov    rdx,QWORD PTR [rsp]
    1b8c:	48 89 22             	mov    QWORD PTR [rdx],rsp
    1b8f:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    1b96:	09 00 00 
    1b99:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    1ba0:	00 00 00 
    1ba3:	e8 10 32 54 76       	call   0x76544db8
    1ba8:	ff d4                	call   rsp
    1baa:	c3                   	ret    
    1bab:	48 d1 ec             	shr    rsp,1
    1bae:	48 c1 ec 12          	shr    rsp,0x12
    1bb2:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    1bb6:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    1bbb:	48 f7 dc             	neg    rsp
    1bbe:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    1bc2:	0f 05                	syscall 
    1bc4:	54                   	push   rsp
    1bc5:	ff 34 24             	push   QWORD PTR [rsp]
    1bc8:	68 10 32 54 76       	push   0x76543210
    1bcd:	5c                   	pop    rsp
    1bce:	8f 04 24             	pop    QWORD PTR [rsp]
    1bd1:	48 ff c4             	inc    rsp
    1bd4:	48 ff 04 24          	inc    QWORD PTR [rsp]
    1bd8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1bd9:	f3 e2 12             	repz loop 0x1bee
    1bdc:	e1 12                	loope  0x1bf0
    1bde:	e0 12                	loopne 0x1bf2
    1be0:	f2 0f 10 d4          	movsd  xmm2,xmm4
    1be4:	f2 0f 10 14 24       	movsd  xmm2,QWORD PTR [rsp]
    1be9:	f2 48 0f 2d d4       	cvtsd2si rdx,xmm4
    1bee:	f2 48 0f 2d 14 24    	cvtsd2si rdx,QWORD PTR [rsp]
    1bf4:	f2 48 0f 2a d4       	cvtsi2sd xmm2,rsp
    1bf9:	f2 0f 2a 14 24       	cvtsi2sd xmm2,DWORD PTR [rsp]
    1bfe:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1c04:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    1c0b:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    1c12:	48 2b d5             	sub    rdx,rbp
    1c15:	48 29 55 00          	sub    QWORD PTR [rbp+0x0],rdx
    1c19:	48 2b 2a             	sub    rbp,QWORD PTR [rdx]
    1c1c:	48 f7 ed             	imul   rbp
    1c1f:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    1c23:	48 0f af d5          	imul   rdx,rbp
    1c27:	48 69 d5 10 32 54 76 	imul   rdx,rbp,0x76543210
    1c2e:	48 0f af 55 00       	imul   rdx,QWORD PTR [rbp+0x0]
    1c33:	48 69 55 00 10 32 54 	imul   rdx,QWORD PTR [rbp+0x0],0x76543210
    1c3a:	76 
    1c3b:	48 f7 fd             	idiv   rbp
    1c3e:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    1c42:	0f 8d 10 32 54 76    	jge    0x76544e58
    1c48:	e9 10 32 54 76       	jmp    0x76544e5d
    1c4d:	ff e5                	jmp    rbp
    1c4f:	48 8b d5             	mov    rdx,rbp
    1c52:	48 8b 55 00          	mov    rdx,QWORD PTR [rbp+0x0]
    1c56:	48 89 2a             	mov    QWORD PTR [rdx],rbp
    1c59:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    1c60:	09 00 00 
    1c63:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    1c6a:	00 00 00 
    1c6d:	e8 10 32 54 76       	call   0x76544e82
    1c72:	ff d5                	call   rbp
    1c74:	c3                   	ret    
    1c75:	48 d1 ed             	shr    rbp,1
    1c78:	48 c1 ed 12          	shr    rbp,0x12
    1c7c:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    1c80:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    1c85:	48 f7 dd             	neg    rbp
    1c88:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    1c8c:	0f 05                	syscall 
    1c8e:	55                   	push   rbp
    1c8f:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    1c92:	68 10 32 54 76       	push   0x76543210
    1c97:	5d                   	pop    rbp
    1c98:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    1c9b:	48 ff c5             	inc    rbp
    1c9e:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    1ca2:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1ca3:	f3 e2 12             	repz loop 0x1cb8
    1ca6:	e1 12                	loope  0x1cba
    1ca8:	e0 12                	loopne 0x1cbc
    1caa:	f2 0f 10 d5          	movsd  xmm2,xmm5
    1cae:	f2 0f 10 55 00       	movsd  xmm2,QWORD PTR [rbp+0x0]
    1cb3:	f2 48 0f 2d d5       	cvtsd2si rdx,xmm5
    1cb8:	f2 48 0f 2d 55 00    	cvtsd2si rdx,QWORD PTR [rbp+0x0]
    1cbe:	f2 48 0f 2a d5       	cvtsi2sd xmm2,rbp
    1cc3:	f2 0f 2a 55 00       	cvtsi2sd xmm2,DWORD PTR [rbp+0x0]
    1cc8:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1cce:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    1cd5:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    1cdc:	48 2b d6             	sub    rdx,rsi
    1cdf:	48 29 16             	sub    QWORD PTR [rsi],rdx
    1ce2:	48 2b 32             	sub    rsi,QWORD PTR [rdx]
    1ce5:	48 f7 ee             	imul   rsi
    1ce8:	48 f7 2e             	imul   QWORD PTR [rsi]
    1ceb:	48 0f af d6          	imul   rdx,rsi
    1cef:	48 69 d6 10 32 54 76 	imul   rdx,rsi,0x76543210
    1cf6:	48 0f af 16          	imul   rdx,QWORD PTR [rsi]
    1cfa:	48 69 16 10 32 54 76 	imul   rdx,QWORD PTR [rsi],0x76543210
    1d01:	48 f7 fe             	idiv   rsi
    1d04:	48 f7 3e             	idiv   QWORD PTR [rsi]
    1d07:	0f 8d 10 32 54 76    	jge    0x76544f1d
    1d0d:	e9 10 32 54 76       	jmp    0x76544f22
    1d12:	ff e6                	jmp    rsi
    1d14:	48 8b d6             	mov    rdx,rsi
    1d17:	48 8b 16             	mov    rdx,QWORD PTR [rsi]
    1d1a:	48 89 32             	mov    QWORD PTR [rdx],rsi
    1d1d:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    1d24:	09 00 00 
    1d27:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    1d2e:	00 00 00 
    1d31:	e8 10 32 54 76       	call   0x76544f46
    1d36:	ff d6                	call   rsi
    1d38:	c3                   	ret    
    1d39:	48 d1 ee             	shr    rsi,1
    1d3c:	48 c1 ee 12          	shr    rsi,0x12
    1d40:	48 d1 2e             	shr    QWORD PTR [rsi],1
    1d43:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    1d47:	48 f7 de             	neg    rsi
    1d4a:	48 f7 1e             	neg    QWORD PTR [rsi]
    1d4d:	0f 05                	syscall 
    1d4f:	56                   	push   rsi
    1d50:	ff 36                	push   QWORD PTR [rsi]
    1d52:	68 10 32 54 76       	push   0x76543210
    1d57:	5e                   	pop    rsi
    1d58:	8f 06                	pop    QWORD PTR [rsi]
    1d5a:	48 ff c6             	inc    rsi
    1d5d:	48 ff 06             	inc    QWORD PTR [rsi]
    1d60:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1d61:	f3 e2 12             	repz loop 0x1d76
    1d64:	e1 12                	loope  0x1d78
    1d66:	e0 12                	loopne 0x1d7a
    1d68:	f2 0f 10 d6          	movsd  xmm2,xmm6
    1d6c:	f2 0f 10 16          	movsd  xmm2,QWORD PTR [rsi]
    1d70:	f2 48 0f 2d d6       	cvtsd2si rdx,xmm6
    1d75:	f2 48 0f 2d 16       	cvtsd2si rdx,QWORD PTR [rsi]
    1d7a:	f2 48 0f 2a d6       	cvtsi2sd xmm2,rsi
    1d7f:	f2 0f 2a 16          	cvtsi2sd xmm2,DWORD PTR [rsi]
    1d83:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1d89:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    1d90:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    1d97:	48 2b d7             	sub    rdx,rdi
    1d9a:	48 29 17             	sub    QWORD PTR [rdi],rdx
    1d9d:	48 2b 3a             	sub    rdi,QWORD PTR [rdx]
    1da0:	48 f7 ef             	imul   rdi
    1da3:	48 f7 2f             	imul   QWORD PTR [rdi]
    1da6:	48 0f af d7          	imul   rdx,rdi
    1daa:	48 69 d7 10 32 54 76 	imul   rdx,rdi,0x76543210
    1db1:	48 0f af 17          	imul   rdx,QWORD PTR [rdi]
    1db5:	48 69 17 10 32 54 76 	imul   rdx,QWORD PTR [rdi],0x76543210
    1dbc:	48 f7 ff             	idiv   rdi
    1dbf:	48 f7 3f             	idiv   QWORD PTR [rdi]
    1dc2:	0f 8d 10 32 54 76    	jge    0x76544fd8
    1dc8:	e9 10 32 54 76       	jmp    0x76544fdd
    1dcd:	ff e7                	jmp    rdi
    1dcf:	48 8b d7             	mov    rdx,rdi
    1dd2:	48 8b 17             	mov    rdx,QWORD PTR [rdi]
    1dd5:	48 89 3a             	mov    QWORD PTR [rdx],rdi
    1dd8:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    1ddf:	09 00 00 
    1de2:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    1de9:	00 00 00 
    1dec:	e8 10 32 54 76       	call   0x76545001
    1df1:	ff d7                	call   rdi
    1df3:	c3                   	ret    
    1df4:	48 d1 ef             	shr    rdi,1
    1df7:	48 c1 ef 12          	shr    rdi,0x12
    1dfb:	48 d1 2f             	shr    QWORD PTR [rdi],1
    1dfe:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    1e02:	48 f7 df             	neg    rdi
    1e05:	48 f7 1f             	neg    QWORD PTR [rdi]
    1e08:	0f 05                	syscall 
    1e0a:	57                   	push   rdi
    1e0b:	ff 37                	push   QWORD PTR [rdi]
    1e0d:	68 10 32 54 76       	push   0x76543210
    1e12:	5f                   	pop    rdi
    1e13:	8f 07                	pop    QWORD PTR [rdi]
    1e15:	48 ff c7             	inc    rdi
    1e18:	48 ff 07             	inc    QWORD PTR [rdi]
    1e1b:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1e1c:	f3 e2 12             	repz loop 0x1e31
    1e1f:	e1 12                	loope  0x1e33
    1e21:	e0 12                	loopne 0x1e35
    1e23:	f2 0f 10 d7          	movsd  xmm2,xmm7
    1e27:	f2 0f 10 17          	movsd  xmm2,QWORD PTR [rdi]
    1e2b:	f2 48 0f 2d d7       	cvtsd2si rdx,xmm7
    1e30:	f2 48 0f 2d 17       	cvtsd2si rdx,QWORD PTR [rdi]
    1e35:	f2 48 0f 2a d7       	cvtsi2sd xmm2,rdi
    1e3a:	f2 0f 2a 17          	cvtsi2sd xmm2,DWORD PTR [rdi]
    1e3e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1e44:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    1e4b:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    1e52:	49 2b d0             	sub    rdx,r8
    1e55:	49 29 10             	sub    QWORD PTR [r8],rdx
    1e58:	4c 2b 02             	sub    r8,QWORD PTR [rdx]
    1e5b:	49 f7 e8             	imul   r8
    1e5e:	49 f7 28             	imul   QWORD PTR [r8]
    1e61:	49 0f af d0          	imul   rdx,r8
    1e65:	49 69 d0 10 32 54 76 	imul   rdx,r8,0x76543210
    1e6c:	49 0f af 10          	imul   rdx,QWORD PTR [r8]
    1e70:	49 69 10 10 32 54 76 	imul   rdx,QWORD PTR [r8],0x76543210
    1e77:	49 f7 f8             	idiv   r8
    1e7a:	49 f7 38             	idiv   QWORD PTR [r8]
    1e7d:	0f 8d 10 32 54 76    	jge    0x76545093
    1e83:	e9 10 32 54 76       	jmp    0x76545098
    1e88:	41 ff e0             	jmp    r8
    1e8b:	49 8b d0             	mov    rdx,r8
    1e8e:	49 8b 10             	mov    rdx,QWORD PTR [r8]
    1e91:	4c 89 02             	mov    QWORD PTR [rdx],r8
    1e94:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    1e9b:	09 00 00 
    1e9e:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    1ea5:	00 00 00 
    1ea8:	e8 10 32 54 76       	call   0x765450bd
    1ead:	41 ff d0             	call   r8
    1eb0:	c3                   	ret    
    1eb1:	49 d1 e8             	shr    r8,1
    1eb4:	49 c1 e8 12          	shr    r8,0x12
    1eb8:	49 d1 28             	shr    QWORD PTR [r8],1
    1ebb:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    1ebf:	49 f7 d8             	neg    r8
    1ec2:	49 f7 18             	neg    QWORD PTR [r8]
    1ec5:	0f 05                	syscall 
    1ec7:	41 50                	push   r8
    1ec9:	41 ff 30             	push   QWORD PTR [r8]
    1ecc:	68 10 32 54 76       	push   0x76543210
    1ed1:	41 58                	pop    r8
    1ed3:	41 8f 00             	pop    QWORD PTR [r8]
    1ed6:	49 ff c0             	inc    r8
    1ed9:	49 ff 00             	inc    QWORD PTR [r8]
    1edc:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1edd:	f3 e2 12             	repz loop 0x1ef2
    1ee0:	e1 12                	loope  0x1ef4
    1ee2:	e0 12                	loopne 0x1ef6
    1ee4:	f2 41 0f 10 d0       	movsd  xmm2,xmm8
    1ee9:	f2 41 0f 10 10       	movsd  xmm2,QWORD PTR [r8]
    1eee:	f2 49 0f 2d d0       	cvtsd2si rdx,xmm8
    1ef3:	f2 49 0f 2d 10       	cvtsd2si rdx,QWORD PTR [r8]
    1ef8:	f2 49 0f 2a d0       	cvtsi2sd xmm2,r8
    1efd:	f2 41 0f 2a 10       	cvtsi2sd xmm2,DWORD PTR [r8]
    1f02:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1f08:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    1f0f:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    1f16:	49 2b d1             	sub    rdx,r9
    1f19:	49 29 11             	sub    QWORD PTR [r9],rdx
    1f1c:	4c 2b 0a             	sub    r9,QWORD PTR [rdx]
    1f1f:	49 f7 e9             	imul   r9
    1f22:	49 f7 29             	imul   QWORD PTR [r9]
    1f25:	49 0f af d1          	imul   rdx,r9
    1f29:	49 69 d1 10 32 54 76 	imul   rdx,r9,0x76543210
    1f30:	49 0f af 11          	imul   rdx,QWORD PTR [r9]
    1f34:	49 69 11 10 32 54 76 	imul   rdx,QWORD PTR [r9],0x76543210
    1f3b:	49 f7 f9             	idiv   r9
    1f3e:	49 f7 39             	idiv   QWORD PTR [r9]
    1f41:	0f 8d 10 32 54 76    	jge    0x76545157
    1f47:	e9 10 32 54 76       	jmp    0x7654515c
    1f4c:	41 ff e1             	jmp    r9
    1f4f:	49 8b d1             	mov    rdx,r9
    1f52:	49 8b 11             	mov    rdx,QWORD PTR [r9]
    1f55:	4c 89 0a             	mov    QWORD PTR [rdx],r9
    1f58:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    1f5f:	09 00 00 
    1f62:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    1f69:	00 00 00 
    1f6c:	e8 10 32 54 76       	call   0x76545181
    1f71:	41 ff d1             	call   r9
    1f74:	c3                   	ret    
    1f75:	49 d1 e9             	shr    r9,1
    1f78:	49 c1 e9 12          	shr    r9,0x12
    1f7c:	49 d1 29             	shr    QWORD PTR [r9],1
    1f7f:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    1f83:	49 f7 d9             	neg    r9
    1f86:	49 f7 19             	neg    QWORD PTR [r9]
    1f89:	0f 05                	syscall 
    1f8b:	41 51                	push   r9
    1f8d:	41 ff 31             	push   QWORD PTR [r9]
    1f90:	68 10 32 54 76       	push   0x76543210
    1f95:	41 59                	pop    r9
    1f97:	41 8f 01             	pop    QWORD PTR [r9]
    1f9a:	49 ff c1             	inc    r9
    1f9d:	49 ff 01             	inc    QWORD PTR [r9]
    1fa0:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    1fa1:	f3 e2 12             	repz loop 0x1fb6
    1fa4:	e1 12                	loope  0x1fb8
    1fa6:	e0 12                	loopne 0x1fba
    1fa8:	f2 41 0f 10 d1       	movsd  xmm2,xmm9
    1fad:	f2 41 0f 10 11       	movsd  xmm2,QWORD PTR [r9]
    1fb2:	f2 49 0f 2d d1       	cvtsd2si rdx,xmm9
    1fb7:	f2 49 0f 2d 11       	cvtsd2si rdx,QWORD PTR [r9]
    1fbc:	f2 49 0f 2a d1       	cvtsi2sd xmm2,r9
    1fc1:	f2 41 0f 2a 11       	cvtsi2sd xmm2,DWORD PTR [r9]
    1fc6:	48 2d 10 32 54 76    	sub    rax,0x76543210
    1fcc:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    1fd3:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    1fda:	49 2b d2             	sub    rdx,r10
    1fdd:	49 29 12             	sub    QWORD PTR [r10],rdx
    1fe0:	4c 2b 12             	sub    r10,QWORD PTR [rdx]
    1fe3:	49 f7 ea             	imul   r10
    1fe6:	49 f7 2a             	imul   QWORD PTR [r10]
    1fe9:	49 0f af d2          	imul   rdx,r10
    1fed:	49 69 d2 10 32 54 76 	imul   rdx,r10,0x76543210
    1ff4:	49 0f af 12          	imul   rdx,QWORD PTR [r10]
    1ff8:	49 69 12 10 32 54 76 	imul   rdx,QWORD PTR [r10],0x76543210
    1fff:	49 f7 fa             	idiv   r10
    2002:	49 f7 3a             	idiv   QWORD PTR [r10]
    2005:	0f 8d 10 32 54 76    	jge    0x7654521b
    200b:	e9 10 32 54 76       	jmp    0x76545220
    2010:	41 ff e2             	jmp    r10
    2013:	49 8b d2             	mov    rdx,r10
    2016:	49 8b 12             	mov    rdx,QWORD PTR [r10]
    2019:	4c 89 12             	mov    QWORD PTR [rdx],r10
    201c:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    2023:	09 00 00 
    2026:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    202d:	00 00 00 
    2030:	e8 10 32 54 76       	call   0x76545245
    2035:	41 ff d2             	call   r10
    2038:	c3                   	ret    
    2039:	49 d1 ea             	shr    r10,1
    203c:	49 c1 ea 12          	shr    r10,0x12
    2040:	49 d1 2a             	shr    QWORD PTR [r10],1
    2043:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    2047:	49 f7 da             	neg    r10
    204a:	49 f7 1a             	neg    QWORD PTR [r10]
    204d:	0f 05                	syscall 
    204f:	41 52                	push   r10
    2051:	41 ff 32             	push   QWORD PTR [r10]
    2054:	68 10 32 54 76       	push   0x76543210
    2059:	41 5a                	pop    r10
    205b:	41 8f 02             	pop    QWORD PTR [r10]
    205e:	49 ff c2             	inc    r10
    2061:	49 ff 02             	inc    QWORD PTR [r10]
    2064:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2065:	f3 e2 12             	repz loop 0x207a
    2068:	e1 12                	loope  0x207c
    206a:	e0 12                	loopne 0x207e
    206c:	f2 41 0f 10 d2       	movsd  xmm2,xmm10
    2071:	f2 41 0f 10 12       	movsd  xmm2,QWORD PTR [r10]
    2076:	f2 49 0f 2d d2       	cvtsd2si rdx,xmm10
    207b:	f2 49 0f 2d 12       	cvtsd2si rdx,QWORD PTR [r10]
    2080:	f2 49 0f 2a d2       	cvtsi2sd xmm2,r10
    2085:	f2 41 0f 2a 12       	cvtsi2sd xmm2,DWORD PTR [r10]
    208a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2090:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    2097:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    209e:	49 2b d3             	sub    rdx,r11
    20a1:	49 29 13             	sub    QWORD PTR [r11],rdx
    20a4:	4c 2b 1a             	sub    r11,QWORD PTR [rdx]
    20a7:	49 f7 eb             	imul   r11
    20aa:	49 f7 2b             	imul   QWORD PTR [r11]
    20ad:	49 0f af d3          	imul   rdx,r11
    20b1:	49 69 d3 10 32 54 76 	imul   rdx,r11,0x76543210
    20b8:	49 0f af 13          	imul   rdx,QWORD PTR [r11]
    20bc:	49 69 13 10 32 54 76 	imul   rdx,QWORD PTR [r11],0x76543210
    20c3:	49 f7 fb             	idiv   r11
    20c6:	49 f7 3b             	idiv   QWORD PTR [r11]
    20c9:	0f 8d 10 32 54 76    	jge    0x765452df
    20cf:	e9 10 32 54 76       	jmp    0x765452e4
    20d4:	41 ff e3             	jmp    r11
    20d7:	49 8b d3             	mov    rdx,r11
    20da:	49 8b 13             	mov    rdx,QWORD PTR [r11]
    20dd:	4c 89 1a             	mov    QWORD PTR [rdx],r11
    20e0:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    20e7:	09 00 00 
    20ea:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    20f1:	00 00 00 
    20f4:	e8 10 32 54 76       	call   0x76545309
    20f9:	41 ff d3             	call   r11
    20fc:	c3                   	ret    
    20fd:	49 d1 eb             	shr    r11,1
    2100:	49 c1 eb 12          	shr    r11,0x12
    2104:	49 d1 2b             	shr    QWORD PTR [r11],1
    2107:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    210b:	49 f7 db             	neg    r11
    210e:	49 f7 1b             	neg    QWORD PTR [r11]
    2111:	0f 05                	syscall 
    2113:	41 53                	push   r11
    2115:	41 ff 33             	push   QWORD PTR [r11]
    2118:	68 10 32 54 76       	push   0x76543210
    211d:	41 5b                	pop    r11
    211f:	41 8f 03             	pop    QWORD PTR [r11]
    2122:	49 ff c3             	inc    r11
    2125:	49 ff 03             	inc    QWORD PTR [r11]
    2128:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2129:	f3 e2 12             	repz loop 0x213e
    212c:	e1 12                	loope  0x2140
    212e:	e0 12                	loopne 0x2142
    2130:	f2 41 0f 10 d3       	movsd  xmm2,xmm11
    2135:	f2 41 0f 10 13       	movsd  xmm2,QWORD PTR [r11]
    213a:	f2 49 0f 2d d3       	cvtsd2si rdx,xmm11
    213f:	f2 49 0f 2d 13       	cvtsd2si rdx,QWORD PTR [r11]
    2144:	f2 49 0f 2a d3       	cvtsi2sd xmm2,r11
    2149:	f2 41 0f 2a 13       	cvtsi2sd xmm2,DWORD PTR [r11]
    214e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2154:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    215b:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    2162:	49 2b d4             	sub    rdx,r12
    2165:	49 29 14 24          	sub    QWORD PTR [r12],rdx
    2169:	4c 2b 22             	sub    r12,QWORD PTR [rdx]
    216c:	49 f7 ec             	imul   r12
    216f:	49 f7 2c 24          	imul   QWORD PTR [r12]
    2173:	49 0f af d4          	imul   rdx,r12
    2177:	49 69 d4 10 32 54 76 	imul   rdx,r12,0x76543210
    217e:	49 0f af 14 24       	imul   rdx,QWORD PTR [r12]
    2183:	49 69 14 24 10 32 54 	imul   rdx,QWORD PTR [r12],0x76543210
    218a:	76 
    218b:	49 f7 fc             	idiv   r12
    218e:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    2192:	0f 8d 10 32 54 76    	jge    0x765453a8
    2198:	e9 10 32 54 76       	jmp    0x765453ad
    219d:	41 ff e4             	jmp    r12
    21a0:	49 8b d4             	mov    rdx,r12
    21a3:	49 8b 14 24          	mov    rdx,QWORD PTR [r12]
    21a7:	4c 89 22             	mov    QWORD PTR [rdx],r12
    21aa:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    21b1:	09 00 00 
    21b4:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    21bb:	00 00 00 
    21be:	e8 10 32 54 76       	call   0x765453d3
    21c3:	41 ff d4             	call   r12
    21c6:	c3                   	ret    
    21c7:	49 d1 ec             	shr    r12,1
    21ca:	49 c1 ec 12          	shr    r12,0x12
    21ce:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    21d2:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    21d7:	49 f7 dc             	neg    r12
    21da:	49 f7 1c 24          	neg    QWORD PTR [r12]
    21de:	0f 05                	syscall 
    21e0:	41 54                	push   r12
    21e2:	41 ff 34 24          	push   QWORD PTR [r12]
    21e6:	68 10 32 54 76       	push   0x76543210
    21eb:	41 5c                	pop    r12
    21ed:	41 8f 04 24          	pop    QWORD PTR [r12]
    21f1:	49 ff c4             	inc    r12
    21f4:	49 ff 04 24          	inc    QWORD PTR [r12]
    21f8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    21f9:	f3 e2 12             	repz loop 0x220e
    21fc:	e1 12                	loope  0x2210
    21fe:	e0 12                	loopne 0x2212
    2200:	f2 41 0f 10 d4       	movsd  xmm2,xmm12
    2205:	f2 41 0f 10 14 24    	movsd  xmm2,QWORD PTR [r12]
    220b:	f2 49 0f 2d d4       	cvtsd2si rdx,xmm12
    2210:	f2 49 0f 2d 14 24    	cvtsd2si rdx,QWORD PTR [r12]
    2216:	f2 49 0f 2a d4       	cvtsi2sd xmm2,r12
    221b:	f2 41 0f 2a 14 24    	cvtsi2sd xmm2,DWORD PTR [r12]
    2221:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2227:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    222e:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    2235:	49 2b d5             	sub    rdx,r13
    2238:	49 29 55 00          	sub    QWORD PTR [r13+0x0],rdx
    223c:	4c 2b 2a             	sub    r13,QWORD PTR [rdx]
    223f:	49 f7 ed             	imul   r13
    2242:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    2246:	49 0f af d5          	imul   rdx,r13
    224a:	49 69 d5 10 32 54 76 	imul   rdx,r13,0x76543210
    2251:	49 0f af 55 00       	imul   rdx,QWORD PTR [r13+0x0]
    2256:	49 69 55 00 10 32 54 	imul   rdx,QWORD PTR [r13+0x0],0x76543210
    225d:	76 
    225e:	49 f7 fd             	idiv   r13
    2261:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    2265:	0f 8d 10 32 54 76    	jge    0x7654547b
    226b:	e9 10 32 54 76       	jmp    0x76545480
    2270:	41 ff e5             	jmp    r13
    2273:	49 8b d5             	mov    rdx,r13
    2276:	49 8b 55 00          	mov    rdx,QWORD PTR [r13+0x0]
    227a:	4c 89 2a             	mov    QWORD PTR [rdx],r13
    227d:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    2284:	09 00 00 
    2287:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    228e:	00 00 00 
    2291:	e8 10 32 54 76       	call   0x765454a6
    2296:	41 ff d5             	call   r13
    2299:	c3                   	ret    
    229a:	49 d1 ed             	shr    r13,1
    229d:	49 c1 ed 12          	shr    r13,0x12
    22a1:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    22a5:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    22aa:	49 f7 dd             	neg    r13
    22ad:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    22b1:	0f 05                	syscall 
    22b3:	41 55                	push   r13
    22b5:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    22b9:	68 10 32 54 76       	push   0x76543210
    22be:	41 5d                	pop    r13
    22c0:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    22c4:	49 ff c5             	inc    r13
    22c7:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    22cb:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    22cc:	f3 e2 12             	repz loop 0x22e1
    22cf:	e1 12                	loope  0x22e3
    22d1:	e0 12                	loopne 0x22e5
    22d3:	f2 41 0f 10 d5       	movsd  xmm2,xmm13
    22d8:	f2 41 0f 10 55 00    	movsd  xmm2,QWORD PTR [r13+0x0]
    22de:	f2 49 0f 2d d5       	cvtsd2si rdx,xmm13
    22e3:	f2 49 0f 2d 55 00    	cvtsd2si rdx,QWORD PTR [r13+0x0]
    22e9:	f2 49 0f 2a d5       	cvtsi2sd xmm2,r13
    22ee:	f2 41 0f 2a 55 00    	cvtsi2sd xmm2,DWORD PTR [r13+0x0]
    22f4:	48 2d 10 32 54 76    	sub    rax,0x76543210
    22fa:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    2301:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    2308:	49 2b d6             	sub    rdx,r14
    230b:	49 29 16             	sub    QWORD PTR [r14],rdx
    230e:	4c 2b 32             	sub    r14,QWORD PTR [rdx]
    2311:	49 f7 ee             	imul   r14
    2314:	49 f7 2e             	imul   QWORD PTR [r14]
    2317:	49 0f af d6          	imul   rdx,r14
    231b:	49 69 d6 10 32 54 76 	imul   rdx,r14,0x76543210
    2322:	49 0f af 16          	imul   rdx,QWORD PTR [r14]
    2326:	49 69 16 10 32 54 76 	imul   rdx,QWORD PTR [r14],0x76543210
    232d:	49 f7 fe             	idiv   r14
    2330:	49 f7 3e             	idiv   QWORD PTR [r14]
    2333:	0f 8d 10 32 54 76    	jge    0x76545549
    2339:	e9 10 32 54 76       	jmp    0x7654554e
    233e:	41 ff e6             	jmp    r14
    2341:	49 8b d6             	mov    rdx,r14
    2344:	49 8b 16             	mov    rdx,QWORD PTR [r14]
    2347:	4c 89 32             	mov    QWORD PTR [rdx],r14
    234a:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    2351:	09 00 00 
    2354:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    235b:	00 00 00 
    235e:	e8 10 32 54 76       	call   0x76545573
    2363:	41 ff d6             	call   r14
    2366:	c3                   	ret    
    2367:	49 d1 ee             	shr    r14,1
    236a:	49 c1 ee 12          	shr    r14,0x12
    236e:	49 d1 2e             	shr    QWORD PTR [r14],1
    2371:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    2375:	49 f7 de             	neg    r14
    2378:	49 f7 1e             	neg    QWORD PTR [r14]
    237b:	0f 05                	syscall 
    237d:	41 56                	push   r14
    237f:	41 ff 36             	push   QWORD PTR [r14]
    2382:	68 10 32 54 76       	push   0x76543210
    2387:	41 5e                	pop    r14
    2389:	41 8f 06             	pop    QWORD PTR [r14]
    238c:	49 ff c6             	inc    r14
    238f:	49 ff 06             	inc    QWORD PTR [r14]
    2392:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2393:	f3 e2 12             	repz loop 0x23a8
    2396:	e1 12                	loope  0x23aa
    2398:	e0 12                	loopne 0x23ac
    239a:	f2 41 0f 10 d6       	movsd  xmm2,xmm14
    239f:	f2 41 0f 10 16       	movsd  xmm2,QWORD PTR [r14]
    23a4:	f2 49 0f 2d d6       	cvtsd2si rdx,xmm14
    23a9:	f2 49 0f 2d 16       	cvtsd2si rdx,QWORD PTR [r14]
    23ae:	f2 49 0f 2a d6       	cvtsi2sd xmm2,r14
    23b3:	f2 41 0f 2a 16       	cvtsi2sd xmm2,DWORD PTR [r14]
    23b8:	48 2d 10 32 54 76    	sub    rax,0x76543210
    23be:	48 81 ea 10 32 54 76 	sub    rdx,0x76543210
    23c5:	48 81 2a 10 32 54 76 	sub    QWORD PTR [rdx],0x76543210
    23cc:	49 2b d7             	sub    rdx,r15
    23cf:	49 29 17             	sub    QWORD PTR [r15],rdx
    23d2:	4c 2b 3a             	sub    r15,QWORD PTR [rdx]
    23d5:	49 f7 ef             	imul   r15
    23d8:	49 f7 2f             	imul   QWORD PTR [r15]
    23db:	49 0f af d7          	imul   rdx,r15
    23df:	49 69 d7 10 32 54 76 	imul   rdx,r15,0x76543210
    23e6:	49 0f af 17          	imul   rdx,QWORD PTR [r15]
    23ea:	49 69 17 10 32 54 76 	imul   rdx,QWORD PTR [r15],0x76543210
    23f1:	49 f7 ff             	idiv   r15
    23f4:	49 f7 3f             	idiv   QWORD PTR [r15]
    23f7:	0f 8d 10 32 54 76    	jge    0x7654560d
    23fd:	e9 10 32 54 76       	jmp    0x76545612
    2402:	41 ff e7             	jmp    r15
    2405:	49 8b d7             	mov    rdx,r15
    2408:	49 8b 17             	mov    rdx,QWORD PTR [r15]
    240b:	4c 89 3a             	mov    QWORD PTR [rdx],r15
    240e:	48 ba 09 21 43 65 87 	movabs rdx,0x98765432109
    2415:	09 00 00 
    2418:	48 ba 10 32 54 76 00 	movabs rdx,0x76543210
    241f:	00 00 00 
    2422:	e8 10 32 54 76       	call   0x76545637
    2427:	41 ff d7             	call   r15
    242a:	c3                   	ret    
    242b:	49 d1 ef             	shr    r15,1
    242e:	49 c1 ef 12          	shr    r15,0x12
    2432:	49 d1 2f             	shr    QWORD PTR [r15],1
    2435:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    2439:	49 f7 df             	neg    r15
    243c:	49 f7 1f             	neg    QWORD PTR [r15]
    243f:	0f 05                	syscall 
    2441:	41 57                	push   r15
    2443:	41 ff 37             	push   QWORD PTR [r15]
    2446:	68 10 32 54 76       	push   0x76543210
    244b:	41 5f                	pop    r15
    244d:	41 8f 07             	pop    QWORD PTR [r15]
    2450:	49 ff c7             	inc    r15
    2453:	49 ff 07             	inc    QWORD PTR [r15]
    2456:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2457:	f3 e2 12             	repz loop 0x246c
    245a:	e1 12                	loope  0x246e
    245c:	e0 12                	loopne 0x2470
    245e:	f2 41 0f 10 d7       	movsd  xmm2,xmm15
    2463:	f2 41 0f 10 17       	movsd  xmm2,QWORD PTR [r15]
    2468:	f2 49 0f 2d d7       	cvtsd2si rdx,xmm15
    246d:	f2 49 0f 2d 17       	cvtsd2si rdx,QWORD PTR [r15]
    2472:	f2 49 0f 2a d7       	cvtsi2sd xmm2,r15
    2477:	f2 41 0f 2a 17       	cvtsi2sd xmm2,DWORD PTR [r15]
    247c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2482:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2489:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2490:	48 2b d8             	sub    rbx,rax
    2493:	48 29 18             	sub    QWORD PTR [rax],rbx
    2496:	48 2b 03             	sub    rax,QWORD PTR [rbx]
    2499:	48 f7 e8             	imul   rax
    249c:	48 f7 28             	imul   QWORD PTR [rax]
    249f:	48 0f af d8          	imul   rbx,rax
    24a3:	48 69 d8 10 32 54 76 	imul   rbx,rax,0x76543210
    24aa:	48 0f af 18          	imul   rbx,QWORD PTR [rax]
    24ae:	48 69 18 10 32 54 76 	imul   rbx,QWORD PTR [rax],0x76543210
    24b5:	48 f7 f8             	idiv   rax
    24b8:	48 f7 38             	idiv   QWORD PTR [rax]
    24bb:	0f 8d 10 32 54 76    	jge    0x765456d1
    24c1:	e9 10 32 54 76       	jmp    0x765456d6
    24c6:	ff e0                	jmp    rax
    24c8:	48 8b d8             	mov    rbx,rax
    24cb:	48 8b 18             	mov    rbx,QWORD PTR [rax]
    24ce:	48 89 03             	mov    QWORD PTR [rbx],rax
    24d1:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    24d8:	09 00 00 
    24db:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    24e2:	00 00 00 
    24e5:	e8 10 32 54 76       	call   0x765456fa
    24ea:	ff d0                	call   rax
    24ec:	c3                   	ret    
    24ed:	48 d1 e8             	shr    rax,1
    24f0:	48 c1 e8 12          	shr    rax,0x12
    24f4:	48 d1 28             	shr    QWORD PTR [rax],1
    24f7:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    24fb:	48 f7 d8             	neg    rax
    24fe:	48 f7 18             	neg    QWORD PTR [rax]
    2501:	0f 05                	syscall 
    2503:	50                   	push   rax
    2504:	ff 30                	push   QWORD PTR [rax]
    2506:	68 10 32 54 76       	push   0x76543210
    250b:	58                   	pop    rax
    250c:	8f 00                	pop    QWORD PTR [rax]
    250e:	48 ff c0             	inc    rax
    2511:	48 ff 00             	inc    QWORD PTR [rax]
    2514:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2515:	f3 e2 12             	repz loop 0x252a
    2518:	e1 12                	loope  0x252c
    251a:	e0 12                	loopne 0x252e
    251c:	f2 0f 10 d8          	movsd  xmm3,xmm0
    2520:	f2 0f 10 18          	movsd  xmm3,QWORD PTR [rax]
    2524:	f2 48 0f 2d d8       	cvtsd2si rbx,xmm0
    2529:	f2 48 0f 2d 18       	cvtsd2si rbx,QWORD PTR [rax]
    252e:	f2 48 0f 2a d8       	cvtsi2sd xmm3,rax
    2533:	f2 0f 2a 18          	cvtsi2sd xmm3,DWORD PTR [rax]
    2537:	48 2d 10 32 54 76    	sub    rax,0x76543210
    253d:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2544:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    254b:	48 2b d9             	sub    rbx,rcx
    254e:	48 29 19             	sub    QWORD PTR [rcx],rbx
    2551:	48 2b 0b             	sub    rcx,QWORD PTR [rbx]
    2554:	48 f7 e9             	imul   rcx
    2557:	48 f7 29             	imul   QWORD PTR [rcx]
    255a:	48 0f af d9          	imul   rbx,rcx
    255e:	48 69 d9 10 32 54 76 	imul   rbx,rcx,0x76543210
    2565:	48 0f af 19          	imul   rbx,QWORD PTR [rcx]
    2569:	48 69 19 10 32 54 76 	imul   rbx,QWORD PTR [rcx],0x76543210
    2570:	48 f7 f9             	idiv   rcx
    2573:	48 f7 39             	idiv   QWORD PTR [rcx]
    2576:	0f 8d 10 32 54 76    	jge    0x7654578c
    257c:	e9 10 32 54 76       	jmp    0x76545791
    2581:	ff e1                	jmp    rcx
    2583:	48 8b d9             	mov    rbx,rcx
    2586:	48 8b 19             	mov    rbx,QWORD PTR [rcx]
    2589:	48 89 0b             	mov    QWORD PTR [rbx],rcx
    258c:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2593:	09 00 00 
    2596:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    259d:	00 00 00 
    25a0:	e8 10 32 54 76       	call   0x765457b5
    25a5:	ff d1                	call   rcx
    25a7:	c3                   	ret    
    25a8:	48 d1 e9             	shr    rcx,1
    25ab:	48 c1 e9 12          	shr    rcx,0x12
    25af:	48 d1 29             	shr    QWORD PTR [rcx],1
    25b2:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    25b6:	48 f7 d9             	neg    rcx
    25b9:	48 f7 19             	neg    QWORD PTR [rcx]
    25bc:	0f 05                	syscall 
    25be:	51                   	push   rcx
    25bf:	ff 31                	push   QWORD PTR [rcx]
    25c1:	68 10 32 54 76       	push   0x76543210
    25c6:	59                   	pop    rcx
    25c7:	8f 01                	pop    QWORD PTR [rcx]
    25c9:	48 ff c1             	inc    rcx
    25cc:	48 ff 01             	inc    QWORD PTR [rcx]
    25cf:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    25d0:	f3 e2 12             	repz loop 0x25e5
    25d3:	e1 12                	loope  0x25e7
    25d5:	e0 12                	loopne 0x25e9
    25d7:	f2 0f 10 d9          	movsd  xmm3,xmm1
    25db:	f2 0f 10 19          	movsd  xmm3,QWORD PTR [rcx]
    25df:	f2 48 0f 2d d9       	cvtsd2si rbx,xmm1
    25e4:	f2 48 0f 2d 19       	cvtsd2si rbx,QWORD PTR [rcx]
    25e9:	f2 48 0f 2a d9       	cvtsi2sd xmm3,rcx
    25ee:	f2 0f 2a 19          	cvtsi2sd xmm3,DWORD PTR [rcx]
    25f2:	48 2d 10 32 54 76    	sub    rax,0x76543210
    25f8:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    25ff:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2606:	48 2b da             	sub    rbx,rdx
    2609:	48 29 1a             	sub    QWORD PTR [rdx],rbx
    260c:	48 2b 13             	sub    rdx,QWORD PTR [rbx]
    260f:	48 f7 ea             	imul   rdx
    2612:	48 f7 2a             	imul   QWORD PTR [rdx]
    2615:	48 0f af da          	imul   rbx,rdx
    2619:	48 69 da 10 32 54 76 	imul   rbx,rdx,0x76543210
    2620:	48 0f af 1a          	imul   rbx,QWORD PTR [rdx]
    2624:	48 69 1a 10 32 54 76 	imul   rbx,QWORD PTR [rdx],0x76543210
    262b:	48 f7 fa             	idiv   rdx
    262e:	48 f7 3a             	idiv   QWORD PTR [rdx]
    2631:	0f 8d 10 32 54 76    	jge    0x76545847
    2637:	e9 10 32 54 76       	jmp    0x7654584c
    263c:	ff e2                	jmp    rdx
    263e:	48 8b da             	mov    rbx,rdx
    2641:	48 8b 1a             	mov    rbx,QWORD PTR [rdx]
    2644:	48 89 13             	mov    QWORD PTR [rbx],rdx
    2647:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    264e:	09 00 00 
    2651:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2658:	00 00 00 
    265b:	e8 10 32 54 76       	call   0x76545870
    2660:	ff d2                	call   rdx
    2662:	c3                   	ret    
    2663:	48 d1 ea             	shr    rdx,1
    2666:	48 c1 ea 12          	shr    rdx,0x12
    266a:	48 d1 2a             	shr    QWORD PTR [rdx],1
    266d:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    2671:	48 f7 da             	neg    rdx
    2674:	48 f7 1a             	neg    QWORD PTR [rdx]
    2677:	0f 05                	syscall 
    2679:	52                   	push   rdx
    267a:	ff 32                	push   QWORD PTR [rdx]
    267c:	68 10 32 54 76       	push   0x76543210
    2681:	5a                   	pop    rdx
    2682:	8f 02                	pop    QWORD PTR [rdx]
    2684:	48 ff c2             	inc    rdx
    2687:	48 ff 02             	inc    QWORD PTR [rdx]
    268a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    268b:	f3 e2 12             	repz loop 0x26a0
    268e:	e1 12                	loope  0x26a2
    2690:	e0 12                	loopne 0x26a4
    2692:	f2 0f 10 da          	movsd  xmm3,xmm2
    2696:	f2 0f 10 1a          	movsd  xmm3,QWORD PTR [rdx]
    269a:	f2 48 0f 2d da       	cvtsd2si rbx,xmm2
    269f:	f2 48 0f 2d 1a       	cvtsd2si rbx,QWORD PTR [rdx]
    26a4:	f2 48 0f 2a da       	cvtsi2sd xmm3,rdx
    26a9:	f2 0f 2a 1a          	cvtsi2sd xmm3,DWORD PTR [rdx]
    26ad:	48 2d 10 32 54 76    	sub    rax,0x76543210
    26b3:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    26ba:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    26c1:	48 2b db             	sub    rbx,rbx
    26c4:	48 29 1b             	sub    QWORD PTR [rbx],rbx
    26c7:	48 2b 1b             	sub    rbx,QWORD PTR [rbx]
    26ca:	48 f7 eb             	imul   rbx
    26cd:	48 f7 2b             	imul   QWORD PTR [rbx]
    26d0:	48 0f af db          	imul   rbx,rbx
    26d4:	48 69 db 10 32 54 76 	imul   rbx,rbx,0x76543210
    26db:	48 0f af 1b          	imul   rbx,QWORD PTR [rbx]
    26df:	48 69 1b 10 32 54 76 	imul   rbx,QWORD PTR [rbx],0x76543210
    26e6:	48 f7 fb             	idiv   rbx
    26e9:	48 f7 3b             	idiv   QWORD PTR [rbx]
    26ec:	0f 8d 10 32 54 76    	jge    0x76545902
    26f2:	e9 10 32 54 76       	jmp    0x76545907
    26f7:	ff e3                	jmp    rbx
    26f9:	48 8b db             	mov    rbx,rbx
    26fc:	48 8b 1b             	mov    rbx,QWORD PTR [rbx]
    26ff:	48 89 1b             	mov    QWORD PTR [rbx],rbx
    2702:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2709:	09 00 00 
    270c:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2713:	00 00 00 
    2716:	e8 10 32 54 76       	call   0x7654592b
    271b:	ff d3                	call   rbx
    271d:	c3                   	ret    
    271e:	48 d1 eb             	shr    rbx,1
    2721:	48 c1 eb 12          	shr    rbx,0x12
    2725:	48 d1 2b             	shr    QWORD PTR [rbx],1
    2728:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    272c:	48 f7 db             	neg    rbx
    272f:	48 f7 1b             	neg    QWORD PTR [rbx]
    2732:	0f 05                	syscall 
    2734:	53                   	push   rbx
    2735:	ff 33                	push   QWORD PTR [rbx]
    2737:	68 10 32 54 76       	push   0x76543210
    273c:	5b                   	pop    rbx
    273d:	8f 03                	pop    QWORD PTR [rbx]
    273f:	48 ff c3             	inc    rbx
    2742:	48 ff 03             	inc    QWORD PTR [rbx]
    2745:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2746:	f3 e2 12             	repz loop 0x275b
    2749:	e1 12                	loope  0x275d
    274b:	e0 12                	loopne 0x275f
    274d:	f2 0f 10 db          	movsd  xmm3,xmm3
    2751:	f2 0f 10 1b          	movsd  xmm3,QWORD PTR [rbx]
    2755:	f2 48 0f 2d db       	cvtsd2si rbx,xmm3
    275a:	f2 48 0f 2d 1b       	cvtsd2si rbx,QWORD PTR [rbx]
    275f:	f2 48 0f 2a db       	cvtsi2sd xmm3,rbx
    2764:	f2 0f 2a 1b          	cvtsi2sd xmm3,DWORD PTR [rbx]
    2768:	48 2d 10 32 54 76    	sub    rax,0x76543210
    276e:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2775:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    277c:	48 2b dc             	sub    rbx,rsp
    277f:	48 29 1c 24          	sub    QWORD PTR [rsp],rbx
    2783:	48 2b 23             	sub    rsp,QWORD PTR [rbx]
    2786:	48 f7 ec             	imul   rsp
    2789:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    278d:	48 0f af dc          	imul   rbx,rsp
    2791:	48 69 dc 10 32 54 76 	imul   rbx,rsp,0x76543210
    2798:	48 0f af 1c 24       	imul   rbx,QWORD PTR [rsp]
    279d:	48 69 1c 24 10 32 54 	imul   rbx,QWORD PTR [rsp],0x76543210
    27a4:	76 
    27a5:	48 f7 fc             	idiv   rsp
    27a8:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    27ac:	0f 8d 10 32 54 76    	jge    0x765459c2
    27b2:	e9 10 32 54 76       	jmp    0x765459c7
    27b7:	ff e4                	jmp    rsp
    27b9:	48 8b dc             	mov    rbx,rsp
    27bc:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
    27c0:	48 89 23             	mov    QWORD PTR [rbx],rsp
    27c3:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    27ca:	09 00 00 
    27cd:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    27d4:	00 00 00 
    27d7:	e8 10 32 54 76       	call   0x765459ec
    27dc:	ff d4                	call   rsp
    27de:	c3                   	ret    
    27df:	48 d1 ec             	shr    rsp,1
    27e2:	48 c1 ec 12          	shr    rsp,0x12
    27e6:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    27ea:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    27ef:	48 f7 dc             	neg    rsp
    27f2:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    27f6:	0f 05                	syscall 
    27f8:	54                   	push   rsp
    27f9:	ff 34 24             	push   QWORD PTR [rsp]
    27fc:	68 10 32 54 76       	push   0x76543210
    2801:	5c                   	pop    rsp
    2802:	8f 04 24             	pop    QWORD PTR [rsp]
    2805:	48 ff c4             	inc    rsp
    2808:	48 ff 04 24          	inc    QWORD PTR [rsp]
    280c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    280d:	f3 e2 12             	repz loop 0x2822
    2810:	e1 12                	loope  0x2824
    2812:	e0 12                	loopne 0x2826
    2814:	f2 0f 10 dc          	movsd  xmm3,xmm4
    2818:	f2 0f 10 1c 24       	movsd  xmm3,QWORD PTR [rsp]
    281d:	f2 48 0f 2d dc       	cvtsd2si rbx,xmm4
    2822:	f2 48 0f 2d 1c 24    	cvtsd2si rbx,QWORD PTR [rsp]
    2828:	f2 48 0f 2a dc       	cvtsi2sd xmm3,rsp
    282d:	f2 0f 2a 1c 24       	cvtsi2sd xmm3,DWORD PTR [rsp]
    2832:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2838:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    283f:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2846:	48 2b dd             	sub    rbx,rbp
    2849:	48 29 5d 00          	sub    QWORD PTR [rbp+0x0],rbx
    284d:	48 2b 2b             	sub    rbp,QWORD PTR [rbx]
    2850:	48 f7 ed             	imul   rbp
    2853:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    2857:	48 0f af dd          	imul   rbx,rbp
    285b:	48 69 dd 10 32 54 76 	imul   rbx,rbp,0x76543210
    2862:	48 0f af 5d 00       	imul   rbx,QWORD PTR [rbp+0x0]
    2867:	48 69 5d 00 10 32 54 	imul   rbx,QWORD PTR [rbp+0x0],0x76543210
    286e:	76 
    286f:	48 f7 fd             	idiv   rbp
    2872:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    2876:	0f 8d 10 32 54 76    	jge    0x76545a8c
    287c:	e9 10 32 54 76       	jmp    0x76545a91
    2881:	ff e5                	jmp    rbp
    2883:	48 8b dd             	mov    rbx,rbp
    2886:	48 8b 5d 00          	mov    rbx,QWORD PTR [rbp+0x0]
    288a:	48 89 2b             	mov    QWORD PTR [rbx],rbp
    288d:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2894:	09 00 00 
    2897:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    289e:	00 00 00 
    28a1:	e8 10 32 54 76       	call   0x76545ab6
    28a6:	ff d5                	call   rbp
    28a8:	c3                   	ret    
    28a9:	48 d1 ed             	shr    rbp,1
    28ac:	48 c1 ed 12          	shr    rbp,0x12
    28b0:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    28b4:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    28b9:	48 f7 dd             	neg    rbp
    28bc:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    28c0:	0f 05                	syscall 
    28c2:	55                   	push   rbp
    28c3:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    28c6:	68 10 32 54 76       	push   0x76543210
    28cb:	5d                   	pop    rbp
    28cc:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    28cf:	48 ff c5             	inc    rbp
    28d2:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    28d6:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    28d7:	f3 e2 12             	repz loop 0x28ec
    28da:	e1 12                	loope  0x28ee
    28dc:	e0 12                	loopne 0x28f0
    28de:	f2 0f 10 dd          	movsd  xmm3,xmm5
    28e2:	f2 0f 10 5d 00       	movsd  xmm3,QWORD PTR [rbp+0x0]
    28e7:	f2 48 0f 2d dd       	cvtsd2si rbx,xmm5
    28ec:	f2 48 0f 2d 5d 00    	cvtsd2si rbx,QWORD PTR [rbp+0x0]
    28f2:	f2 48 0f 2a dd       	cvtsi2sd xmm3,rbp
    28f7:	f2 0f 2a 5d 00       	cvtsi2sd xmm3,DWORD PTR [rbp+0x0]
    28fc:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2902:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2909:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2910:	48 2b de             	sub    rbx,rsi
    2913:	48 29 1e             	sub    QWORD PTR [rsi],rbx
    2916:	48 2b 33             	sub    rsi,QWORD PTR [rbx]
    2919:	48 f7 ee             	imul   rsi
    291c:	48 f7 2e             	imul   QWORD PTR [rsi]
    291f:	48 0f af de          	imul   rbx,rsi
    2923:	48 69 de 10 32 54 76 	imul   rbx,rsi,0x76543210
    292a:	48 0f af 1e          	imul   rbx,QWORD PTR [rsi]
    292e:	48 69 1e 10 32 54 76 	imul   rbx,QWORD PTR [rsi],0x76543210
    2935:	48 f7 fe             	idiv   rsi
    2938:	48 f7 3e             	idiv   QWORD PTR [rsi]
    293b:	0f 8d 10 32 54 76    	jge    0x76545b51
    2941:	e9 10 32 54 76       	jmp    0x76545b56
    2946:	ff e6                	jmp    rsi
    2948:	48 8b de             	mov    rbx,rsi
    294b:	48 8b 1e             	mov    rbx,QWORD PTR [rsi]
    294e:	48 89 33             	mov    QWORD PTR [rbx],rsi
    2951:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2958:	09 00 00 
    295b:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2962:	00 00 00 
    2965:	e8 10 32 54 76       	call   0x76545b7a
    296a:	ff d6                	call   rsi
    296c:	c3                   	ret    
    296d:	48 d1 ee             	shr    rsi,1
    2970:	48 c1 ee 12          	shr    rsi,0x12
    2974:	48 d1 2e             	shr    QWORD PTR [rsi],1
    2977:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    297b:	48 f7 de             	neg    rsi
    297e:	48 f7 1e             	neg    QWORD PTR [rsi]
    2981:	0f 05                	syscall 
    2983:	56                   	push   rsi
    2984:	ff 36                	push   QWORD PTR [rsi]
    2986:	68 10 32 54 76       	push   0x76543210
    298b:	5e                   	pop    rsi
    298c:	8f 06                	pop    QWORD PTR [rsi]
    298e:	48 ff c6             	inc    rsi
    2991:	48 ff 06             	inc    QWORD PTR [rsi]
    2994:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2995:	f3 e2 12             	repz loop 0x29aa
    2998:	e1 12                	loope  0x29ac
    299a:	e0 12                	loopne 0x29ae
    299c:	f2 0f 10 de          	movsd  xmm3,xmm6
    29a0:	f2 0f 10 1e          	movsd  xmm3,QWORD PTR [rsi]
    29a4:	f2 48 0f 2d de       	cvtsd2si rbx,xmm6
    29a9:	f2 48 0f 2d 1e       	cvtsd2si rbx,QWORD PTR [rsi]
    29ae:	f2 48 0f 2a de       	cvtsi2sd xmm3,rsi
    29b3:	f2 0f 2a 1e          	cvtsi2sd xmm3,DWORD PTR [rsi]
    29b7:	48 2d 10 32 54 76    	sub    rax,0x76543210
    29bd:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    29c4:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    29cb:	48 2b df             	sub    rbx,rdi
    29ce:	48 29 1f             	sub    QWORD PTR [rdi],rbx
    29d1:	48 2b 3b             	sub    rdi,QWORD PTR [rbx]
    29d4:	48 f7 ef             	imul   rdi
    29d7:	48 f7 2f             	imul   QWORD PTR [rdi]
    29da:	48 0f af df          	imul   rbx,rdi
    29de:	48 69 df 10 32 54 76 	imul   rbx,rdi,0x76543210
    29e5:	48 0f af 1f          	imul   rbx,QWORD PTR [rdi]
    29e9:	48 69 1f 10 32 54 76 	imul   rbx,QWORD PTR [rdi],0x76543210
    29f0:	48 f7 ff             	idiv   rdi
    29f3:	48 f7 3f             	idiv   QWORD PTR [rdi]
    29f6:	0f 8d 10 32 54 76    	jge    0x76545c0c
    29fc:	e9 10 32 54 76       	jmp    0x76545c11
    2a01:	ff e7                	jmp    rdi
    2a03:	48 8b df             	mov    rbx,rdi
    2a06:	48 8b 1f             	mov    rbx,QWORD PTR [rdi]
    2a09:	48 89 3b             	mov    QWORD PTR [rbx],rdi
    2a0c:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2a13:	09 00 00 
    2a16:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2a1d:	00 00 00 
    2a20:	e8 10 32 54 76       	call   0x76545c35
    2a25:	ff d7                	call   rdi
    2a27:	c3                   	ret    
    2a28:	48 d1 ef             	shr    rdi,1
    2a2b:	48 c1 ef 12          	shr    rdi,0x12
    2a2f:	48 d1 2f             	shr    QWORD PTR [rdi],1
    2a32:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    2a36:	48 f7 df             	neg    rdi
    2a39:	48 f7 1f             	neg    QWORD PTR [rdi]
    2a3c:	0f 05                	syscall 
    2a3e:	57                   	push   rdi
    2a3f:	ff 37                	push   QWORD PTR [rdi]
    2a41:	68 10 32 54 76       	push   0x76543210
    2a46:	5f                   	pop    rdi
    2a47:	8f 07                	pop    QWORD PTR [rdi]
    2a49:	48 ff c7             	inc    rdi
    2a4c:	48 ff 07             	inc    QWORD PTR [rdi]
    2a4f:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2a50:	f3 e2 12             	repz loop 0x2a65
    2a53:	e1 12                	loope  0x2a67
    2a55:	e0 12                	loopne 0x2a69
    2a57:	f2 0f 10 df          	movsd  xmm3,xmm7
    2a5b:	f2 0f 10 1f          	movsd  xmm3,QWORD PTR [rdi]
    2a5f:	f2 48 0f 2d df       	cvtsd2si rbx,xmm7
    2a64:	f2 48 0f 2d 1f       	cvtsd2si rbx,QWORD PTR [rdi]
    2a69:	f2 48 0f 2a df       	cvtsi2sd xmm3,rdi
    2a6e:	f2 0f 2a 1f          	cvtsi2sd xmm3,DWORD PTR [rdi]
    2a72:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2a78:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2a7f:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2a86:	49 2b d8             	sub    rbx,r8
    2a89:	49 29 18             	sub    QWORD PTR [r8],rbx
    2a8c:	4c 2b 03             	sub    r8,QWORD PTR [rbx]
    2a8f:	49 f7 e8             	imul   r8
    2a92:	49 f7 28             	imul   QWORD PTR [r8]
    2a95:	49 0f af d8          	imul   rbx,r8
    2a99:	49 69 d8 10 32 54 76 	imul   rbx,r8,0x76543210
    2aa0:	49 0f af 18          	imul   rbx,QWORD PTR [r8]
    2aa4:	49 69 18 10 32 54 76 	imul   rbx,QWORD PTR [r8],0x76543210
    2aab:	49 f7 f8             	idiv   r8
    2aae:	49 f7 38             	idiv   QWORD PTR [r8]
    2ab1:	0f 8d 10 32 54 76    	jge    0x76545cc7
    2ab7:	e9 10 32 54 76       	jmp    0x76545ccc
    2abc:	41 ff e0             	jmp    r8
    2abf:	49 8b d8             	mov    rbx,r8
    2ac2:	49 8b 18             	mov    rbx,QWORD PTR [r8]
    2ac5:	4c 89 03             	mov    QWORD PTR [rbx],r8
    2ac8:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2acf:	09 00 00 
    2ad2:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2ad9:	00 00 00 
    2adc:	e8 10 32 54 76       	call   0x76545cf1
    2ae1:	41 ff d0             	call   r8
    2ae4:	c3                   	ret    
    2ae5:	49 d1 e8             	shr    r8,1
    2ae8:	49 c1 e8 12          	shr    r8,0x12
    2aec:	49 d1 28             	shr    QWORD PTR [r8],1
    2aef:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    2af3:	49 f7 d8             	neg    r8
    2af6:	49 f7 18             	neg    QWORD PTR [r8]
    2af9:	0f 05                	syscall 
    2afb:	41 50                	push   r8
    2afd:	41 ff 30             	push   QWORD PTR [r8]
    2b00:	68 10 32 54 76       	push   0x76543210
    2b05:	41 58                	pop    r8
    2b07:	41 8f 00             	pop    QWORD PTR [r8]
    2b0a:	49 ff c0             	inc    r8
    2b0d:	49 ff 00             	inc    QWORD PTR [r8]
    2b10:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2b11:	f3 e2 12             	repz loop 0x2b26
    2b14:	e1 12                	loope  0x2b28
    2b16:	e0 12                	loopne 0x2b2a
    2b18:	f2 41 0f 10 d8       	movsd  xmm3,xmm8
    2b1d:	f2 41 0f 10 18       	movsd  xmm3,QWORD PTR [r8]
    2b22:	f2 49 0f 2d d8       	cvtsd2si rbx,xmm8
    2b27:	f2 49 0f 2d 18       	cvtsd2si rbx,QWORD PTR [r8]
    2b2c:	f2 49 0f 2a d8       	cvtsi2sd xmm3,r8
    2b31:	f2 41 0f 2a 18       	cvtsi2sd xmm3,DWORD PTR [r8]
    2b36:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2b3c:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2b43:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2b4a:	49 2b d9             	sub    rbx,r9
    2b4d:	49 29 19             	sub    QWORD PTR [r9],rbx
    2b50:	4c 2b 0b             	sub    r9,QWORD PTR [rbx]
    2b53:	49 f7 e9             	imul   r9
    2b56:	49 f7 29             	imul   QWORD PTR [r9]
    2b59:	49 0f af d9          	imul   rbx,r9
    2b5d:	49 69 d9 10 32 54 76 	imul   rbx,r9,0x76543210
    2b64:	49 0f af 19          	imul   rbx,QWORD PTR [r9]
    2b68:	49 69 19 10 32 54 76 	imul   rbx,QWORD PTR [r9],0x76543210
    2b6f:	49 f7 f9             	idiv   r9
    2b72:	49 f7 39             	idiv   QWORD PTR [r9]
    2b75:	0f 8d 10 32 54 76    	jge    0x76545d8b
    2b7b:	e9 10 32 54 76       	jmp    0x76545d90
    2b80:	41 ff e1             	jmp    r9
    2b83:	49 8b d9             	mov    rbx,r9
    2b86:	49 8b 19             	mov    rbx,QWORD PTR [r9]
    2b89:	4c 89 0b             	mov    QWORD PTR [rbx],r9
    2b8c:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2b93:	09 00 00 
    2b96:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2b9d:	00 00 00 
    2ba0:	e8 10 32 54 76       	call   0x76545db5
    2ba5:	41 ff d1             	call   r9
    2ba8:	c3                   	ret    
    2ba9:	49 d1 e9             	shr    r9,1
    2bac:	49 c1 e9 12          	shr    r9,0x12
    2bb0:	49 d1 29             	shr    QWORD PTR [r9],1
    2bb3:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    2bb7:	49 f7 d9             	neg    r9
    2bba:	49 f7 19             	neg    QWORD PTR [r9]
    2bbd:	0f 05                	syscall 
    2bbf:	41 51                	push   r9
    2bc1:	41 ff 31             	push   QWORD PTR [r9]
    2bc4:	68 10 32 54 76       	push   0x76543210
    2bc9:	41 59                	pop    r9
    2bcb:	41 8f 01             	pop    QWORD PTR [r9]
    2bce:	49 ff c1             	inc    r9
    2bd1:	49 ff 01             	inc    QWORD PTR [r9]
    2bd4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2bd5:	f3 e2 12             	repz loop 0x2bea
    2bd8:	e1 12                	loope  0x2bec
    2bda:	e0 12                	loopne 0x2bee
    2bdc:	f2 41 0f 10 d9       	movsd  xmm3,xmm9
    2be1:	f2 41 0f 10 19       	movsd  xmm3,QWORD PTR [r9]
    2be6:	f2 49 0f 2d d9       	cvtsd2si rbx,xmm9
    2beb:	f2 49 0f 2d 19       	cvtsd2si rbx,QWORD PTR [r9]
    2bf0:	f2 49 0f 2a d9       	cvtsi2sd xmm3,r9
    2bf5:	f2 41 0f 2a 19       	cvtsi2sd xmm3,DWORD PTR [r9]
    2bfa:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2c00:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2c07:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2c0e:	49 2b da             	sub    rbx,r10
    2c11:	49 29 1a             	sub    QWORD PTR [r10],rbx
    2c14:	4c 2b 13             	sub    r10,QWORD PTR [rbx]
    2c17:	49 f7 ea             	imul   r10
    2c1a:	49 f7 2a             	imul   QWORD PTR [r10]
    2c1d:	49 0f af da          	imul   rbx,r10
    2c21:	49 69 da 10 32 54 76 	imul   rbx,r10,0x76543210
    2c28:	49 0f af 1a          	imul   rbx,QWORD PTR [r10]
    2c2c:	49 69 1a 10 32 54 76 	imul   rbx,QWORD PTR [r10],0x76543210
    2c33:	49 f7 fa             	idiv   r10
    2c36:	49 f7 3a             	idiv   QWORD PTR [r10]
    2c39:	0f 8d 10 32 54 76    	jge    0x76545e4f
    2c3f:	e9 10 32 54 76       	jmp    0x76545e54
    2c44:	41 ff e2             	jmp    r10
    2c47:	49 8b da             	mov    rbx,r10
    2c4a:	49 8b 1a             	mov    rbx,QWORD PTR [r10]
    2c4d:	4c 89 13             	mov    QWORD PTR [rbx],r10
    2c50:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2c57:	09 00 00 
    2c5a:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2c61:	00 00 00 
    2c64:	e8 10 32 54 76       	call   0x76545e79
    2c69:	41 ff d2             	call   r10
    2c6c:	c3                   	ret    
    2c6d:	49 d1 ea             	shr    r10,1
    2c70:	49 c1 ea 12          	shr    r10,0x12
    2c74:	49 d1 2a             	shr    QWORD PTR [r10],1
    2c77:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    2c7b:	49 f7 da             	neg    r10
    2c7e:	49 f7 1a             	neg    QWORD PTR [r10]
    2c81:	0f 05                	syscall 
    2c83:	41 52                	push   r10
    2c85:	41 ff 32             	push   QWORD PTR [r10]
    2c88:	68 10 32 54 76       	push   0x76543210
    2c8d:	41 5a                	pop    r10
    2c8f:	41 8f 02             	pop    QWORD PTR [r10]
    2c92:	49 ff c2             	inc    r10
    2c95:	49 ff 02             	inc    QWORD PTR [r10]
    2c98:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2c99:	f3 e2 12             	repz loop 0x2cae
    2c9c:	e1 12                	loope  0x2cb0
    2c9e:	e0 12                	loopne 0x2cb2
    2ca0:	f2 41 0f 10 da       	movsd  xmm3,xmm10
    2ca5:	f2 41 0f 10 1a       	movsd  xmm3,QWORD PTR [r10]
    2caa:	f2 49 0f 2d da       	cvtsd2si rbx,xmm10
    2caf:	f2 49 0f 2d 1a       	cvtsd2si rbx,QWORD PTR [r10]
    2cb4:	f2 49 0f 2a da       	cvtsi2sd xmm3,r10
    2cb9:	f2 41 0f 2a 1a       	cvtsi2sd xmm3,DWORD PTR [r10]
    2cbe:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2cc4:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2ccb:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2cd2:	49 2b db             	sub    rbx,r11
    2cd5:	49 29 1b             	sub    QWORD PTR [r11],rbx
    2cd8:	4c 2b 1b             	sub    r11,QWORD PTR [rbx]
    2cdb:	49 f7 eb             	imul   r11
    2cde:	49 f7 2b             	imul   QWORD PTR [r11]
    2ce1:	49 0f af db          	imul   rbx,r11
    2ce5:	49 69 db 10 32 54 76 	imul   rbx,r11,0x76543210
    2cec:	49 0f af 1b          	imul   rbx,QWORD PTR [r11]
    2cf0:	49 69 1b 10 32 54 76 	imul   rbx,QWORD PTR [r11],0x76543210
    2cf7:	49 f7 fb             	idiv   r11
    2cfa:	49 f7 3b             	idiv   QWORD PTR [r11]
    2cfd:	0f 8d 10 32 54 76    	jge    0x76545f13
    2d03:	e9 10 32 54 76       	jmp    0x76545f18
    2d08:	41 ff e3             	jmp    r11
    2d0b:	49 8b db             	mov    rbx,r11
    2d0e:	49 8b 1b             	mov    rbx,QWORD PTR [r11]
    2d11:	4c 89 1b             	mov    QWORD PTR [rbx],r11
    2d14:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2d1b:	09 00 00 
    2d1e:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2d25:	00 00 00 
    2d28:	e8 10 32 54 76       	call   0x76545f3d
    2d2d:	41 ff d3             	call   r11
    2d30:	c3                   	ret    
    2d31:	49 d1 eb             	shr    r11,1
    2d34:	49 c1 eb 12          	shr    r11,0x12
    2d38:	49 d1 2b             	shr    QWORD PTR [r11],1
    2d3b:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    2d3f:	49 f7 db             	neg    r11
    2d42:	49 f7 1b             	neg    QWORD PTR [r11]
    2d45:	0f 05                	syscall 
    2d47:	41 53                	push   r11
    2d49:	41 ff 33             	push   QWORD PTR [r11]
    2d4c:	68 10 32 54 76       	push   0x76543210
    2d51:	41 5b                	pop    r11
    2d53:	41 8f 03             	pop    QWORD PTR [r11]
    2d56:	49 ff c3             	inc    r11
    2d59:	49 ff 03             	inc    QWORD PTR [r11]
    2d5c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2d5d:	f3 e2 12             	repz loop 0x2d72
    2d60:	e1 12                	loope  0x2d74
    2d62:	e0 12                	loopne 0x2d76
    2d64:	f2 41 0f 10 db       	movsd  xmm3,xmm11
    2d69:	f2 41 0f 10 1b       	movsd  xmm3,QWORD PTR [r11]
    2d6e:	f2 49 0f 2d db       	cvtsd2si rbx,xmm11
    2d73:	f2 49 0f 2d 1b       	cvtsd2si rbx,QWORD PTR [r11]
    2d78:	f2 49 0f 2a db       	cvtsi2sd xmm3,r11
    2d7d:	f2 41 0f 2a 1b       	cvtsi2sd xmm3,DWORD PTR [r11]
    2d82:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2d88:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2d8f:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2d96:	49 2b dc             	sub    rbx,r12
    2d99:	49 29 1c 24          	sub    QWORD PTR [r12],rbx
    2d9d:	4c 2b 23             	sub    r12,QWORD PTR [rbx]
    2da0:	49 f7 ec             	imul   r12
    2da3:	49 f7 2c 24          	imul   QWORD PTR [r12]
    2da7:	49 0f af dc          	imul   rbx,r12
    2dab:	49 69 dc 10 32 54 76 	imul   rbx,r12,0x76543210
    2db2:	49 0f af 1c 24       	imul   rbx,QWORD PTR [r12]
    2db7:	49 69 1c 24 10 32 54 	imul   rbx,QWORD PTR [r12],0x76543210
    2dbe:	76 
    2dbf:	49 f7 fc             	idiv   r12
    2dc2:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    2dc6:	0f 8d 10 32 54 76    	jge    0x76545fdc
    2dcc:	e9 10 32 54 76       	jmp    0x76545fe1
    2dd1:	41 ff e4             	jmp    r12
    2dd4:	49 8b dc             	mov    rbx,r12
    2dd7:	49 8b 1c 24          	mov    rbx,QWORD PTR [r12]
    2ddb:	4c 89 23             	mov    QWORD PTR [rbx],r12
    2dde:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2de5:	09 00 00 
    2de8:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2def:	00 00 00 
    2df2:	e8 10 32 54 76       	call   0x76546007
    2df7:	41 ff d4             	call   r12
    2dfa:	c3                   	ret    
    2dfb:	49 d1 ec             	shr    r12,1
    2dfe:	49 c1 ec 12          	shr    r12,0x12
    2e02:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    2e06:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    2e0b:	49 f7 dc             	neg    r12
    2e0e:	49 f7 1c 24          	neg    QWORD PTR [r12]
    2e12:	0f 05                	syscall 
    2e14:	41 54                	push   r12
    2e16:	41 ff 34 24          	push   QWORD PTR [r12]
    2e1a:	68 10 32 54 76       	push   0x76543210
    2e1f:	41 5c                	pop    r12
    2e21:	41 8f 04 24          	pop    QWORD PTR [r12]
    2e25:	49 ff c4             	inc    r12
    2e28:	49 ff 04 24          	inc    QWORD PTR [r12]
    2e2c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2e2d:	f3 e2 12             	repz loop 0x2e42
    2e30:	e1 12                	loope  0x2e44
    2e32:	e0 12                	loopne 0x2e46
    2e34:	f2 41 0f 10 dc       	movsd  xmm3,xmm12
    2e39:	f2 41 0f 10 1c 24    	movsd  xmm3,QWORD PTR [r12]
    2e3f:	f2 49 0f 2d dc       	cvtsd2si rbx,xmm12
    2e44:	f2 49 0f 2d 1c 24    	cvtsd2si rbx,QWORD PTR [r12]
    2e4a:	f2 49 0f 2a dc       	cvtsi2sd xmm3,r12
    2e4f:	f2 41 0f 2a 1c 24    	cvtsi2sd xmm3,DWORD PTR [r12]
    2e55:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2e5b:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2e62:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2e69:	49 2b dd             	sub    rbx,r13
    2e6c:	49 29 5d 00          	sub    QWORD PTR [r13+0x0],rbx
    2e70:	4c 2b 2b             	sub    r13,QWORD PTR [rbx]
    2e73:	49 f7 ed             	imul   r13
    2e76:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    2e7a:	49 0f af dd          	imul   rbx,r13
    2e7e:	49 69 dd 10 32 54 76 	imul   rbx,r13,0x76543210
    2e85:	49 0f af 5d 00       	imul   rbx,QWORD PTR [r13+0x0]
    2e8a:	49 69 5d 00 10 32 54 	imul   rbx,QWORD PTR [r13+0x0],0x76543210
    2e91:	76 
    2e92:	49 f7 fd             	idiv   r13
    2e95:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    2e99:	0f 8d 10 32 54 76    	jge    0x765460af
    2e9f:	e9 10 32 54 76       	jmp    0x765460b4
    2ea4:	41 ff e5             	jmp    r13
    2ea7:	49 8b dd             	mov    rbx,r13
    2eaa:	49 8b 5d 00          	mov    rbx,QWORD PTR [r13+0x0]
    2eae:	4c 89 2b             	mov    QWORD PTR [rbx],r13
    2eb1:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2eb8:	09 00 00 
    2ebb:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2ec2:	00 00 00 
    2ec5:	e8 10 32 54 76       	call   0x765460da
    2eca:	41 ff d5             	call   r13
    2ecd:	c3                   	ret    
    2ece:	49 d1 ed             	shr    r13,1
    2ed1:	49 c1 ed 12          	shr    r13,0x12
    2ed5:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    2ed9:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    2ede:	49 f7 dd             	neg    r13
    2ee1:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    2ee5:	0f 05                	syscall 
    2ee7:	41 55                	push   r13
    2ee9:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    2eed:	68 10 32 54 76       	push   0x76543210
    2ef2:	41 5d                	pop    r13
    2ef4:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    2ef8:	49 ff c5             	inc    r13
    2efb:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    2eff:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2f00:	f3 e2 12             	repz loop 0x2f15
    2f03:	e1 12                	loope  0x2f17
    2f05:	e0 12                	loopne 0x2f19
    2f07:	f2 41 0f 10 dd       	movsd  xmm3,xmm13
    2f0c:	f2 41 0f 10 5d 00    	movsd  xmm3,QWORD PTR [r13+0x0]
    2f12:	f2 49 0f 2d dd       	cvtsd2si rbx,xmm13
    2f17:	f2 49 0f 2d 5d 00    	cvtsd2si rbx,QWORD PTR [r13+0x0]
    2f1d:	f2 49 0f 2a dd       	cvtsi2sd xmm3,r13
    2f22:	f2 41 0f 2a 5d 00    	cvtsi2sd xmm3,DWORD PTR [r13+0x0]
    2f28:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2f2e:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2f35:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    2f3c:	49 2b de             	sub    rbx,r14
    2f3f:	49 29 1e             	sub    QWORD PTR [r14],rbx
    2f42:	4c 2b 33             	sub    r14,QWORD PTR [rbx]
    2f45:	49 f7 ee             	imul   r14
    2f48:	49 f7 2e             	imul   QWORD PTR [r14]
    2f4b:	49 0f af de          	imul   rbx,r14
    2f4f:	49 69 de 10 32 54 76 	imul   rbx,r14,0x76543210
    2f56:	49 0f af 1e          	imul   rbx,QWORD PTR [r14]
    2f5a:	49 69 1e 10 32 54 76 	imul   rbx,QWORD PTR [r14],0x76543210
    2f61:	49 f7 fe             	idiv   r14
    2f64:	49 f7 3e             	idiv   QWORD PTR [r14]
    2f67:	0f 8d 10 32 54 76    	jge    0x7654617d
    2f6d:	e9 10 32 54 76       	jmp    0x76546182
    2f72:	41 ff e6             	jmp    r14
    2f75:	49 8b de             	mov    rbx,r14
    2f78:	49 8b 1e             	mov    rbx,QWORD PTR [r14]
    2f7b:	4c 89 33             	mov    QWORD PTR [rbx],r14
    2f7e:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    2f85:	09 00 00 
    2f88:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    2f8f:	00 00 00 
    2f92:	e8 10 32 54 76       	call   0x765461a7
    2f97:	41 ff d6             	call   r14
    2f9a:	c3                   	ret    
    2f9b:	49 d1 ee             	shr    r14,1
    2f9e:	49 c1 ee 12          	shr    r14,0x12
    2fa2:	49 d1 2e             	shr    QWORD PTR [r14],1
    2fa5:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    2fa9:	49 f7 de             	neg    r14
    2fac:	49 f7 1e             	neg    QWORD PTR [r14]
    2faf:	0f 05                	syscall 
    2fb1:	41 56                	push   r14
    2fb3:	41 ff 36             	push   QWORD PTR [r14]
    2fb6:	68 10 32 54 76       	push   0x76543210
    2fbb:	41 5e                	pop    r14
    2fbd:	41 8f 06             	pop    QWORD PTR [r14]
    2fc0:	49 ff c6             	inc    r14
    2fc3:	49 ff 06             	inc    QWORD PTR [r14]
    2fc6:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    2fc7:	f3 e2 12             	repz loop 0x2fdc
    2fca:	e1 12                	loope  0x2fde
    2fcc:	e0 12                	loopne 0x2fe0
    2fce:	f2 41 0f 10 de       	movsd  xmm3,xmm14
    2fd3:	f2 41 0f 10 1e       	movsd  xmm3,QWORD PTR [r14]
    2fd8:	f2 49 0f 2d de       	cvtsd2si rbx,xmm14
    2fdd:	f2 49 0f 2d 1e       	cvtsd2si rbx,QWORD PTR [r14]
    2fe2:	f2 49 0f 2a de       	cvtsi2sd xmm3,r14
    2fe7:	f2 41 0f 2a 1e       	cvtsi2sd xmm3,DWORD PTR [r14]
    2fec:	48 2d 10 32 54 76    	sub    rax,0x76543210
    2ff2:	48 81 eb 10 32 54 76 	sub    rbx,0x76543210
    2ff9:	48 81 2b 10 32 54 76 	sub    QWORD PTR [rbx],0x76543210
    3000:	49 2b df             	sub    rbx,r15
    3003:	49 29 1f             	sub    QWORD PTR [r15],rbx
    3006:	4c 2b 3b             	sub    r15,QWORD PTR [rbx]
    3009:	49 f7 ef             	imul   r15
    300c:	49 f7 2f             	imul   QWORD PTR [r15]
    300f:	49 0f af df          	imul   rbx,r15
    3013:	49 69 df 10 32 54 76 	imul   rbx,r15,0x76543210
    301a:	49 0f af 1f          	imul   rbx,QWORD PTR [r15]
    301e:	49 69 1f 10 32 54 76 	imul   rbx,QWORD PTR [r15],0x76543210
    3025:	49 f7 ff             	idiv   r15
    3028:	49 f7 3f             	idiv   QWORD PTR [r15]
    302b:	0f 8d 10 32 54 76    	jge    0x76546241
    3031:	e9 10 32 54 76       	jmp    0x76546246
    3036:	41 ff e7             	jmp    r15
    3039:	49 8b df             	mov    rbx,r15
    303c:	49 8b 1f             	mov    rbx,QWORD PTR [r15]
    303f:	4c 89 3b             	mov    QWORD PTR [rbx],r15
    3042:	48 bb 09 21 43 65 87 	movabs rbx,0x98765432109
    3049:	09 00 00 
    304c:	48 bb 10 32 54 76 00 	movabs rbx,0x76543210
    3053:	00 00 00 
    3056:	e8 10 32 54 76       	call   0x7654626b
    305b:	41 ff d7             	call   r15
    305e:	c3                   	ret    
    305f:	49 d1 ef             	shr    r15,1
    3062:	49 c1 ef 12          	shr    r15,0x12
    3066:	49 d1 2f             	shr    QWORD PTR [r15],1
    3069:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    306d:	49 f7 df             	neg    r15
    3070:	49 f7 1f             	neg    QWORD PTR [r15]
    3073:	0f 05                	syscall 
    3075:	41 57                	push   r15
    3077:	41 ff 37             	push   QWORD PTR [r15]
    307a:	68 10 32 54 76       	push   0x76543210
    307f:	41 5f                	pop    r15
    3081:	41 8f 07             	pop    QWORD PTR [r15]
    3084:	49 ff c7             	inc    r15
    3087:	49 ff 07             	inc    QWORD PTR [r15]
    308a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    308b:	f3 e2 12             	repz loop 0x30a0
    308e:	e1 12                	loope  0x30a2
    3090:	e0 12                	loopne 0x30a4
    3092:	f2 41 0f 10 df       	movsd  xmm3,xmm15
    3097:	f2 41 0f 10 1f       	movsd  xmm3,QWORD PTR [r15]
    309c:	f2 49 0f 2d df       	cvtsd2si rbx,xmm15
    30a1:	f2 49 0f 2d 1f       	cvtsd2si rbx,QWORD PTR [r15]
    30a6:	f2 49 0f 2a df       	cvtsi2sd xmm3,r15
    30ab:	f2 41 0f 2a 1f       	cvtsi2sd xmm3,DWORD PTR [r15]
    30b0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    30b6:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    30bd:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    30c4:	76 
    30c5:	48 2b e0             	sub    rsp,rax
    30c8:	48 29 20             	sub    QWORD PTR [rax],rsp
    30cb:	48 2b 04 48          	sub    rax,QWORD PTR [rax+rcx*2]
    30cf:	f7 e8                	imul   eax
    30d1:	48 f7 28             	imul   QWORD PTR [rax]
    30d4:	48 0f af e0          	imul   rsp,rax
    30d8:	48 69 e0 10 32 54 76 	imul   rsp,rax,0x76543210
    30df:	48 0f af 20          	imul   rsp,QWORD PTR [rax]
    30e3:	48 69 20 10 32 54 76 	imul   rsp,QWORD PTR [rax],0x76543210
    30ea:	48 f7 f8             	idiv   rax
    30ed:	48 f7 38             	idiv   QWORD PTR [rax]
    30f0:	0f 8d 10 32 54 76    	jge    0x76546306
    30f6:	e9 10 32 54 76       	jmp    0x7654630b
    30fb:	ff e0                	jmp    rax
    30fd:	48 8b e0             	mov    rsp,rax
    3100:	48 8b 20             	mov    rsp,QWORD PTR [rax]
    3103:	48 89 04 24          	mov    QWORD PTR [rsp],rax
    3107:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    310e:	09 00 00 
    3111:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    3118:	00 00 00 
    311b:	e8 10 32 54 76       	call   0x76546330
    3120:	ff d0                	call   rax
    3122:	c3                   	ret    
    3123:	48 d1 e8             	shr    rax,1
    3126:	48 c1 e8 12          	shr    rax,0x12
    312a:	48 d1 28             	shr    QWORD PTR [rax],1
    312d:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    3131:	48 f7 d8             	neg    rax
    3134:	48 f7 18             	neg    QWORD PTR [rax]
    3137:	0f 05                	syscall 
    3139:	50                   	push   rax
    313a:	ff 30                	push   QWORD PTR [rax]
    313c:	68 10 32 54 76       	push   0x76543210
    3141:	58                   	pop    rax
    3142:	8f 00                	pop    QWORD PTR [rax]
    3144:	48 ff c0             	inc    rax
    3147:	48 ff 00             	inc    QWORD PTR [rax]
    314a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    314b:	f3 e2 12             	repz loop 0x3160
    314e:	e1 12                	loope  0x3162
    3150:	e0 12                	loopne 0x3164
    3152:	f2 0f 10 e0          	movsd  xmm4,xmm0
    3156:	f2 0f 10 20          	movsd  xmm4,QWORD PTR [rax]
    315a:	f2 48 0f 2d e0       	cvtsd2si rsp,xmm0
    315f:	f2 48 0f 2d 20       	cvtsd2si rsp,QWORD PTR [rax]
    3164:	f2 48 0f 2a e0       	cvtsi2sd xmm4,rax
    3169:	f2 0f 2a 20          	cvtsi2sd xmm4,DWORD PTR [rax]
    316d:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3173:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    317a:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    3181:	76 
    3182:	48 2b e1             	sub    rsp,rcx
    3185:	48 29 21             	sub    QWORD PTR [rcx],rsp
    3188:	48 2b 0c 48          	sub    rcx,QWORD PTR [rax+rcx*2]
    318c:	f7 e9                	imul   ecx
    318e:	48 f7 29             	imul   QWORD PTR [rcx]
    3191:	48 0f af e1          	imul   rsp,rcx
    3195:	48 69 e1 10 32 54 76 	imul   rsp,rcx,0x76543210
    319c:	48 0f af 21          	imul   rsp,QWORD PTR [rcx]
    31a0:	48 69 21 10 32 54 76 	imul   rsp,QWORD PTR [rcx],0x76543210
    31a7:	48 f7 f9             	idiv   rcx
    31aa:	48 f7 39             	idiv   QWORD PTR [rcx]
    31ad:	0f 8d 10 32 54 76    	jge    0x765463c3
    31b3:	e9 10 32 54 76       	jmp    0x765463c8
    31b8:	ff e1                	jmp    rcx
    31ba:	48 8b e1             	mov    rsp,rcx
    31bd:	48 8b 21             	mov    rsp,QWORD PTR [rcx]
    31c0:	48 89 0c 24          	mov    QWORD PTR [rsp],rcx
    31c4:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    31cb:	09 00 00 
    31ce:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    31d5:	00 00 00 
    31d8:	e8 10 32 54 76       	call   0x765463ed
    31dd:	ff d1                	call   rcx
    31df:	c3                   	ret    
    31e0:	48 d1 e9             	shr    rcx,1
    31e3:	48 c1 e9 12          	shr    rcx,0x12
    31e7:	48 d1 29             	shr    QWORD PTR [rcx],1
    31ea:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    31ee:	48 f7 d9             	neg    rcx
    31f1:	48 f7 19             	neg    QWORD PTR [rcx]
    31f4:	0f 05                	syscall 
    31f6:	51                   	push   rcx
    31f7:	ff 31                	push   QWORD PTR [rcx]
    31f9:	68 10 32 54 76       	push   0x76543210
    31fe:	59                   	pop    rcx
    31ff:	8f 01                	pop    QWORD PTR [rcx]
    3201:	48 ff c1             	inc    rcx
    3204:	48 ff 01             	inc    QWORD PTR [rcx]
    3207:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3208:	f3 e2 12             	repz loop 0x321d
    320b:	e1 12                	loope  0x321f
    320d:	e0 12                	loopne 0x3221
    320f:	f2 0f 10 e1          	movsd  xmm4,xmm1
    3213:	f2 0f 10 21          	movsd  xmm4,QWORD PTR [rcx]
    3217:	f2 48 0f 2d e1       	cvtsd2si rsp,xmm1
    321c:	f2 48 0f 2d 21       	cvtsd2si rsp,QWORD PTR [rcx]
    3221:	f2 48 0f 2a e1       	cvtsi2sd xmm4,rcx
    3226:	f2 0f 2a 21          	cvtsi2sd xmm4,DWORD PTR [rcx]
    322a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3230:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    3237:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    323e:	76 
    323f:	48 2b e2             	sub    rsp,rdx
    3242:	48 29 22             	sub    QWORD PTR [rdx],rsp
    3245:	48 2b 14 48          	sub    rdx,QWORD PTR [rax+rcx*2]
    3249:	f7 ea                	imul   edx
    324b:	48 f7 2a             	imul   QWORD PTR [rdx]
    324e:	48 0f af e2          	imul   rsp,rdx
    3252:	48 69 e2 10 32 54 76 	imul   rsp,rdx,0x76543210
    3259:	48 0f af 22          	imul   rsp,QWORD PTR [rdx]
    325d:	48 69 22 10 32 54 76 	imul   rsp,QWORD PTR [rdx],0x76543210
    3264:	48 f7 fa             	idiv   rdx
    3267:	48 f7 3a             	idiv   QWORD PTR [rdx]
    326a:	0f 8d 10 32 54 76    	jge    0x76546480
    3270:	e9 10 32 54 76       	jmp    0x76546485
    3275:	ff e2                	jmp    rdx
    3277:	48 8b e2             	mov    rsp,rdx
    327a:	48 8b 22             	mov    rsp,QWORD PTR [rdx]
    327d:	48 89 14 24          	mov    QWORD PTR [rsp],rdx
    3281:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    3288:	09 00 00 
    328b:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    3292:	00 00 00 
    3295:	e8 10 32 54 76       	call   0x765464aa
    329a:	ff d2                	call   rdx
    329c:	c3                   	ret    
    329d:	48 d1 ea             	shr    rdx,1
    32a0:	48 c1 ea 12          	shr    rdx,0x12
    32a4:	48 d1 2a             	shr    QWORD PTR [rdx],1
    32a7:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    32ab:	48 f7 da             	neg    rdx
    32ae:	48 f7 1a             	neg    QWORD PTR [rdx]
    32b1:	0f 05                	syscall 
    32b3:	52                   	push   rdx
    32b4:	ff 32                	push   QWORD PTR [rdx]
    32b6:	68 10 32 54 76       	push   0x76543210
    32bb:	5a                   	pop    rdx
    32bc:	8f 02                	pop    QWORD PTR [rdx]
    32be:	48 ff c2             	inc    rdx
    32c1:	48 ff 02             	inc    QWORD PTR [rdx]
    32c4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    32c5:	f3 e2 12             	repz loop 0x32da
    32c8:	e1 12                	loope  0x32dc
    32ca:	e0 12                	loopne 0x32de
    32cc:	f2 0f 10 e2          	movsd  xmm4,xmm2
    32d0:	f2 0f 10 22          	movsd  xmm4,QWORD PTR [rdx]
    32d4:	f2 48 0f 2d e2       	cvtsd2si rsp,xmm2
    32d9:	f2 48 0f 2d 22       	cvtsd2si rsp,QWORD PTR [rdx]
    32de:	f2 48 0f 2a e2       	cvtsi2sd xmm4,rdx
    32e3:	f2 0f 2a 22          	cvtsi2sd xmm4,DWORD PTR [rdx]
    32e7:	48 2d 10 32 54 76    	sub    rax,0x76543210
    32ed:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    32f4:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    32fb:	76 
    32fc:	48 2b e3             	sub    rsp,rbx
    32ff:	48 29 23             	sub    QWORD PTR [rbx],rsp
    3302:	48 2b 1c 48          	sub    rbx,QWORD PTR [rax+rcx*2]
    3306:	f7 eb                	imul   ebx
    3308:	48 f7 2b             	imul   QWORD PTR [rbx]
    330b:	48 0f af e3          	imul   rsp,rbx
    330f:	48 69 e3 10 32 54 76 	imul   rsp,rbx,0x76543210
    3316:	48 0f af 23          	imul   rsp,QWORD PTR [rbx]
    331a:	48 69 23 10 32 54 76 	imul   rsp,QWORD PTR [rbx],0x76543210
    3321:	48 f7 fb             	idiv   rbx
    3324:	48 f7 3b             	idiv   QWORD PTR [rbx]
    3327:	0f 8d 10 32 54 76    	jge    0x7654653d
    332d:	e9 10 32 54 76       	jmp    0x76546542
    3332:	ff e3                	jmp    rbx
    3334:	48 8b e3             	mov    rsp,rbx
    3337:	48 8b 23             	mov    rsp,QWORD PTR [rbx]
    333a:	48 89 1c 24          	mov    QWORD PTR [rsp],rbx
    333e:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    3345:	09 00 00 
    3348:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    334f:	00 00 00 
    3352:	e8 10 32 54 76       	call   0x76546567
    3357:	ff d3                	call   rbx
    3359:	c3                   	ret    
    335a:	48 d1 eb             	shr    rbx,1
    335d:	48 c1 eb 12          	shr    rbx,0x12
    3361:	48 d1 2b             	shr    QWORD PTR [rbx],1
    3364:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    3368:	48 f7 db             	neg    rbx
    336b:	48 f7 1b             	neg    QWORD PTR [rbx]
    336e:	0f 05                	syscall 
    3370:	53                   	push   rbx
    3371:	ff 33                	push   QWORD PTR [rbx]
    3373:	68 10 32 54 76       	push   0x76543210
    3378:	5b                   	pop    rbx
    3379:	8f 03                	pop    QWORD PTR [rbx]
    337b:	48 ff c3             	inc    rbx
    337e:	48 ff 03             	inc    QWORD PTR [rbx]
    3381:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3382:	f3 e2 12             	repz loop 0x3397
    3385:	e1 12                	loope  0x3399
    3387:	e0 12                	loopne 0x339b
    3389:	f2 0f 10 e3          	movsd  xmm4,xmm3
    338d:	f2 0f 10 23          	movsd  xmm4,QWORD PTR [rbx]
    3391:	f2 48 0f 2d e3       	cvtsd2si rsp,xmm3
    3396:	f2 48 0f 2d 23       	cvtsd2si rsp,QWORD PTR [rbx]
    339b:	f2 48 0f 2a e3       	cvtsi2sd xmm4,rbx
    33a0:	f2 0f 2a 23          	cvtsi2sd xmm4,DWORD PTR [rbx]
    33a4:	48 2d 10 32 54 76    	sub    rax,0x76543210
    33aa:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    33b1:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    33b8:	76 
    33b9:	48 2b e4             	sub    rsp,rsp
    33bc:	48 29 24 24          	sub    QWORD PTR [rsp],rsp
    33c0:	48 2b 24 48          	sub    rsp,QWORD PTR [rax+rcx*2]
    33c4:	f7 ec                	imul   esp
    33c6:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    33ca:	48 0f af e4          	imul   rsp,rsp
    33ce:	48 69 e4 10 32 54 76 	imul   rsp,rsp,0x76543210
    33d5:	48 0f af 24 24       	imul   rsp,QWORD PTR [rsp]
    33da:	48 69 24 24 10 32 54 	imul   rsp,QWORD PTR [rsp],0x76543210
    33e1:	76 
    33e2:	48 f7 fc             	idiv   rsp
    33e5:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    33e9:	0f 8d 10 32 54 76    	jge    0x765465ff
    33ef:	e9 10 32 54 76       	jmp    0x76546604
    33f4:	ff e4                	jmp    rsp
    33f6:	48 8b e4             	mov    rsp,rsp
    33f9:	48 8b 24 24          	mov    rsp,QWORD PTR [rsp]
    33fd:	48 89 24 24          	mov    QWORD PTR [rsp],rsp
    3401:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    3408:	09 00 00 
    340b:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    3412:	00 00 00 
    3415:	e8 10 32 54 76       	call   0x7654662a
    341a:	ff d4                	call   rsp
    341c:	c3                   	ret    
    341d:	48 d1 ec             	shr    rsp,1
    3420:	48 c1 ec 12          	shr    rsp,0x12
    3424:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    3428:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    342d:	48 f7 dc             	neg    rsp
    3430:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    3434:	0f 05                	syscall 
    3436:	54                   	push   rsp
    3437:	ff 34 24             	push   QWORD PTR [rsp]
    343a:	68 10 32 54 76       	push   0x76543210
    343f:	5c                   	pop    rsp
    3440:	8f 04 24             	pop    QWORD PTR [rsp]
    3443:	48 ff c4             	inc    rsp
    3446:	48 ff 04 24          	inc    QWORD PTR [rsp]
    344a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    344b:	f3 e2 12             	repz loop 0x3460
    344e:	e1 12                	loope  0x3462
    3450:	e0 12                	loopne 0x3464
    3452:	f2 0f 10 e4          	movsd  xmm4,xmm4
    3456:	f2 0f 10 24 24       	movsd  xmm4,QWORD PTR [rsp]
    345b:	f2 48 0f 2d e4       	cvtsd2si rsp,xmm4
    3460:	f2 48 0f 2d 24 24    	cvtsd2si rsp,QWORD PTR [rsp]
    3466:	f2 48 0f 2a e4       	cvtsi2sd xmm4,rsp
    346b:	f2 0f 2a 24 24       	cvtsi2sd xmm4,DWORD PTR [rsp]
    3470:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3476:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    347d:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    3484:	76 
    3485:	48 2b e5             	sub    rsp,rbp
    3488:	48 29 65 00          	sub    QWORD PTR [rbp+0x0],rsp
    348c:	48 2b 2c 48          	sub    rbp,QWORD PTR [rax+rcx*2]
    3490:	f7 ed                	imul   ebp
    3492:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    3496:	48 0f af e5          	imul   rsp,rbp
    349a:	48 69 e5 10 32 54 76 	imul   rsp,rbp,0x76543210
    34a1:	48 0f af 65 00       	imul   rsp,QWORD PTR [rbp+0x0]
    34a6:	48 69 65 00 10 32 54 	imul   rsp,QWORD PTR [rbp+0x0],0x76543210
    34ad:	76 
    34ae:	48 f7 fd             	idiv   rbp
    34b1:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    34b5:	0f 8d 10 32 54 76    	jge    0x765466cb
    34bb:	e9 10 32 54 76       	jmp    0x765466d0
    34c0:	ff e5                	jmp    rbp
    34c2:	48 8b e5             	mov    rsp,rbp
    34c5:	48 8b 65 00          	mov    rsp,QWORD PTR [rbp+0x0]
    34c9:	48 89 2c 24          	mov    QWORD PTR [rsp],rbp
    34cd:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    34d4:	09 00 00 
    34d7:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    34de:	00 00 00 
    34e1:	e8 10 32 54 76       	call   0x765466f6
    34e6:	ff d5                	call   rbp
    34e8:	c3                   	ret    
    34e9:	48 d1 ed             	shr    rbp,1
    34ec:	48 c1 ed 12          	shr    rbp,0x12
    34f0:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    34f4:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    34f9:	48 f7 dd             	neg    rbp
    34fc:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    3500:	0f 05                	syscall 
    3502:	55                   	push   rbp
    3503:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    3506:	68 10 32 54 76       	push   0x76543210
    350b:	5d                   	pop    rbp
    350c:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    350f:	48 ff c5             	inc    rbp
    3512:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    3516:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3517:	f3 e2 12             	repz loop 0x352c
    351a:	e1 12                	loope  0x352e
    351c:	e0 12                	loopne 0x3530
    351e:	f2 0f 10 e5          	movsd  xmm4,xmm5
    3522:	f2 0f 10 65 00       	movsd  xmm4,QWORD PTR [rbp+0x0]
    3527:	f2 48 0f 2d e5       	cvtsd2si rsp,xmm5
    352c:	f2 48 0f 2d 65 00    	cvtsd2si rsp,QWORD PTR [rbp+0x0]
    3532:	f2 48 0f 2a e5       	cvtsi2sd xmm4,rbp
    3537:	f2 0f 2a 65 00       	cvtsi2sd xmm4,DWORD PTR [rbp+0x0]
    353c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3542:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    3549:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    3550:	76 
    3551:	48 2b e6             	sub    rsp,rsi
    3554:	48 29 26             	sub    QWORD PTR [rsi],rsp
    3557:	48 2b 34 48          	sub    rsi,QWORD PTR [rax+rcx*2]
    355b:	f7 ee                	imul   esi
    355d:	48 f7 2e             	imul   QWORD PTR [rsi]
    3560:	48 0f af e6          	imul   rsp,rsi
    3564:	48 69 e6 10 32 54 76 	imul   rsp,rsi,0x76543210
    356b:	48 0f af 26          	imul   rsp,QWORD PTR [rsi]
    356f:	48 69 26 10 32 54 76 	imul   rsp,QWORD PTR [rsi],0x76543210
    3576:	48 f7 fe             	idiv   rsi
    3579:	48 f7 3e             	idiv   QWORD PTR [rsi]
    357c:	0f 8d 10 32 54 76    	jge    0x76546792
    3582:	e9 10 32 54 76       	jmp    0x76546797
    3587:	ff e6                	jmp    rsi
    3589:	48 8b e6             	mov    rsp,rsi
    358c:	48 8b 26             	mov    rsp,QWORD PTR [rsi]
    358f:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
    3593:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    359a:	09 00 00 
    359d:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    35a4:	00 00 00 
    35a7:	e8 10 32 54 76       	call   0x765467bc
    35ac:	ff d6                	call   rsi
    35ae:	c3                   	ret    
    35af:	48 d1 ee             	shr    rsi,1
    35b2:	48 c1 ee 12          	shr    rsi,0x12
    35b6:	48 d1 2e             	shr    QWORD PTR [rsi],1
    35b9:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    35bd:	48 f7 de             	neg    rsi
    35c0:	48 f7 1e             	neg    QWORD PTR [rsi]
    35c3:	0f 05                	syscall 
    35c5:	56                   	push   rsi
    35c6:	ff 36                	push   QWORD PTR [rsi]
    35c8:	68 10 32 54 76       	push   0x76543210
    35cd:	5e                   	pop    rsi
    35ce:	8f 06                	pop    QWORD PTR [rsi]
    35d0:	48 ff c6             	inc    rsi
    35d3:	48 ff 06             	inc    QWORD PTR [rsi]
    35d6:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    35d7:	f3 e2 12             	repz loop 0x35ec
    35da:	e1 12                	loope  0x35ee
    35dc:	e0 12                	loopne 0x35f0
    35de:	f2 0f 10 e6          	movsd  xmm4,xmm6
    35e2:	f2 0f 10 26          	movsd  xmm4,QWORD PTR [rsi]
    35e6:	f2 48 0f 2d e6       	cvtsd2si rsp,xmm6
    35eb:	f2 48 0f 2d 26       	cvtsd2si rsp,QWORD PTR [rsi]
    35f0:	f2 48 0f 2a e6       	cvtsi2sd xmm4,rsi
    35f5:	f2 0f 2a 26          	cvtsi2sd xmm4,DWORD PTR [rsi]
    35f9:	48 2d 10 32 54 76    	sub    rax,0x76543210
    35ff:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    3606:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    360d:	76 
    360e:	48 2b e7             	sub    rsp,rdi
    3611:	48 29 27             	sub    QWORD PTR [rdi],rsp
    3614:	48 2b 3c 48          	sub    rdi,QWORD PTR [rax+rcx*2]
    3618:	f7 ef                	imul   edi
    361a:	48 f7 2f             	imul   QWORD PTR [rdi]
    361d:	48 0f af e7          	imul   rsp,rdi
    3621:	48 69 e7 10 32 54 76 	imul   rsp,rdi,0x76543210
    3628:	48 0f af 27          	imul   rsp,QWORD PTR [rdi]
    362c:	48 69 27 10 32 54 76 	imul   rsp,QWORD PTR [rdi],0x76543210
    3633:	48 f7 ff             	idiv   rdi
    3636:	48 f7 3f             	idiv   QWORD PTR [rdi]
    3639:	0f 8d 10 32 54 76    	jge    0x7654684f
    363f:	e9 10 32 54 76       	jmp    0x76546854
    3644:	ff e7                	jmp    rdi
    3646:	48 8b e7             	mov    rsp,rdi
    3649:	48 8b 27             	mov    rsp,QWORD PTR [rdi]
    364c:	48 89 3c 24          	mov    QWORD PTR [rsp],rdi
    3650:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    3657:	09 00 00 
    365a:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    3661:	00 00 00 
    3664:	e8 10 32 54 76       	call   0x76546879
    3669:	ff d7                	call   rdi
    366b:	c3                   	ret    
    366c:	48 d1 ef             	shr    rdi,1
    366f:	48 c1 ef 12          	shr    rdi,0x12
    3673:	48 d1 2f             	shr    QWORD PTR [rdi],1
    3676:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    367a:	48 f7 df             	neg    rdi
    367d:	48 f7 1f             	neg    QWORD PTR [rdi]
    3680:	0f 05                	syscall 
    3682:	57                   	push   rdi
    3683:	ff 37                	push   QWORD PTR [rdi]
    3685:	68 10 32 54 76       	push   0x76543210
    368a:	5f                   	pop    rdi
    368b:	8f 07                	pop    QWORD PTR [rdi]
    368d:	48 ff c7             	inc    rdi
    3690:	48 ff 07             	inc    QWORD PTR [rdi]
    3693:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3694:	f3 e2 12             	repz loop 0x36a9
    3697:	e1 12                	loope  0x36ab
    3699:	e0 12                	loopne 0x36ad
    369b:	f2 0f 10 e7          	movsd  xmm4,xmm7
    369f:	f2 0f 10 27          	movsd  xmm4,QWORD PTR [rdi]
    36a3:	f2 48 0f 2d e7       	cvtsd2si rsp,xmm7
    36a8:	f2 48 0f 2d 27       	cvtsd2si rsp,QWORD PTR [rdi]
    36ad:	f2 48 0f 2a e7       	cvtsi2sd xmm4,rdi
    36b2:	f2 0f 2a 27          	cvtsi2sd xmm4,DWORD PTR [rdi]
    36b6:	48 2d 10 32 54 76    	sub    rax,0x76543210
    36bc:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    36c3:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    36ca:	76 
    36cb:	49 2b e0             	sub    rsp,r8
    36ce:	49 29 20             	sub    QWORD PTR [r8],rsp
    36d1:	4c 2b 04 49          	sub    r8,QWORD PTR [rcx+rcx*2]
    36d5:	f7 e8                	imul   eax
    36d7:	49 f7 28             	imul   QWORD PTR [r8]
    36da:	49 0f af e0          	imul   rsp,r8
    36de:	49 69 e0 10 32 54 76 	imul   rsp,r8,0x76543210
    36e5:	49 0f af 20          	imul   rsp,QWORD PTR [r8]
    36e9:	49 69 20 10 32 54 76 	imul   rsp,QWORD PTR [r8],0x76543210
    36f0:	49 f7 f8             	idiv   r8
    36f3:	49 f7 38             	idiv   QWORD PTR [r8]
    36f6:	0f 8d 10 32 54 76    	jge    0x7654690c
    36fc:	e9 10 32 54 76       	jmp    0x76546911
    3701:	41 ff e0             	jmp    r8
    3704:	49 8b e0             	mov    rsp,r8
    3707:	49 8b 20             	mov    rsp,QWORD PTR [r8]
    370a:	4c 89 04 24          	mov    QWORD PTR [rsp],r8
    370e:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    3715:	09 00 00 
    3718:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    371f:	00 00 00 
    3722:	e8 10 32 54 76       	call   0x76546937
    3727:	41 ff d0             	call   r8
    372a:	c3                   	ret    
    372b:	49 d1 e8             	shr    r8,1
    372e:	49 c1 e8 12          	shr    r8,0x12
    3732:	49 d1 28             	shr    QWORD PTR [r8],1
    3735:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    3739:	49 f7 d8             	neg    r8
    373c:	49 f7 18             	neg    QWORD PTR [r8]
    373f:	0f 05                	syscall 
    3741:	41 50                	push   r8
    3743:	41 ff 30             	push   QWORD PTR [r8]
    3746:	68 10 32 54 76       	push   0x76543210
    374b:	41 58                	pop    r8
    374d:	41 8f 00             	pop    QWORD PTR [r8]
    3750:	49 ff c0             	inc    r8
    3753:	49 ff 00             	inc    QWORD PTR [r8]
    3756:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3757:	f3 e2 12             	repz loop 0x376c
    375a:	e1 12                	loope  0x376e
    375c:	e0 12                	loopne 0x3770
    375e:	f2 41 0f 10 e0       	movsd  xmm4,xmm8
    3763:	f2 41 0f 10 20       	movsd  xmm4,QWORD PTR [r8]
    3768:	f2 49 0f 2d e0       	cvtsd2si rsp,xmm8
    376d:	f2 49 0f 2d 20       	cvtsd2si rsp,QWORD PTR [r8]
    3772:	f2 49 0f 2a e0       	cvtsi2sd xmm4,r8
    3777:	f2 41 0f 2a 20       	cvtsi2sd xmm4,DWORD PTR [r8]
    377c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3782:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    3789:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    3790:	76 
    3791:	49 2b e1             	sub    rsp,r9
    3794:	49 29 21             	sub    QWORD PTR [r9],rsp
    3797:	4c 2b 0c 49          	sub    r9,QWORD PTR [rcx+rcx*2]
    379b:	f7 e9                	imul   ecx
    379d:	49 f7 29             	imul   QWORD PTR [r9]
    37a0:	49 0f af e1          	imul   rsp,r9
    37a4:	49 69 e1 10 32 54 76 	imul   rsp,r9,0x76543210
    37ab:	49 0f af 21          	imul   rsp,QWORD PTR [r9]
    37af:	49 69 21 10 32 54 76 	imul   rsp,QWORD PTR [r9],0x76543210
    37b6:	49 f7 f9             	idiv   r9
    37b9:	49 f7 39             	idiv   QWORD PTR [r9]
    37bc:	0f 8d 10 32 54 76    	jge    0x765469d2
    37c2:	e9 10 32 54 76       	jmp    0x765469d7
    37c7:	41 ff e1             	jmp    r9
    37ca:	49 8b e1             	mov    rsp,r9
    37cd:	49 8b 21             	mov    rsp,QWORD PTR [r9]
    37d0:	4c 89 0c 24          	mov    QWORD PTR [rsp],r9
    37d4:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    37db:	09 00 00 
    37de:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    37e5:	00 00 00 
    37e8:	e8 10 32 54 76       	call   0x765469fd
    37ed:	41 ff d1             	call   r9
    37f0:	c3                   	ret    
    37f1:	49 d1 e9             	shr    r9,1
    37f4:	49 c1 e9 12          	shr    r9,0x12
    37f8:	49 d1 29             	shr    QWORD PTR [r9],1
    37fb:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    37ff:	49 f7 d9             	neg    r9
    3802:	49 f7 19             	neg    QWORD PTR [r9]
    3805:	0f 05                	syscall 
    3807:	41 51                	push   r9
    3809:	41 ff 31             	push   QWORD PTR [r9]
    380c:	68 10 32 54 76       	push   0x76543210
    3811:	41 59                	pop    r9
    3813:	41 8f 01             	pop    QWORD PTR [r9]
    3816:	49 ff c1             	inc    r9
    3819:	49 ff 01             	inc    QWORD PTR [r9]
    381c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    381d:	f3 e2 12             	repz loop 0x3832
    3820:	e1 12                	loope  0x3834
    3822:	e0 12                	loopne 0x3836
    3824:	f2 41 0f 10 e1       	movsd  xmm4,xmm9
    3829:	f2 41 0f 10 21       	movsd  xmm4,QWORD PTR [r9]
    382e:	f2 49 0f 2d e1       	cvtsd2si rsp,xmm9
    3833:	f2 49 0f 2d 21       	cvtsd2si rsp,QWORD PTR [r9]
    3838:	f2 49 0f 2a e1       	cvtsi2sd xmm4,r9
    383d:	f2 41 0f 2a 21       	cvtsi2sd xmm4,DWORD PTR [r9]
    3842:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3848:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    384f:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    3856:	76 
    3857:	49 2b e2             	sub    rsp,r10
    385a:	49 29 22             	sub    QWORD PTR [r10],rsp
    385d:	4c 2b 14 49          	sub    r10,QWORD PTR [rcx+rcx*2]
    3861:	f7 ea                	imul   edx
    3863:	49 f7 2a             	imul   QWORD PTR [r10]
    3866:	49 0f af e2          	imul   rsp,r10
    386a:	49 69 e2 10 32 54 76 	imul   rsp,r10,0x76543210
    3871:	49 0f af 22          	imul   rsp,QWORD PTR [r10]
    3875:	49 69 22 10 32 54 76 	imul   rsp,QWORD PTR [r10],0x76543210
    387c:	49 f7 fa             	idiv   r10
    387f:	49 f7 3a             	idiv   QWORD PTR [r10]
    3882:	0f 8d 10 32 54 76    	jge    0x76546a98
    3888:	e9 10 32 54 76       	jmp    0x76546a9d
    388d:	41 ff e2             	jmp    r10
    3890:	49 8b e2             	mov    rsp,r10
    3893:	49 8b 22             	mov    rsp,QWORD PTR [r10]
    3896:	4c 89 14 24          	mov    QWORD PTR [rsp],r10
    389a:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    38a1:	09 00 00 
    38a4:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    38ab:	00 00 00 
    38ae:	e8 10 32 54 76       	call   0x76546ac3
    38b3:	41 ff d2             	call   r10
    38b6:	c3                   	ret    
    38b7:	49 d1 ea             	shr    r10,1
    38ba:	49 c1 ea 12          	shr    r10,0x12
    38be:	49 d1 2a             	shr    QWORD PTR [r10],1
    38c1:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    38c5:	49 f7 da             	neg    r10
    38c8:	49 f7 1a             	neg    QWORD PTR [r10]
    38cb:	0f 05                	syscall 
    38cd:	41 52                	push   r10
    38cf:	41 ff 32             	push   QWORD PTR [r10]
    38d2:	68 10 32 54 76       	push   0x76543210
    38d7:	41 5a                	pop    r10
    38d9:	41 8f 02             	pop    QWORD PTR [r10]
    38dc:	49 ff c2             	inc    r10
    38df:	49 ff 02             	inc    QWORD PTR [r10]
    38e2:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    38e3:	f3 e2 12             	repz loop 0x38f8
    38e6:	e1 12                	loope  0x38fa
    38e8:	e0 12                	loopne 0x38fc
    38ea:	f2 41 0f 10 e2       	movsd  xmm4,xmm10
    38ef:	f2 41 0f 10 22       	movsd  xmm4,QWORD PTR [r10]
    38f4:	f2 49 0f 2d e2       	cvtsd2si rsp,xmm10
    38f9:	f2 49 0f 2d 22       	cvtsd2si rsp,QWORD PTR [r10]
    38fe:	f2 49 0f 2a e2       	cvtsi2sd xmm4,r10
    3903:	f2 41 0f 2a 22       	cvtsi2sd xmm4,DWORD PTR [r10]
    3908:	48 2d 10 32 54 76    	sub    rax,0x76543210
    390e:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    3915:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    391c:	76 
    391d:	49 2b e3             	sub    rsp,r11
    3920:	49 29 23             	sub    QWORD PTR [r11],rsp
    3923:	4c 2b 1c 49          	sub    r11,QWORD PTR [rcx+rcx*2]
    3927:	f7 eb                	imul   ebx
    3929:	49 f7 2b             	imul   QWORD PTR [r11]
    392c:	49 0f af e3          	imul   rsp,r11
    3930:	49 69 e3 10 32 54 76 	imul   rsp,r11,0x76543210
    3937:	49 0f af 23          	imul   rsp,QWORD PTR [r11]
    393b:	49 69 23 10 32 54 76 	imul   rsp,QWORD PTR [r11],0x76543210
    3942:	49 f7 fb             	idiv   r11
    3945:	49 f7 3b             	idiv   QWORD PTR [r11]
    3948:	0f 8d 10 32 54 76    	jge    0x76546b5e
    394e:	e9 10 32 54 76       	jmp    0x76546b63
    3953:	41 ff e3             	jmp    r11
    3956:	49 8b e3             	mov    rsp,r11
    3959:	49 8b 23             	mov    rsp,QWORD PTR [r11]
    395c:	4c 89 1c 24          	mov    QWORD PTR [rsp],r11
    3960:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    3967:	09 00 00 
    396a:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    3971:	00 00 00 
    3974:	e8 10 32 54 76       	call   0x76546b89
    3979:	41 ff d3             	call   r11
    397c:	c3                   	ret    
    397d:	49 d1 eb             	shr    r11,1
    3980:	49 c1 eb 12          	shr    r11,0x12
    3984:	49 d1 2b             	shr    QWORD PTR [r11],1
    3987:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    398b:	49 f7 db             	neg    r11
    398e:	49 f7 1b             	neg    QWORD PTR [r11]
    3991:	0f 05                	syscall 
    3993:	41 53                	push   r11
    3995:	41 ff 33             	push   QWORD PTR [r11]
    3998:	68 10 32 54 76       	push   0x76543210
    399d:	41 5b                	pop    r11
    399f:	41 8f 03             	pop    QWORD PTR [r11]
    39a2:	49 ff c3             	inc    r11
    39a5:	49 ff 03             	inc    QWORD PTR [r11]
    39a8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    39a9:	f3 e2 12             	repz loop 0x39be
    39ac:	e1 12                	loope  0x39c0
    39ae:	e0 12                	loopne 0x39c2
    39b0:	f2 41 0f 10 e3       	movsd  xmm4,xmm11
    39b5:	f2 41 0f 10 23       	movsd  xmm4,QWORD PTR [r11]
    39ba:	f2 49 0f 2d e3       	cvtsd2si rsp,xmm11
    39bf:	f2 49 0f 2d 23       	cvtsd2si rsp,QWORD PTR [r11]
    39c4:	f2 49 0f 2a e3       	cvtsi2sd xmm4,r11
    39c9:	f2 41 0f 2a 23       	cvtsi2sd xmm4,DWORD PTR [r11]
    39ce:	48 2d 10 32 54 76    	sub    rax,0x76543210
    39d4:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    39db:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    39e2:	76 
    39e3:	49 2b e4             	sub    rsp,r12
    39e6:	49 29 24 24          	sub    QWORD PTR [r12],rsp
    39ea:	4c 2b 24 49          	sub    r12,QWORD PTR [rcx+rcx*2]
    39ee:	f7 ec                	imul   esp
    39f0:	49 f7 2c 24          	imul   QWORD PTR [r12]
    39f4:	49 0f af e4          	imul   rsp,r12
    39f8:	49 69 e4 10 32 54 76 	imul   rsp,r12,0x76543210
    39ff:	49 0f af 24 24       	imul   rsp,QWORD PTR [r12]
    3a04:	49 69 24 24 10 32 54 	imul   rsp,QWORD PTR [r12],0x76543210
    3a0b:	76 
    3a0c:	49 f7 fc             	idiv   r12
    3a0f:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    3a13:	0f 8d 10 32 54 76    	jge    0x76546c29
    3a19:	e9 10 32 54 76       	jmp    0x76546c2e
    3a1e:	41 ff e4             	jmp    r12
    3a21:	49 8b e4             	mov    rsp,r12
    3a24:	49 8b 24 24          	mov    rsp,QWORD PTR [r12]
    3a28:	4c 89 24 24          	mov    QWORD PTR [rsp],r12
    3a2c:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    3a33:	09 00 00 
    3a36:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    3a3d:	00 00 00 
    3a40:	e8 10 32 54 76       	call   0x76546c55
    3a45:	41 ff d4             	call   r12
    3a48:	c3                   	ret    
    3a49:	49 d1 ec             	shr    r12,1
    3a4c:	49 c1 ec 12          	shr    r12,0x12
    3a50:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    3a54:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    3a59:	49 f7 dc             	neg    r12
    3a5c:	49 f7 1c 24          	neg    QWORD PTR [r12]
    3a60:	0f 05                	syscall 
    3a62:	41 54                	push   r12
    3a64:	41 ff 34 24          	push   QWORD PTR [r12]
    3a68:	68 10 32 54 76       	push   0x76543210
    3a6d:	41 5c                	pop    r12
    3a6f:	41 8f 04 24          	pop    QWORD PTR [r12]
    3a73:	49 ff c4             	inc    r12
    3a76:	49 ff 04 24          	inc    QWORD PTR [r12]
    3a7a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3a7b:	f3 e2 12             	repz loop 0x3a90
    3a7e:	e1 12                	loope  0x3a92
    3a80:	e0 12                	loopne 0x3a94
    3a82:	f2 41 0f 10 e4       	movsd  xmm4,xmm12
    3a87:	f2 41 0f 10 24 24    	movsd  xmm4,QWORD PTR [r12]
    3a8d:	f2 49 0f 2d e4       	cvtsd2si rsp,xmm12
    3a92:	f2 49 0f 2d 24 24    	cvtsd2si rsp,QWORD PTR [r12]
    3a98:	f2 49 0f 2a e4       	cvtsi2sd xmm4,r12
    3a9d:	f2 41 0f 2a 24 24    	cvtsi2sd xmm4,DWORD PTR [r12]
    3aa3:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3aa9:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    3ab0:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    3ab7:	76 
    3ab8:	49 2b e5             	sub    rsp,r13
    3abb:	49 29 65 00          	sub    QWORD PTR [r13+0x0],rsp
    3abf:	4c 2b 2c 49          	sub    r13,QWORD PTR [rcx+rcx*2]
    3ac3:	f7 ed                	imul   ebp
    3ac5:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    3ac9:	49 0f af e5          	imul   rsp,r13
    3acd:	49 69 e5 10 32 54 76 	imul   rsp,r13,0x76543210
    3ad4:	49 0f af 65 00       	imul   rsp,QWORD PTR [r13+0x0]
    3ad9:	49 69 65 00 10 32 54 	imul   rsp,QWORD PTR [r13+0x0],0x76543210
    3ae0:	76 
    3ae1:	49 f7 fd             	idiv   r13
    3ae4:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    3ae8:	0f 8d 10 32 54 76    	jge    0x76546cfe
    3aee:	e9 10 32 54 76       	jmp    0x76546d03
    3af3:	41 ff e5             	jmp    r13
    3af6:	49 8b e5             	mov    rsp,r13
    3af9:	49 8b 65 00          	mov    rsp,QWORD PTR [r13+0x0]
    3afd:	4c 89 2c 24          	mov    QWORD PTR [rsp],r13
    3b01:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    3b08:	09 00 00 
    3b0b:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    3b12:	00 00 00 
    3b15:	e8 10 32 54 76       	call   0x76546d2a
    3b1a:	41 ff d5             	call   r13
    3b1d:	c3                   	ret    
    3b1e:	49 d1 ed             	shr    r13,1
    3b21:	49 c1 ed 12          	shr    r13,0x12
    3b25:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    3b29:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    3b2e:	49 f7 dd             	neg    r13
    3b31:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    3b35:	0f 05                	syscall 
    3b37:	41 55                	push   r13
    3b39:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    3b3d:	68 10 32 54 76       	push   0x76543210
    3b42:	41 5d                	pop    r13
    3b44:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    3b48:	49 ff c5             	inc    r13
    3b4b:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    3b4f:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3b50:	f3 e2 12             	repz loop 0x3b65
    3b53:	e1 12                	loope  0x3b67
    3b55:	e0 12                	loopne 0x3b69
    3b57:	f2 41 0f 10 e5       	movsd  xmm4,xmm13
    3b5c:	f2 41 0f 10 65 00    	movsd  xmm4,QWORD PTR [r13+0x0]
    3b62:	f2 49 0f 2d e5       	cvtsd2si rsp,xmm13
    3b67:	f2 49 0f 2d 65 00    	cvtsd2si rsp,QWORD PTR [r13+0x0]
    3b6d:	f2 49 0f 2a e5       	cvtsi2sd xmm4,r13
    3b72:	f2 41 0f 2a 65 00    	cvtsi2sd xmm4,DWORD PTR [r13+0x0]
    3b78:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3b7e:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    3b85:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    3b8c:	76 
    3b8d:	49 2b e6             	sub    rsp,r14
    3b90:	49 29 26             	sub    QWORD PTR [r14],rsp
    3b93:	4c 2b 34 49          	sub    r14,QWORD PTR [rcx+rcx*2]
    3b97:	f7 ee                	imul   esi
    3b99:	49 f7 2e             	imul   QWORD PTR [r14]
    3b9c:	49 0f af e6          	imul   rsp,r14
    3ba0:	49 69 e6 10 32 54 76 	imul   rsp,r14,0x76543210
    3ba7:	49 0f af 26          	imul   rsp,QWORD PTR [r14]
    3bab:	49 69 26 10 32 54 76 	imul   rsp,QWORD PTR [r14],0x76543210
    3bb2:	49 f7 fe             	idiv   r14
    3bb5:	49 f7 3e             	idiv   QWORD PTR [r14]
    3bb8:	0f 8d 10 32 54 76    	jge    0x76546dce
    3bbe:	e9 10 32 54 76       	jmp    0x76546dd3
    3bc3:	41 ff e6             	jmp    r14
    3bc6:	49 8b e6             	mov    rsp,r14
    3bc9:	49 8b 26             	mov    rsp,QWORD PTR [r14]
    3bcc:	4c 89 34 24          	mov    QWORD PTR [rsp],r14
    3bd0:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    3bd7:	09 00 00 
    3bda:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    3be1:	00 00 00 
    3be4:	e8 10 32 54 76       	call   0x76546df9
    3be9:	41 ff d6             	call   r14
    3bec:	c3                   	ret    
    3bed:	49 d1 ee             	shr    r14,1
    3bf0:	49 c1 ee 12          	shr    r14,0x12
    3bf4:	49 d1 2e             	shr    QWORD PTR [r14],1
    3bf7:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    3bfb:	49 f7 de             	neg    r14
    3bfe:	49 f7 1e             	neg    QWORD PTR [r14]
    3c01:	0f 05                	syscall 
    3c03:	41 56                	push   r14
    3c05:	41 ff 36             	push   QWORD PTR [r14]
    3c08:	68 10 32 54 76       	push   0x76543210
    3c0d:	41 5e                	pop    r14
    3c0f:	41 8f 06             	pop    QWORD PTR [r14]
    3c12:	49 ff c6             	inc    r14
    3c15:	49 ff 06             	inc    QWORD PTR [r14]
    3c18:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3c19:	f3 e2 12             	repz loop 0x3c2e
    3c1c:	e1 12                	loope  0x3c30
    3c1e:	e0 12                	loopne 0x3c32
    3c20:	f2 41 0f 10 e6       	movsd  xmm4,xmm14
    3c25:	f2 41 0f 10 26       	movsd  xmm4,QWORD PTR [r14]
    3c2a:	f2 49 0f 2d e6       	cvtsd2si rsp,xmm14
    3c2f:	f2 49 0f 2d 26       	cvtsd2si rsp,QWORD PTR [r14]
    3c34:	f2 49 0f 2a e6       	cvtsi2sd xmm4,r14
    3c39:	f2 41 0f 2a 26       	cvtsi2sd xmm4,DWORD PTR [r14]
    3c3e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3c44:	48 81 ec 10 32 54 76 	sub    rsp,0x76543210
    3c4b:	48 81 2c 24 10 32 54 	sub    QWORD PTR [rsp],0x76543210
    3c52:	76 
    3c53:	49 2b e7             	sub    rsp,r15
    3c56:	49 29 27             	sub    QWORD PTR [r15],rsp
    3c59:	4c 2b 3c 49          	sub    r15,QWORD PTR [rcx+rcx*2]
    3c5d:	f7 ef                	imul   edi
    3c5f:	49 f7 2f             	imul   QWORD PTR [r15]
    3c62:	49 0f af e7          	imul   rsp,r15
    3c66:	49 69 e7 10 32 54 76 	imul   rsp,r15,0x76543210
    3c6d:	49 0f af 27          	imul   rsp,QWORD PTR [r15]
    3c71:	49 69 27 10 32 54 76 	imul   rsp,QWORD PTR [r15],0x76543210
    3c78:	49 f7 ff             	idiv   r15
    3c7b:	49 f7 3f             	idiv   QWORD PTR [r15]
    3c7e:	0f 8d 10 32 54 76    	jge    0x76546e94
    3c84:	e9 10 32 54 76       	jmp    0x76546e99
    3c89:	41 ff e7             	jmp    r15
    3c8c:	49 8b e7             	mov    rsp,r15
    3c8f:	49 8b 27             	mov    rsp,QWORD PTR [r15]
    3c92:	4c 89 3c 24          	mov    QWORD PTR [rsp],r15
    3c96:	48 bc 09 21 43 65 87 	movabs rsp,0x98765432109
    3c9d:	09 00 00 
    3ca0:	48 bc 10 32 54 76 00 	movabs rsp,0x76543210
    3ca7:	00 00 00 
    3caa:	e8 10 32 54 76       	call   0x76546ebf
    3caf:	41 ff d7             	call   r15
    3cb2:	c3                   	ret    
    3cb3:	49 d1 ef             	shr    r15,1
    3cb6:	49 c1 ef 12          	shr    r15,0x12
    3cba:	49 d1 2f             	shr    QWORD PTR [r15],1
    3cbd:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    3cc1:	49 f7 df             	neg    r15
    3cc4:	49 f7 1f             	neg    QWORD PTR [r15]
    3cc7:	0f 05                	syscall 
    3cc9:	41 57                	push   r15
    3ccb:	41 ff 37             	push   QWORD PTR [r15]
    3cce:	68 10 32 54 76       	push   0x76543210
    3cd3:	41 5f                	pop    r15
    3cd5:	41 8f 07             	pop    QWORD PTR [r15]
    3cd8:	49 ff c7             	inc    r15
    3cdb:	49 ff 07             	inc    QWORD PTR [r15]
    3cde:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3cdf:	f3 e2 12             	repz loop 0x3cf4
    3ce2:	e1 12                	loope  0x3cf6
    3ce4:	e0 12                	loopne 0x3cf8
    3ce6:	f2 41 0f 10 e7       	movsd  xmm4,xmm15
    3ceb:	f2 41 0f 10 27       	movsd  xmm4,QWORD PTR [r15]
    3cf0:	f2 49 0f 2d e7       	cvtsd2si rsp,xmm15
    3cf5:	f2 49 0f 2d 27       	cvtsd2si rsp,QWORD PTR [r15]
    3cfa:	f2 49 0f 2a e7       	cvtsi2sd xmm4,r15
    3cff:	f2 41 0f 2a 27       	cvtsi2sd xmm4,DWORD PTR [r15]
    3d04:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3d0a:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    3d11:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    3d18:	76 
    3d19:	48 2b e8             	sub    rbp,rax
    3d1c:	48 29 28             	sub    QWORD PTR [rax],rbp
    3d1f:	48 2b 05 48 f7 e8 48 	sub    rax,QWORD PTR [rip+0x48e8f748]        # 0x48e9346e
    3d26:	f7 28                	imul   DWORD PTR [rax]
    3d28:	48 0f af e8          	imul   rbp,rax
    3d2c:	48 69 e8 10 32 54 76 	imul   rbp,rax,0x76543210
    3d33:	48 0f af 28          	imul   rbp,QWORD PTR [rax]
    3d37:	48 69 28 10 32 54 76 	imul   rbp,QWORD PTR [rax],0x76543210
    3d3e:	48 f7 f8             	idiv   rax
    3d41:	48 f7 38             	idiv   QWORD PTR [rax]
    3d44:	0f 8d 10 32 54 76    	jge    0x76546f5a
    3d4a:	e9 10 32 54 76       	jmp    0x76546f5f
    3d4f:	ff e0                	jmp    rax
    3d51:	48 8b e8             	mov    rbp,rax
    3d54:	48 8b 28             	mov    rbp,QWORD PTR [rax]
    3d57:	48 89 45 00          	mov    QWORD PTR [rbp+0x0],rax
    3d5b:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    3d62:	09 00 00 
    3d65:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    3d6c:	00 00 00 
    3d6f:	e8 10 32 54 76       	call   0x76546f84
    3d74:	ff d0                	call   rax
    3d76:	c3                   	ret    
    3d77:	48 d1 e8             	shr    rax,1
    3d7a:	48 c1 e8 12          	shr    rax,0x12
    3d7e:	48 d1 28             	shr    QWORD PTR [rax],1
    3d81:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    3d85:	48 f7 d8             	neg    rax
    3d88:	48 f7 18             	neg    QWORD PTR [rax]
    3d8b:	0f 05                	syscall 
    3d8d:	50                   	push   rax
    3d8e:	ff 30                	push   QWORD PTR [rax]
    3d90:	68 10 32 54 76       	push   0x76543210
    3d95:	58                   	pop    rax
    3d96:	8f 00                	pop    QWORD PTR [rax]
    3d98:	48 ff c0             	inc    rax
    3d9b:	48 ff 00             	inc    QWORD PTR [rax]
    3d9e:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3d9f:	f3 e2 12             	repz loop 0x3db4
    3da2:	e1 12                	loope  0x3db6
    3da4:	e0 12                	loopne 0x3db8
    3da6:	f2 0f 10 e8          	movsd  xmm5,xmm0
    3daa:	f2 0f 10 28          	movsd  xmm5,QWORD PTR [rax]
    3dae:	f2 48 0f 2d e8       	cvtsd2si rbp,xmm0
    3db3:	f2 48 0f 2d 28       	cvtsd2si rbp,QWORD PTR [rax]
    3db8:	f2 48 0f 2a e8       	cvtsi2sd xmm5,rax
    3dbd:	f2 0f 2a 28          	cvtsi2sd xmm5,DWORD PTR [rax]
    3dc1:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3dc7:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    3dce:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    3dd5:	76 
    3dd6:	48 2b e9             	sub    rbp,rcx
    3dd9:	48 29 29             	sub    QWORD PTR [rcx],rbp
    3ddc:	48 2b 0d 48 f7 e9 48 	sub    rcx,QWORD PTR [rip+0x48e9f748]        # 0x48ea352b
    3de3:	f7 29                	imul   DWORD PTR [rcx]
    3de5:	48 0f af e9          	imul   rbp,rcx
    3de9:	48 69 e9 10 32 54 76 	imul   rbp,rcx,0x76543210
    3df0:	48 0f af 29          	imul   rbp,QWORD PTR [rcx]
    3df4:	48 69 29 10 32 54 76 	imul   rbp,QWORD PTR [rcx],0x76543210
    3dfb:	48 f7 f9             	idiv   rcx
    3dfe:	48 f7 39             	idiv   QWORD PTR [rcx]
    3e01:	0f 8d 10 32 54 76    	jge    0x76547017
    3e07:	e9 10 32 54 76       	jmp    0x7654701c
    3e0c:	ff e1                	jmp    rcx
    3e0e:	48 8b e9             	mov    rbp,rcx
    3e11:	48 8b 29             	mov    rbp,QWORD PTR [rcx]
    3e14:	48 89 4d 00          	mov    QWORD PTR [rbp+0x0],rcx
    3e18:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    3e1f:	09 00 00 
    3e22:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    3e29:	00 00 00 
    3e2c:	e8 10 32 54 76       	call   0x76547041
    3e31:	ff d1                	call   rcx
    3e33:	c3                   	ret    
    3e34:	48 d1 e9             	shr    rcx,1
    3e37:	48 c1 e9 12          	shr    rcx,0x12
    3e3b:	48 d1 29             	shr    QWORD PTR [rcx],1
    3e3e:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    3e42:	48 f7 d9             	neg    rcx
    3e45:	48 f7 19             	neg    QWORD PTR [rcx]
    3e48:	0f 05                	syscall 
    3e4a:	51                   	push   rcx
    3e4b:	ff 31                	push   QWORD PTR [rcx]
    3e4d:	68 10 32 54 76       	push   0x76543210
    3e52:	59                   	pop    rcx
    3e53:	8f 01                	pop    QWORD PTR [rcx]
    3e55:	48 ff c1             	inc    rcx
    3e58:	48 ff 01             	inc    QWORD PTR [rcx]
    3e5b:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3e5c:	f3 e2 12             	repz loop 0x3e71
    3e5f:	e1 12                	loope  0x3e73
    3e61:	e0 12                	loopne 0x3e75
    3e63:	f2 0f 10 e9          	movsd  xmm5,xmm1
    3e67:	f2 0f 10 29          	movsd  xmm5,QWORD PTR [rcx]
    3e6b:	f2 48 0f 2d e9       	cvtsd2si rbp,xmm1
    3e70:	f2 48 0f 2d 29       	cvtsd2si rbp,QWORD PTR [rcx]
    3e75:	f2 48 0f 2a e9       	cvtsi2sd xmm5,rcx
    3e7a:	f2 0f 2a 29          	cvtsi2sd xmm5,DWORD PTR [rcx]
    3e7e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3e84:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    3e8b:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    3e92:	76 
    3e93:	48 2b ea             	sub    rbp,rdx
    3e96:	48 29 2a             	sub    QWORD PTR [rdx],rbp
    3e99:	48 2b 15 48 f7 ea 48 	sub    rdx,QWORD PTR [rip+0x48eaf748]        # 0x48eb35e8
    3ea0:	f7 2a                	imul   DWORD PTR [rdx]
    3ea2:	48 0f af ea          	imul   rbp,rdx
    3ea6:	48 69 ea 10 32 54 76 	imul   rbp,rdx,0x76543210
    3ead:	48 0f af 2a          	imul   rbp,QWORD PTR [rdx]
    3eb1:	48 69 2a 10 32 54 76 	imul   rbp,QWORD PTR [rdx],0x76543210
    3eb8:	48 f7 fa             	idiv   rdx
    3ebb:	48 f7 3a             	idiv   QWORD PTR [rdx]
    3ebe:	0f 8d 10 32 54 76    	jge    0x765470d4
    3ec4:	e9 10 32 54 76       	jmp    0x765470d9
    3ec9:	ff e2                	jmp    rdx
    3ecb:	48 8b ea             	mov    rbp,rdx
    3ece:	48 8b 2a             	mov    rbp,QWORD PTR [rdx]
    3ed1:	48 89 55 00          	mov    QWORD PTR [rbp+0x0],rdx
    3ed5:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    3edc:	09 00 00 
    3edf:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    3ee6:	00 00 00 
    3ee9:	e8 10 32 54 76       	call   0x765470fe
    3eee:	ff d2                	call   rdx
    3ef0:	c3                   	ret    
    3ef1:	48 d1 ea             	shr    rdx,1
    3ef4:	48 c1 ea 12          	shr    rdx,0x12
    3ef8:	48 d1 2a             	shr    QWORD PTR [rdx],1
    3efb:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    3eff:	48 f7 da             	neg    rdx
    3f02:	48 f7 1a             	neg    QWORD PTR [rdx]
    3f05:	0f 05                	syscall 
    3f07:	52                   	push   rdx
    3f08:	ff 32                	push   QWORD PTR [rdx]
    3f0a:	68 10 32 54 76       	push   0x76543210
    3f0f:	5a                   	pop    rdx
    3f10:	8f 02                	pop    QWORD PTR [rdx]
    3f12:	48 ff c2             	inc    rdx
    3f15:	48 ff 02             	inc    QWORD PTR [rdx]
    3f18:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3f19:	f3 e2 12             	repz loop 0x3f2e
    3f1c:	e1 12                	loope  0x3f30
    3f1e:	e0 12                	loopne 0x3f32
    3f20:	f2 0f 10 ea          	movsd  xmm5,xmm2
    3f24:	f2 0f 10 2a          	movsd  xmm5,QWORD PTR [rdx]
    3f28:	f2 48 0f 2d ea       	cvtsd2si rbp,xmm2
    3f2d:	f2 48 0f 2d 2a       	cvtsd2si rbp,QWORD PTR [rdx]
    3f32:	f2 48 0f 2a ea       	cvtsi2sd xmm5,rdx
    3f37:	f2 0f 2a 2a          	cvtsi2sd xmm5,DWORD PTR [rdx]
    3f3b:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3f41:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    3f48:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    3f4f:	76 
    3f50:	48 2b eb             	sub    rbp,rbx
    3f53:	48 29 2b             	sub    QWORD PTR [rbx],rbp
    3f56:	48 2b 1d 48 f7 eb 48 	sub    rbx,QWORD PTR [rip+0x48ebf748]        # 0x48ec36a5
    3f5d:	f7 2b                	imul   DWORD PTR [rbx]
    3f5f:	48 0f af eb          	imul   rbp,rbx
    3f63:	48 69 eb 10 32 54 76 	imul   rbp,rbx,0x76543210
    3f6a:	48 0f af 2b          	imul   rbp,QWORD PTR [rbx]
    3f6e:	48 69 2b 10 32 54 76 	imul   rbp,QWORD PTR [rbx],0x76543210
    3f75:	48 f7 fb             	idiv   rbx
    3f78:	48 f7 3b             	idiv   QWORD PTR [rbx]
    3f7b:	0f 8d 10 32 54 76    	jge    0x76547191
    3f81:	e9 10 32 54 76       	jmp    0x76547196
    3f86:	ff e3                	jmp    rbx
    3f88:	48 8b eb             	mov    rbp,rbx
    3f8b:	48 8b 2b             	mov    rbp,QWORD PTR [rbx]
    3f8e:	48 89 5d 00          	mov    QWORD PTR [rbp+0x0],rbx
    3f92:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    3f99:	09 00 00 
    3f9c:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    3fa3:	00 00 00 
    3fa6:	e8 10 32 54 76       	call   0x765471bb
    3fab:	ff d3                	call   rbx
    3fad:	c3                   	ret    
    3fae:	48 d1 eb             	shr    rbx,1
    3fb1:	48 c1 eb 12          	shr    rbx,0x12
    3fb5:	48 d1 2b             	shr    QWORD PTR [rbx],1
    3fb8:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    3fbc:	48 f7 db             	neg    rbx
    3fbf:	48 f7 1b             	neg    QWORD PTR [rbx]
    3fc2:	0f 05                	syscall 
    3fc4:	53                   	push   rbx
    3fc5:	ff 33                	push   QWORD PTR [rbx]
    3fc7:	68 10 32 54 76       	push   0x76543210
    3fcc:	5b                   	pop    rbx
    3fcd:	8f 03                	pop    QWORD PTR [rbx]
    3fcf:	48 ff c3             	inc    rbx
    3fd2:	48 ff 03             	inc    QWORD PTR [rbx]
    3fd5:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    3fd6:	f3 e2 12             	repz loop 0x3feb
    3fd9:	e1 12                	loope  0x3fed
    3fdb:	e0 12                	loopne 0x3fef
    3fdd:	f2 0f 10 eb          	movsd  xmm5,xmm3
    3fe1:	f2 0f 10 2b          	movsd  xmm5,QWORD PTR [rbx]
    3fe5:	f2 48 0f 2d eb       	cvtsd2si rbp,xmm3
    3fea:	f2 48 0f 2d 2b       	cvtsd2si rbp,QWORD PTR [rbx]
    3fef:	f2 48 0f 2a eb       	cvtsi2sd xmm5,rbx
    3ff4:	f2 0f 2a 2b          	cvtsi2sd xmm5,DWORD PTR [rbx]
    3ff8:	48 2d 10 32 54 76    	sub    rax,0x76543210
    3ffe:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    4005:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    400c:	76 
    400d:	48 2b ec             	sub    rbp,rsp
    4010:	48 29 2c 24          	sub    QWORD PTR [rsp],rbp
    4014:	48 2b 25 48 f7 ec 48 	sub    rsp,QWORD PTR [rip+0x48ecf748]        # 0x48ed3763
    401b:	f7 2c 24             	imul   DWORD PTR [rsp]
    401e:	48 0f af ec          	imul   rbp,rsp
    4022:	48 69 ec 10 32 54 76 	imul   rbp,rsp,0x76543210
    4029:	48 0f af 2c 24       	imul   rbp,QWORD PTR [rsp]
    402e:	48 69 2c 24 10 32 54 	imul   rbp,QWORD PTR [rsp],0x76543210
    4035:	76 
    4036:	48 f7 fc             	idiv   rsp
    4039:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    403d:	0f 8d 10 32 54 76    	jge    0x76547253
    4043:	e9 10 32 54 76       	jmp    0x76547258
    4048:	ff e4                	jmp    rsp
    404a:	48 8b ec             	mov    rbp,rsp
    404d:	48 8b 2c 24          	mov    rbp,QWORD PTR [rsp]
    4051:	48 89 65 00          	mov    QWORD PTR [rbp+0x0],rsp
    4055:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    405c:	09 00 00 
    405f:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    4066:	00 00 00 
    4069:	e8 10 32 54 76       	call   0x7654727e
    406e:	ff d4                	call   rsp
    4070:	c3                   	ret    
    4071:	48 d1 ec             	shr    rsp,1
    4074:	48 c1 ec 12          	shr    rsp,0x12
    4078:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    407c:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    4081:	48 f7 dc             	neg    rsp
    4084:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    4088:	0f 05                	syscall 
    408a:	54                   	push   rsp
    408b:	ff 34 24             	push   QWORD PTR [rsp]
    408e:	68 10 32 54 76       	push   0x76543210
    4093:	5c                   	pop    rsp
    4094:	8f 04 24             	pop    QWORD PTR [rsp]
    4097:	48 ff c4             	inc    rsp
    409a:	48 ff 04 24          	inc    QWORD PTR [rsp]
    409e:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    409f:	f3 e2 12             	repz loop 0x40b4
    40a2:	e1 12                	loope  0x40b6
    40a4:	e0 12                	loopne 0x40b8
    40a6:	f2 0f 10 ec          	movsd  xmm5,xmm4
    40aa:	f2 0f 10 2c 24       	movsd  xmm5,QWORD PTR [rsp]
    40af:	f2 48 0f 2d ec       	cvtsd2si rbp,xmm4
    40b4:	f2 48 0f 2d 2c 24    	cvtsd2si rbp,QWORD PTR [rsp]
    40ba:	f2 48 0f 2a ec       	cvtsi2sd xmm5,rsp
    40bf:	f2 0f 2a 2c 24       	cvtsi2sd xmm5,DWORD PTR [rsp]
    40c4:	48 2d 10 32 54 76    	sub    rax,0x76543210
    40ca:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    40d1:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    40d8:	76 
    40d9:	48 2b ed             	sub    rbp,rbp
    40dc:	48 29 6d 00          	sub    QWORD PTR [rbp+0x0],rbp
    40e0:	48 2b 2d 48 f7 ed 48 	sub    rbp,QWORD PTR [rip+0x48edf748]        # 0x48ee382f
    40e7:	f7 6d 00             	imul   DWORD PTR [rbp+0x0]
    40ea:	48 0f af ed          	imul   rbp,rbp
    40ee:	48 69 ed 10 32 54 76 	imul   rbp,rbp,0x76543210
    40f5:	48 0f af 6d 00       	imul   rbp,QWORD PTR [rbp+0x0]
    40fa:	48 69 6d 00 10 32 54 	imul   rbp,QWORD PTR [rbp+0x0],0x76543210
    4101:	76 
    4102:	48 f7 fd             	idiv   rbp
    4105:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    4109:	0f 8d 10 32 54 76    	jge    0x7654731f
    410f:	e9 10 32 54 76       	jmp    0x76547324
    4114:	ff e5                	jmp    rbp
    4116:	48 8b ed             	mov    rbp,rbp
    4119:	48 8b 6d 00          	mov    rbp,QWORD PTR [rbp+0x0]
    411d:	48 89 6d 00          	mov    QWORD PTR [rbp+0x0],rbp
    4121:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    4128:	09 00 00 
    412b:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    4132:	00 00 00 
    4135:	e8 10 32 54 76       	call   0x7654734a
    413a:	ff d5                	call   rbp
    413c:	c3                   	ret    
    413d:	48 d1 ed             	shr    rbp,1
    4140:	48 c1 ed 12          	shr    rbp,0x12
    4144:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    4148:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    414d:	48 f7 dd             	neg    rbp
    4150:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    4154:	0f 05                	syscall 
    4156:	55                   	push   rbp
    4157:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    415a:	68 10 32 54 76       	push   0x76543210
    415f:	5d                   	pop    rbp
    4160:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    4163:	48 ff c5             	inc    rbp
    4166:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    416a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    416b:	f3 e2 12             	repz loop 0x4180
    416e:	e1 12                	loope  0x4182
    4170:	e0 12                	loopne 0x4184
    4172:	f2 0f 10 ed          	movsd  xmm5,xmm5
    4176:	f2 0f 10 6d 00       	movsd  xmm5,QWORD PTR [rbp+0x0]
    417b:	f2 48 0f 2d ed       	cvtsd2si rbp,xmm5
    4180:	f2 48 0f 2d 6d 00    	cvtsd2si rbp,QWORD PTR [rbp+0x0]
    4186:	f2 48 0f 2a ed       	cvtsi2sd xmm5,rbp
    418b:	f2 0f 2a 6d 00       	cvtsi2sd xmm5,DWORD PTR [rbp+0x0]
    4190:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4196:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    419d:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    41a4:	76 
    41a5:	48 2b ee             	sub    rbp,rsi
    41a8:	48 29 2e             	sub    QWORD PTR [rsi],rbp
    41ab:	48 2b 35 48 f7 ee 48 	sub    rsi,QWORD PTR [rip+0x48eef748]        # 0x48ef38fa
    41b2:	f7 2e                	imul   DWORD PTR [rsi]
    41b4:	48 0f af ee          	imul   rbp,rsi
    41b8:	48 69 ee 10 32 54 76 	imul   rbp,rsi,0x76543210
    41bf:	48 0f af 2e          	imul   rbp,QWORD PTR [rsi]
    41c3:	48 69 2e 10 32 54 76 	imul   rbp,QWORD PTR [rsi],0x76543210
    41ca:	48 f7 fe             	idiv   rsi
    41cd:	48 f7 3e             	idiv   QWORD PTR [rsi]
    41d0:	0f 8d 10 32 54 76    	jge    0x765473e6
    41d6:	e9 10 32 54 76       	jmp    0x765473eb
    41db:	ff e6                	jmp    rsi
    41dd:	48 8b ee             	mov    rbp,rsi
    41e0:	48 8b 2e             	mov    rbp,QWORD PTR [rsi]
    41e3:	48 89 75 00          	mov    QWORD PTR [rbp+0x0],rsi
    41e7:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    41ee:	09 00 00 
    41f1:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    41f8:	00 00 00 
    41fb:	e8 10 32 54 76       	call   0x76547410
    4200:	ff d6                	call   rsi
    4202:	c3                   	ret    
    4203:	48 d1 ee             	shr    rsi,1
    4206:	48 c1 ee 12          	shr    rsi,0x12
    420a:	48 d1 2e             	shr    QWORD PTR [rsi],1
    420d:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    4211:	48 f7 de             	neg    rsi
    4214:	48 f7 1e             	neg    QWORD PTR [rsi]
    4217:	0f 05                	syscall 
    4219:	56                   	push   rsi
    421a:	ff 36                	push   QWORD PTR [rsi]
    421c:	68 10 32 54 76       	push   0x76543210
    4221:	5e                   	pop    rsi
    4222:	8f 06                	pop    QWORD PTR [rsi]
    4224:	48 ff c6             	inc    rsi
    4227:	48 ff 06             	inc    QWORD PTR [rsi]
    422a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    422b:	f3 e2 12             	repz loop 0x4240
    422e:	e1 12                	loope  0x4242
    4230:	e0 12                	loopne 0x4244
    4232:	f2 0f 10 ee          	movsd  xmm5,xmm6
    4236:	f2 0f 10 2e          	movsd  xmm5,QWORD PTR [rsi]
    423a:	f2 48 0f 2d ee       	cvtsd2si rbp,xmm6
    423f:	f2 48 0f 2d 2e       	cvtsd2si rbp,QWORD PTR [rsi]
    4244:	f2 48 0f 2a ee       	cvtsi2sd xmm5,rsi
    4249:	f2 0f 2a 2e          	cvtsi2sd xmm5,DWORD PTR [rsi]
    424d:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4253:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    425a:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    4261:	76 
    4262:	48 2b ef             	sub    rbp,rdi
    4265:	48 29 2f             	sub    QWORD PTR [rdi],rbp
    4268:	48 2b 3d 48 f7 ef 48 	sub    rdi,QWORD PTR [rip+0x48eff748]        # 0x48f039b7
    426f:	f7 2f                	imul   DWORD PTR [rdi]
    4271:	48 0f af ef          	imul   rbp,rdi
    4275:	48 69 ef 10 32 54 76 	imul   rbp,rdi,0x76543210
    427c:	48 0f af 2f          	imul   rbp,QWORD PTR [rdi]
    4280:	48 69 2f 10 32 54 76 	imul   rbp,QWORD PTR [rdi],0x76543210
    4287:	48 f7 ff             	idiv   rdi
    428a:	48 f7 3f             	idiv   QWORD PTR [rdi]
    428d:	0f 8d 10 32 54 76    	jge    0x765474a3
    4293:	e9 10 32 54 76       	jmp    0x765474a8
    4298:	ff e7                	jmp    rdi
    429a:	48 8b ef             	mov    rbp,rdi
    429d:	48 8b 2f             	mov    rbp,QWORD PTR [rdi]
    42a0:	48 89 7d 00          	mov    QWORD PTR [rbp+0x0],rdi
    42a4:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    42ab:	09 00 00 
    42ae:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    42b5:	00 00 00 
    42b8:	e8 10 32 54 76       	call   0x765474cd
    42bd:	ff d7                	call   rdi
    42bf:	c3                   	ret    
    42c0:	48 d1 ef             	shr    rdi,1
    42c3:	48 c1 ef 12          	shr    rdi,0x12
    42c7:	48 d1 2f             	shr    QWORD PTR [rdi],1
    42ca:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    42ce:	48 f7 df             	neg    rdi
    42d1:	48 f7 1f             	neg    QWORD PTR [rdi]
    42d4:	0f 05                	syscall 
    42d6:	57                   	push   rdi
    42d7:	ff 37                	push   QWORD PTR [rdi]
    42d9:	68 10 32 54 76       	push   0x76543210
    42de:	5f                   	pop    rdi
    42df:	8f 07                	pop    QWORD PTR [rdi]
    42e1:	48 ff c7             	inc    rdi
    42e4:	48 ff 07             	inc    QWORD PTR [rdi]
    42e7:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    42e8:	f3 e2 12             	repz loop 0x42fd
    42eb:	e1 12                	loope  0x42ff
    42ed:	e0 12                	loopne 0x4301
    42ef:	f2 0f 10 ef          	movsd  xmm5,xmm7
    42f3:	f2 0f 10 2f          	movsd  xmm5,QWORD PTR [rdi]
    42f7:	f2 48 0f 2d ef       	cvtsd2si rbp,xmm7
    42fc:	f2 48 0f 2d 2f       	cvtsd2si rbp,QWORD PTR [rdi]
    4301:	f2 48 0f 2a ef       	cvtsi2sd xmm5,rdi
    4306:	f2 0f 2a 2f          	cvtsi2sd xmm5,DWORD PTR [rdi]
    430a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4310:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    4317:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    431e:	76 
    431f:	49 2b e8             	sub    rbp,r8
    4322:	49 29 28             	sub    QWORD PTR [r8],rbp
    4325:	4c 2b 05 49 f7 e8 49 	sub    r8,QWORD PTR [rip+0x49e8f749]        # 0x49e93a75
    432c:	f7 28                	imul   DWORD PTR [rax]
    432e:	49 0f af e8          	imul   rbp,r8
    4332:	49 69 e8 10 32 54 76 	imul   rbp,r8,0x76543210
    4339:	49 0f af 28          	imul   rbp,QWORD PTR [r8]
    433d:	49 69 28 10 32 54 76 	imul   rbp,QWORD PTR [r8],0x76543210
    4344:	49 f7 f8             	idiv   r8
    4347:	49 f7 38             	idiv   QWORD PTR [r8]
    434a:	0f 8d 10 32 54 76    	jge    0x76547560
    4350:	e9 10 32 54 76       	jmp    0x76547565
    4355:	41 ff e0             	jmp    r8
    4358:	49 8b e8             	mov    rbp,r8
    435b:	49 8b 28             	mov    rbp,QWORD PTR [r8]
    435e:	4c 89 45 00          	mov    QWORD PTR [rbp+0x0],r8
    4362:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    4369:	09 00 00 
    436c:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    4373:	00 00 00 
    4376:	e8 10 32 54 76       	call   0x7654758b
    437b:	41 ff d0             	call   r8
    437e:	c3                   	ret    
    437f:	49 d1 e8             	shr    r8,1
    4382:	49 c1 e8 12          	shr    r8,0x12
    4386:	49 d1 28             	shr    QWORD PTR [r8],1
    4389:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    438d:	49 f7 d8             	neg    r8
    4390:	49 f7 18             	neg    QWORD PTR [r8]
    4393:	0f 05                	syscall 
    4395:	41 50                	push   r8
    4397:	41 ff 30             	push   QWORD PTR [r8]
    439a:	68 10 32 54 76       	push   0x76543210
    439f:	41 58                	pop    r8
    43a1:	41 8f 00             	pop    QWORD PTR [r8]
    43a4:	49 ff c0             	inc    r8
    43a7:	49 ff 00             	inc    QWORD PTR [r8]
    43aa:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    43ab:	f3 e2 12             	repz loop 0x43c0
    43ae:	e1 12                	loope  0x43c2
    43b0:	e0 12                	loopne 0x43c4
    43b2:	f2 41 0f 10 e8       	movsd  xmm5,xmm8
    43b7:	f2 41 0f 10 28       	movsd  xmm5,QWORD PTR [r8]
    43bc:	f2 49 0f 2d e8       	cvtsd2si rbp,xmm8
    43c1:	f2 49 0f 2d 28       	cvtsd2si rbp,QWORD PTR [r8]
    43c6:	f2 49 0f 2a e8       	cvtsi2sd xmm5,r8
    43cb:	f2 41 0f 2a 28       	cvtsi2sd xmm5,DWORD PTR [r8]
    43d0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    43d6:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    43dd:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    43e4:	76 
    43e5:	49 2b e9             	sub    rbp,r9
    43e8:	49 29 29             	sub    QWORD PTR [r9],rbp
    43eb:	4c 2b 0d 49 f7 e9 49 	sub    r9,QWORD PTR [rip+0x49e9f749]        # 0x49ea3b3b
    43f2:	f7 29                	imul   DWORD PTR [rcx]
    43f4:	49 0f af e9          	imul   rbp,r9
    43f8:	49 69 e9 10 32 54 76 	imul   rbp,r9,0x76543210
    43ff:	49 0f af 29          	imul   rbp,QWORD PTR [r9]
    4403:	49 69 29 10 32 54 76 	imul   rbp,QWORD PTR [r9],0x76543210
    440a:	49 f7 f9             	idiv   r9
    440d:	49 f7 39             	idiv   QWORD PTR [r9]
    4410:	0f 8d 10 32 54 76    	jge    0x76547626
    4416:	e9 10 32 54 76       	jmp    0x7654762b
    441b:	41 ff e1             	jmp    r9
    441e:	49 8b e9             	mov    rbp,r9
    4421:	49 8b 29             	mov    rbp,QWORD PTR [r9]
    4424:	4c 89 4d 00          	mov    QWORD PTR [rbp+0x0],r9
    4428:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    442f:	09 00 00 
    4432:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    4439:	00 00 00 
    443c:	e8 10 32 54 76       	call   0x76547651
    4441:	41 ff d1             	call   r9
    4444:	c3                   	ret    
    4445:	49 d1 e9             	shr    r9,1
    4448:	49 c1 e9 12          	shr    r9,0x12
    444c:	49 d1 29             	shr    QWORD PTR [r9],1
    444f:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    4453:	49 f7 d9             	neg    r9
    4456:	49 f7 19             	neg    QWORD PTR [r9]
    4459:	0f 05                	syscall 
    445b:	41 51                	push   r9
    445d:	41 ff 31             	push   QWORD PTR [r9]
    4460:	68 10 32 54 76       	push   0x76543210
    4465:	41 59                	pop    r9
    4467:	41 8f 01             	pop    QWORD PTR [r9]
    446a:	49 ff c1             	inc    r9
    446d:	49 ff 01             	inc    QWORD PTR [r9]
    4470:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4471:	f3 e2 12             	repz loop 0x4486
    4474:	e1 12                	loope  0x4488
    4476:	e0 12                	loopne 0x448a
    4478:	f2 41 0f 10 e9       	movsd  xmm5,xmm9
    447d:	f2 41 0f 10 29       	movsd  xmm5,QWORD PTR [r9]
    4482:	f2 49 0f 2d e9       	cvtsd2si rbp,xmm9
    4487:	f2 49 0f 2d 29       	cvtsd2si rbp,QWORD PTR [r9]
    448c:	f2 49 0f 2a e9       	cvtsi2sd xmm5,r9
    4491:	f2 41 0f 2a 29       	cvtsi2sd xmm5,DWORD PTR [r9]
    4496:	48 2d 10 32 54 76    	sub    rax,0x76543210
    449c:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    44a3:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    44aa:	76 
    44ab:	49 2b ea             	sub    rbp,r10
    44ae:	49 29 2a             	sub    QWORD PTR [r10],rbp
    44b1:	4c 2b 15 49 f7 ea 49 	sub    r10,QWORD PTR [rip+0x49eaf749]        # 0x49eb3c01
    44b8:	f7 2a                	imul   DWORD PTR [rdx]
    44ba:	49 0f af ea          	imul   rbp,r10
    44be:	49 69 ea 10 32 54 76 	imul   rbp,r10,0x76543210
    44c5:	49 0f af 2a          	imul   rbp,QWORD PTR [r10]
    44c9:	49 69 2a 10 32 54 76 	imul   rbp,QWORD PTR [r10],0x76543210
    44d0:	49 f7 fa             	idiv   r10
    44d3:	49 f7 3a             	idiv   QWORD PTR [r10]
    44d6:	0f 8d 10 32 54 76    	jge    0x765476ec
    44dc:	e9 10 32 54 76       	jmp    0x765476f1
    44e1:	41 ff e2             	jmp    r10
    44e4:	49 8b ea             	mov    rbp,r10
    44e7:	49 8b 2a             	mov    rbp,QWORD PTR [r10]
    44ea:	4c 89 55 00          	mov    QWORD PTR [rbp+0x0],r10
    44ee:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    44f5:	09 00 00 
    44f8:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    44ff:	00 00 00 
    4502:	e8 10 32 54 76       	call   0x76547717
    4507:	41 ff d2             	call   r10
    450a:	c3                   	ret    
    450b:	49 d1 ea             	shr    r10,1
    450e:	49 c1 ea 12          	shr    r10,0x12
    4512:	49 d1 2a             	shr    QWORD PTR [r10],1
    4515:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    4519:	49 f7 da             	neg    r10
    451c:	49 f7 1a             	neg    QWORD PTR [r10]
    451f:	0f 05                	syscall 
    4521:	41 52                	push   r10
    4523:	41 ff 32             	push   QWORD PTR [r10]
    4526:	68 10 32 54 76       	push   0x76543210
    452b:	41 5a                	pop    r10
    452d:	41 8f 02             	pop    QWORD PTR [r10]
    4530:	49 ff c2             	inc    r10
    4533:	49 ff 02             	inc    QWORD PTR [r10]
    4536:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4537:	f3 e2 12             	repz loop 0x454c
    453a:	e1 12                	loope  0x454e
    453c:	e0 12                	loopne 0x4550
    453e:	f2 41 0f 10 ea       	movsd  xmm5,xmm10
    4543:	f2 41 0f 10 2a       	movsd  xmm5,QWORD PTR [r10]
    4548:	f2 49 0f 2d ea       	cvtsd2si rbp,xmm10
    454d:	f2 49 0f 2d 2a       	cvtsd2si rbp,QWORD PTR [r10]
    4552:	f2 49 0f 2a ea       	cvtsi2sd xmm5,r10
    4557:	f2 41 0f 2a 2a       	cvtsi2sd xmm5,DWORD PTR [r10]
    455c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4562:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    4569:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    4570:	76 
    4571:	49 2b eb             	sub    rbp,r11
    4574:	49 29 2b             	sub    QWORD PTR [r11],rbp
    4577:	4c 2b 1d 49 f7 eb 49 	sub    r11,QWORD PTR [rip+0x49ebf749]        # 0x49ec3cc7
    457e:	f7 2b                	imul   DWORD PTR [rbx]
    4580:	49 0f af eb          	imul   rbp,r11
    4584:	49 69 eb 10 32 54 76 	imul   rbp,r11,0x76543210
    458b:	49 0f af 2b          	imul   rbp,QWORD PTR [r11]
    458f:	49 69 2b 10 32 54 76 	imul   rbp,QWORD PTR [r11],0x76543210
    4596:	49 f7 fb             	idiv   r11
    4599:	49 f7 3b             	idiv   QWORD PTR [r11]
    459c:	0f 8d 10 32 54 76    	jge    0x765477b2
    45a2:	e9 10 32 54 76       	jmp    0x765477b7
    45a7:	41 ff e3             	jmp    r11
    45aa:	49 8b eb             	mov    rbp,r11
    45ad:	49 8b 2b             	mov    rbp,QWORD PTR [r11]
    45b0:	4c 89 5d 00          	mov    QWORD PTR [rbp+0x0],r11
    45b4:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    45bb:	09 00 00 
    45be:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    45c5:	00 00 00 
    45c8:	e8 10 32 54 76       	call   0x765477dd
    45cd:	41 ff d3             	call   r11
    45d0:	c3                   	ret    
    45d1:	49 d1 eb             	shr    r11,1
    45d4:	49 c1 eb 12          	shr    r11,0x12
    45d8:	49 d1 2b             	shr    QWORD PTR [r11],1
    45db:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    45df:	49 f7 db             	neg    r11
    45e2:	49 f7 1b             	neg    QWORD PTR [r11]
    45e5:	0f 05                	syscall 
    45e7:	41 53                	push   r11
    45e9:	41 ff 33             	push   QWORD PTR [r11]
    45ec:	68 10 32 54 76       	push   0x76543210
    45f1:	41 5b                	pop    r11
    45f3:	41 8f 03             	pop    QWORD PTR [r11]
    45f6:	49 ff c3             	inc    r11
    45f9:	49 ff 03             	inc    QWORD PTR [r11]
    45fc:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    45fd:	f3 e2 12             	repz loop 0x4612
    4600:	e1 12                	loope  0x4614
    4602:	e0 12                	loopne 0x4616
    4604:	f2 41 0f 10 eb       	movsd  xmm5,xmm11
    4609:	f2 41 0f 10 2b       	movsd  xmm5,QWORD PTR [r11]
    460e:	f2 49 0f 2d eb       	cvtsd2si rbp,xmm11
    4613:	f2 49 0f 2d 2b       	cvtsd2si rbp,QWORD PTR [r11]
    4618:	f2 49 0f 2a eb       	cvtsi2sd xmm5,r11
    461d:	f2 41 0f 2a 2b       	cvtsi2sd xmm5,DWORD PTR [r11]
    4622:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4628:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    462f:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    4636:	76 
    4637:	49 2b ec             	sub    rbp,r12
    463a:	49 29 2c 24          	sub    QWORD PTR [r12],rbp
    463e:	4c 2b 25 49 f7 ec 49 	sub    r12,QWORD PTR [rip+0x49ecf749]        # 0x49ed3d8e
    4645:	f7 2c 24             	imul   DWORD PTR [rsp]
    4648:	49 0f af ec          	imul   rbp,r12
    464c:	49 69 ec 10 32 54 76 	imul   rbp,r12,0x76543210
    4653:	49 0f af 2c 24       	imul   rbp,QWORD PTR [r12]
    4658:	49 69 2c 24 10 32 54 	imul   rbp,QWORD PTR [r12],0x76543210
    465f:	76 
    4660:	49 f7 fc             	idiv   r12
    4663:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    4667:	0f 8d 10 32 54 76    	jge    0x7654787d
    466d:	e9 10 32 54 76       	jmp    0x76547882
    4672:	41 ff e4             	jmp    r12
    4675:	49 8b ec             	mov    rbp,r12
    4678:	49 8b 2c 24          	mov    rbp,QWORD PTR [r12]
    467c:	4c 89 65 00          	mov    QWORD PTR [rbp+0x0],r12
    4680:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    4687:	09 00 00 
    468a:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    4691:	00 00 00 
    4694:	e8 10 32 54 76       	call   0x765478a9
    4699:	41 ff d4             	call   r12
    469c:	c3                   	ret    
    469d:	49 d1 ec             	shr    r12,1
    46a0:	49 c1 ec 12          	shr    r12,0x12
    46a4:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    46a8:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    46ad:	49 f7 dc             	neg    r12
    46b0:	49 f7 1c 24          	neg    QWORD PTR [r12]
    46b4:	0f 05                	syscall 
    46b6:	41 54                	push   r12
    46b8:	41 ff 34 24          	push   QWORD PTR [r12]
    46bc:	68 10 32 54 76       	push   0x76543210
    46c1:	41 5c                	pop    r12
    46c3:	41 8f 04 24          	pop    QWORD PTR [r12]
    46c7:	49 ff c4             	inc    r12
    46ca:	49 ff 04 24          	inc    QWORD PTR [r12]
    46ce:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    46cf:	f3 e2 12             	repz loop 0x46e4
    46d2:	e1 12                	loope  0x46e6
    46d4:	e0 12                	loopne 0x46e8
    46d6:	f2 41 0f 10 ec       	movsd  xmm5,xmm12
    46db:	f2 41 0f 10 2c 24    	movsd  xmm5,QWORD PTR [r12]
    46e1:	f2 49 0f 2d ec       	cvtsd2si rbp,xmm12
    46e6:	f2 49 0f 2d 2c 24    	cvtsd2si rbp,QWORD PTR [r12]
    46ec:	f2 49 0f 2a ec       	cvtsi2sd xmm5,r12
    46f1:	f2 41 0f 2a 2c 24    	cvtsi2sd xmm5,DWORD PTR [r12]
    46f7:	48 2d 10 32 54 76    	sub    rax,0x76543210
    46fd:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    4704:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    470b:	76 
    470c:	49 2b ed             	sub    rbp,r13
    470f:	49 29 6d 00          	sub    QWORD PTR [r13+0x0],rbp
    4713:	4c 2b 2d 49 f7 ed 49 	sub    r13,QWORD PTR [rip+0x49edf749]        # 0x49ee3e63
    471a:	f7 6d 00             	imul   DWORD PTR [rbp+0x0]
    471d:	49 0f af ed          	imul   rbp,r13
    4721:	49 69 ed 10 32 54 76 	imul   rbp,r13,0x76543210
    4728:	49 0f af 6d 00       	imul   rbp,QWORD PTR [r13+0x0]
    472d:	49 69 6d 00 10 32 54 	imul   rbp,QWORD PTR [r13+0x0],0x76543210
    4734:	76 
    4735:	49 f7 fd             	idiv   r13
    4738:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    473c:	0f 8d 10 32 54 76    	jge    0x76547952
    4742:	e9 10 32 54 76       	jmp    0x76547957
    4747:	41 ff e5             	jmp    r13
    474a:	49 8b ed             	mov    rbp,r13
    474d:	49 8b 6d 00          	mov    rbp,QWORD PTR [r13+0x0]
    4751:	4c 89 6d 00          	mov    QWORD PTR [rbp+0x0],r13
    4755:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    475c:	09 00 00 
    475f:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    4766:	00 00 00 
    4769:	e8 10 32 54 76       	call   0x7654797e
    476e:	41 ff d5             	call   r13
    4771:	c3                   	ret    
    4772:	49 d1 ed             	shr    r13,1
    4775:	49 c1 ed 12          	shr    r13,0x12
    4779:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    477d:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    4782:	49 f7 dd             	neg    r13
    4785:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    4789:	0f 05                	syscall 
    478b:	41 55                	push   r13
    478d:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    4791:	68 10 32 54 76       	push   0x76543210
    4796:	41 5d                	pop    r13
    4798:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    479c:	49 ff c5             	inc    r13
    479f:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    47a3:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    47a4:	f3 e2 12             	repz loop 0x47b9
    47a7:	e1 12                	loope  0x47bb
    47a9:	e0 12                	loopne 0x47bd
    47ab:	f2 41 0f 10 ed       	movsd  xmm5,xmm13
    47b0:	f2 41 0f 10 6d 00    	movsd  xmm5,QWORD PTR [r13+0x0]
    47b6:	f2 49 0f 2d ed       	cvtsd2si rbp,xmm13
    47bb:	f2 49 0f 2d 6d 00    	cvtsd2si rbp,QWORD PTR [r13+0x0]
    47c1:	f2 49 0f 2a ed       	cvtsi2sd xmm5,r13
    47c6:	f2 41 0f 2a 6d 00    	cvtsi2sd xmm5,DWORD PTR [r13+0x0]
    47cc:	48 2d 10 32 54 76    	sub    rax,0x76543210
    47d2:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    47d9:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    47e0:	76 
    47e1:	49 2b ee             	sub    rbp,r14
    47e4:	49 29 2e             	sub    QWORD PTR [r14],rbp
    47e7:	4c 2b 35 49 f7 ee 49 	sub    r14,QWORD PTR [rip+0x49eef749]        # 0x49ef3f37
    47ee:	f7 2e                	imul   DWORD PTR [rsi]
    47f0:	49 0f af ee          	imul   rbp,r14
    47f4:	49 69 ee 10 32 54 76 	imul   rbp,r14,0x76543210
    47fb:	49 0f af 2e          	imul   rbp,QWORD PTR [r14]
    47ff:	49 69 2e 10 32 54 76 	imul   rbp,QWORD PTR [r14],0x76543210
    4806:	49 f7 fe             	idiv   r14
    4809:	49 f7 3e             	idiv   QWORD PTR [r14]
    480c:	0f 8d 10 32 54 76    	jge    0x76547a22
    4812:	e9 10 32 54 76       	jmp    0x76547a27
    4817:	41 ff e6             	jmp    r14
    481a:	49 8b ee             	mov    rbp,r14
    481d:	49 8b 2e             	mov    rbp,QWORD PTR [r14]
    4820:	4c 89 75 00          	mov    QWORD PTR [rbp+0x0],r14
    4824:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    482b:	09 00 00 
    482e:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    4835:	00 00 00 
    4838:	e8 10 32 54 76       	call   0x76547a4d
    483d:	41 ff d6             	call   r14
    4840:	c3                   	ret    
    4841:	49 d1 ee             	shr    r14,1
    4844:	49 c1 ee 12          	shr    r14,0x12
    4848:	49 d1 2e             	shr    QWORD PTR [r14],1
    484b:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    484f:	49 f7 de             	neg    r14
    4852:	49 f7 1e             	neg    QWORD PTR [r14]
    4855:	0f 05                	syscall 
    4857:	41 56                	push   r14
    4859:	41 ff 36             	push   QWORD PTR [r14]
    485c:	68 10 32 54 76       	push   0x76543210
    4861:	41 5e                	pop    r14
    4863:	41 8f 06             	pop    QWORD PTR [r14]
    4866:	49 ff c6             	inc    r14
    4869:	49 ff 06             	inc    QWORD PTR [r14]
    486c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    486d:	f3 e2 12             	repz loop 0x4882
    4870:	e1 12                	loope  0x4884
    4872:	e0 12                	loopne 0x4886
    4874:	f2 41 0f 10 ee       	movsd  xmm5,xmm14
    4879:	f2 41 0f 10 2e       	movsd  xmm5,QWORD PTR [r14]
    487e:	f2 49 0f 2d ee       	cvtsd2si rbp,xmm14
    4883:	f2 49 0f 2d 2e       	cvtsd2si rbp,QWORD PTR [r14]
    4888:	f2 49 0f 2a ee       	cvtsi2sd xmm5,r14
    488d:	f2 41 0f 2a 2e       	cvtsi2sd xmm5,DWORD PTR [r14]
    4892:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4898:	48 81 ed 10 32 54 76 	sub    rbp,0x76543210
    489f:	48 81 6d 00 10 32 54 	sub    QWORD PTR [rbp+0x0],0x76543210
    48a6:	76 
    48a7:	49 2b ef             	sub    rbp,r15
    48aa:	49 29 2f             	sub    QWORD PTR [r15],rbp
    48ad:	4c 2b 3d 49 f7 ef 49 	sub    r15,QWORD PTR [rip+0x49eff749]        # 0x49f03ffd
    48b4:	f7 2f                	imul   DWORD PTR [rdi]
    48b6:	49 0f af ef          	imul   rbp,r15
    48ba:	49 69 ef 10 32 54 76 	imul   rbp,r15,0x76543210
    48c1:	49 0f af 2f          	imul   rbp,QWORD PTR [r15]
    48c5:	49 69 2f 10 32 54 76 	imul   rbp,QWORD PTR [r15],0x76543210
    48cc:	49 f7 ff             	idiv   r15
    48cf:	49 f7 3f             	idiv   QWORD PTR [r15]
    48d2:	0f 8d 10 32 54 76    	jge    0x76547ae8
    48d8:	e9 10 32 54 76       	jmp    0x76547aed
    48dd:	41 ff e7             	jmp    r15
    48e0:	49 8b ef             	mov    rbp,r15
    48e3:	49 8b 2f             	mov    rbp,QWORD PTR [r15]
    48e6:	4c 89 7d 00          	mov    QWORD PTR [rbp+0x0],r15
    48ea:	48 bd 09 21 43 65 87 	movabs rbp,0x98765432109
    48f1:	09 00 00 
    48f4:	48 bd 10 32 54 76 00 	movabs rbp,0x76543210
    48fb:	00 00 00 
    48fe:	e8 10 32 54 76       	call   0x76547b13
    4903:	41 ff d7             	call   r15
    4906:	c3                   	ret    
    4907:	49 d1 ef             	shr    r15,1
    490a:	49 c1 ef 12          	shr    r15,0x12
    490e:	49 d1 2f             	shr    QWORD PTR [r15],1
    4911:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    4915:	49 f7 df             	neg    r15
    4918:	49 f7 1f             	neg    QWORD PTR [r15]
    491b:	0f 05                	syscall 
    491d:	41 57                	push   r15
    491f:	41 ff 37             	push   QWORD PTR [r15]
    4922:	68 10 32 54 76       	push   0x76543210
    4927:	41 5f                	pop    r15
    4929:	41 8f 07             	pop    QWORD PTR [r15]
    492c:	49 ff c7             	inc    r15
    492f:	49 ff 07             	inc    QWORD PTR [r15]
    4932:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4933:	f3 e2 12             	repz loop 0x4948
    4936:	e1 12                	loope  0x494a
    4938:	e0 12                	loopne 0x494c
    493a:	f2 41 0f 10 ef       	movsd  xmm5,xmm15
    493f:	f2 41 0f 10 2f       	movsd  xmm5,QWORD PTR [r15]
    4944:	f2 49 0f 2d ef       	cvtsd2si rbp,xmm15
    4949:	f2 49 0f 2d 2f       	cvtsd2si rbp,QWORD PTR [r15]
    494e:	f2 49 0f 2a ef       	cvtsi2sd xmm5,r15
    4953:	f2 41 0f 2a 2f       	cvtsi2sd xmm5,DWORD PTR [r15]
    4958:	48 2d 10 32 54 76    	sub    rax,0x76543210
    495e:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    4965:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    496c:	48 2b f0             	sub    rsi,rax
    496f:	48 29 30             	sub    QWORD PTR [rax],rsi
    4972:	48 2b 06             	sub    rax,QWORD PTR [rsi]
    4975:	48 f7 e8             	imul   rax
    4978:	48 f7 28             	imul   QWORD PTR [rax]
    497b:	48 0f af f0          	imul   rsi,rax
    497f:	48 69 f0 10 32 54 76 	imul   rsi,rax,0x76543210
    4986:	48 0f af 30          	imul   rsi,QWORD PTR [rax]
    498a:	48 69 30 10 32 54 76 	imul   rsi,QWORD PTR [rax],0x76543210
    4991:	48 f7 f8             	idiv   rax
    4994:	48 f7 38             	idiv   QWORD PTR [rax]
    4997:	0f 8d 10 32 54 76    	jge    0x76547bad
    499d:	e9 10 32 54 76       	jmp    0x76547bb2
    49a2:	ff e0                	jmp    rax
    49a4:	48 8b f0             	mov    rsi,rax
    49a7:	48 8b 30             	mov    rsi,QWORD PTR [rax]
    49aa:	48 89 06             	mov    QWORD PTR [rsi],rax
    49ad:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    49b4:	09 00 00 
    49b7:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    49be:	00 00 00 
    49c1:	e8 10 32 54 76       	call   0x76547bd6
    49c6:	ff d0                	call   rax
    49c8:	c3                   	ret    
    49c9:	48 d1 e8             	shr    rax,1
    49cc:	48 c1 e8 12          	shr    rax,0x12
    49d0:	48 d1 28             	shr    QWORD PTR [rax],1
    49d3:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    49d7:	48 f7 d8             	neg    rax
    49da:	48 f7 18             	neg    QWORD PTR [rax]
    49dd:	0f 05                	syscall 
    49df:	50                   	push   rax
    49e0:	ff 30                	push   QWORD PTR [rax]
    49e2:	68 10 32 54 76       	push   0x76543210
    49e7:	58                   	pop    rax
    49e8:	8f 00                	pop    QWORD PTR [rax]
    49ea:	48 ff c0             	inc    rax
    49ed:	48 ff 00             	inc    QWORD PTR [rax]
    49f0:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    49f1:	f3 e2 12             	repz loop 0x4a06
    49f4:	e1 12                	loope  0x4a08
    49f6:	e0 12                	loopne 0x4a0a
    49f8:	f2 0f 10 f0          	movsd  xmm6,xmm0
    49fc:	f2 0f 10 30          	movsd  xmm6,QWORD PTR [rax]
    4a00:	f2 48 0f 2d f0       	cvtsd2si rsi,xmm0
    4a05:	f2 48 0f 2d 30       	cvtsd2si rsi,QWORD PTR [rax]
    4a0a:	f2 48 0f 2a f0       	cvtsi2sd xmm6,rax
    4a0f:	f2 0f 2a 30          	cvtsi2sd xmm6,DWORD PTR [rax]
    4a13:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4a19:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    4a20:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    4a27:	48 2b f1             	sub    rsi,rcx
    4a2a:	48 29 31             	sub    QWORD PTR [rcx],rsi
    4a2d:	48 2b 0e             	sub    rcx,QWORD PTR [rsi]
    4a30:	48 f7 e9             	imul   rcx
    4a33:	48 f7 29             	imul   QWORD PTR [rcx]
    4a36:	48 0f af f1          	imul   rsi,rcx
    4a3a:	48 69 f1 10 32 54 76 	imul   rsi,rcx,0x76543210
    4a41:	48 0f af 31          	imul   rsi,QWORD PTR [rcx]
    4a45:	48 69 31 10 32 54 76 	imul   rsi,QWORD PTR [rcx],0x76543210
    4a4c:	48 f7 f9             	idiv   rcx
    4a4f:	48 f7 39             	idiv   QWORD PTR [rcx]
    4a52:	0f 8d 10 32 54 76    	jge    0x76547c68
    4a58:	e9 10 32 54 76       	jmp    0x76547c6d
    4a5d:	ff e1                	jmp    rcx
    4a5f:	48 8b f1             	mov    rsi,rcx
    4a62:	48 8b 31             	mov    rsi,QWORD PTR [rcx]
    4a65:	48 89 0e             	mov    QWORD PTR [rsi],rcx
    4a68:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    4a6f:	09 00 00 
    4a72:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    4a79:	00 00 00 
    4a7c:	e8 10 32 54 76       	call   0x76547c91
    4a81:	ff d1                	call   rcx
    4a83:	c3                   	ret    
    4a84:	48 d1 e9             	shr    rcx,1
    4a87:	48 c1 e9 12          	shr    rcx,0x12
    4a8b:	48 d1 29             	shr    QWORD PTR [rcx],1
    4a8e:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    4a92:	48 f7 d9             	neg    rcx
    4a95:	48 f7 19             	neg    QWORD PTR [rcx]
    4a98:	0f 05                	syscall 
    4a9a:	51                   	push   rcx
    4a9b:	ff 31                	push   QWORD PTR [rcx]
    4a9d:	68 10 32 54 76       	push   0x76543210
    4aa2:	59                   	pop    rcx
    4aa3:	8f 01                	pop    QWORD PTR [rcx]
    4aa5:	48 ff c1             	inc    rcx
    4aa8:	48 ff 01             	inc    QWORD PTR [rcx]
    4aab:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4aac:	f3 e2 12             	repz loop 0x4ac1
    4aaf:	e1 12                	loope  0x4ac3
    4ab1:	e0 12                	loopne 0x4ac5
    4ab3:	f2 0f 10 f1          	movsd  xmm6,xmm1
    4ab7:	f2 0f 10 31          	movsd  xmm6,QWORD PTR [rcx]
    4abb:	f2 48 0f 2d f1       	cvtsd2si rsi,xmm1
    4ac0:	f2 48 0f 2d 31       	cvtsd2si rsi,QWORD PTR [rcx]
    4ac5:	f2 48 0f 2a f1       	cvtsi2sd xmm6,rcx
    4aca:	f2 0f 2a 31          	cvtsi2sd xmm6,DWORD PTR [rcx]
    4ace:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4ad4:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    4adb:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    4ae2:	48 2b f2             	sub    rsi,rdx
    4ae5:	48 29 32             	sub    QWORD PTR [rdx],rsi
    4ae8:	48 2b 16             	sub    rdx,QWORD PTR [rsi]
    4aeb:	48 f7 ea             	imul   rdx
    4aee:	48 f7 2a             	imul   QWORD PTR [rdx]
    4af1:	48 0f af f2          	imul   rsi,rdx
    4af5:	48 69 f2 10 32 54 76 	imul   rsi,rdx,0x76543210
    4afc:	48 0f af 32          	imul   rsi,QWORD PTR [rdx]
    4b00:	48 69 32 10 32 54 76 	imul   rsi,QWORD PTR [rdx],0x76543210
    4b07:	48 f7 fa             	idiv   rdx
    4b0a:	48 f7 3a             	idiv   QWORD PTR [rdx]
    4b0d:	0f 8d 10 32 54 76    	jge    0x76547d23
    4b13:	e9 10 32 54 76       	jmp    0x76547d28
    4b18:	ff e2                	jmp    rdx
    4b1a:	48 8b f2             	mov    rsi,rdx
    4b1d:	48 8b 32             	mov    rsi,QWORD PTR [rdx]
    4b20:	48 89 16             	mov    QWORD PTR [rsi],rdx
    4b23:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    4b2a:	09 00 00 
    4b2d:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    4b34:	00 00 00 
    4b37:	e8 10 32 54 76       	call   0x76547d4c
    4b3c:	ff d2                	call   rdx
    4b3e:	c3                   	ret    
    4b3f:	48 d1 ea             	shr    rdx,1
    4b42:	48 c1 ea 12          	shr    rdx,0x12
    4b46:	48 d1 2a             	shr    QWORD PTR [rdx],1
    4b49:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    4b4d:	48 f7 da             	neg    rdx
    4b50:	48 f7 1a             	neg    QWORD PTR [rdx]
    4b53:	0f 05                	syscall 
    4b55:	52                   	push   rdx
    4b56:	ff 32                	push   QWORD PTR [rdx]
    4b58:	68 10 32 54 76       	push   0x76543210
    4b5d:	5a                   	pop    rdx
    4b5e:	8f 02                	pop    QWORD PTR [rdx]
    4b60:	48 ff c2             	inc    rdx
    4b63:	48 ff 02             	inc    QWORD PTR [rdx]
    4b66:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4b67:	f3 e2 12             	repz loop 0x4b7c
    4b6a:	e1 12                	loope  0x4b7e
    4b6c:	e0 12                	loopne 0x4b80
    4b6e:	f2 0f 10 f2          	movsd  xmm6,xmm2
    4b72:	f2 0f 10 32          	movsd  xmm6,QWORD PTR [rdx]
    4b76:	f2 48 0f 2d f2       	cvtsd2si rsi,xmm2
    4b7b:	f2 48 0f 2d 32       	cvtsd2si rsi,QWORD PTR [rdx]
    4b80:	f2 48 0f 2a f2       	cvtsi2sd xmm6,rdx
    4b85:	f2 0f 2a 32          	cvtsi2sd xmm6,DWORD PTR [rdx]
    4b89:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4b8f:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    4b96:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    4b9d:	48 2b f3             	sub    rsi,rbx
    4ba0:	48 29 33             	sub    QWORD PTR [rbx],rsi
    4ba3:	48 2b 1e             	sub    rbx,QWORD PTR [rsi]
    4ba6:	48 f7 eb             	imul   rbx
    4ba9:	48 f7 2b             	imul   QWORD PTR [rbx]
    4bac:	48 0f af f3          	imul   rsi,rbx
    4bb0:	48 69 f3 10 32 54 76 	imul   rsi,rbx,0x76543210
    4bb7:	48 0f af 33          	imul   rsi,QWORD PTR [rbx]
    4bbb:	48 69 33 10 32 54 76 	imul   rsi,QWORD PTR [rbx],0x76543210
    4bc2:	48 f7 fb             	idiv   rbx
    4bc5:	48 f7 3b             	idiv   QWORD PTR [rbx]
    4bc8:	0f 8d 10 32 54 76    	jge    0x76547dde
    4bce:	e9 10 32 54 76       	jmp    0x76547de3
    4bd3:	ff e3                	jmp    rbx
    4bd5:	48 8b f3             	mov    rsi,rbx
    4bd8:	48 8b 33             	mov    rsi,QWORD PTR [rbx]
    4bdb:	48 89 1e             	mov    QWORD PTR [rsi],rbx
    4bde:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    4be5:	09 00 00 
    4be8:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    4bef:	00 00 00 
    4bf2:	e8 10 32 54 76       	call   0x76547e07
    4bf7:	ff d3                	call   rbx
    4bf9:	c3                   	ret    
    4bfa:	48 d1 eb             	shr    rbx,1
    4bfd:	48 c1 eb 12          	shr    rbx,0x12
    4c01:	48 d1 2b             	shr    QWORD PTR [rbx],1
    4c04:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    4c08:	48 f7 db             	neg    rbx
    4c0b:	48 f7 1b             	neg    QWORD PTR [rbx]
    4c0e:	0f 05                	syscall 
    4c10:	53                   	push   rbx
    4c11:	ff 33                	push   QWORD PTR [rbx]
    4c13:	68 10 32 54 76       	push   0x76543210
    4c18:	5b                   	pop    rbx
    4c19:	8f 03                	pop    QWORD PTR [rbx]
    4c1b:	48 ff c3             	inc    rbx
    4c1e:	48 ff 03             	inc    QWORD PTR [rbx]
    4c21:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4c22:	f3 e2 12             	repz loop 0x4c37
    4c25:	e1 12                	loope  0x4c39
    4c27:	e0 12                	loopne 0x4c3b
    4c29:	f2 0f 10 f3          	movsd  xmm6,xmm3
    4c2d:	f2 0f 10 33          	movsd  xmm6,QWORD PTR [rbx]
    4c31:	f2 48 0f 2d f3       	cvtsd2si rsi,xmm3
    4c36:	f2 48 0f 2d 33       	cvtsd2si rsi,QWORD PTR [rbx]
    4c3b:	f2 48 0f 2a f3       	cvtsi2sd xmm6,rbx
    4c40:	f2 0f 2a 33          	cvtsi2sd xmm6,DWORD PTR [rbx]
    4c44:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4c4a:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    4c51:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    4c58:	48 2b f4             	sub    rsi,rsp
    4c5b:	48 29 34 24          	sub    QWORD PTR [rsp],rsi
    4c5f:	48 2b 26             	sub    rsp,QWORD PTR [rsi]
    4c62:	48 f7 ec             	imul   rsp
    4c65:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    4c69:	48 0f af f4          	imul   rsi,rsp
    4c6d:	48 69 f4 10 32 54 76 	imul   rsi,rsp,0x76543210
    4c74:	48 0f af 34 24       	imul   rsi,QWORD PTR [rsp]
    4c79:	48 69 34 24 10 32 54 	imul   rsi,QWORD PTR [rsp],0x76543210
    4c80:	76 
    4c81:	48 f7 fc             	idiv   rsp
    4c84:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    4c88:	0f 8d 10 32 54 76    	jge    0x76547e9e
    4c8e:	e9 10 32 54 76       	jmp    0x76547ea3
    4c93:	ff e4                	jmp    rsp
    4c95:	48 8b f4             	mov    rsi,rsp
    4c98:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
    4c9c:	48 89 26             	mov    QWORD PTR [rsi],rsp
    4c9f:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    4ca6:	09 00 00 
    4ca9:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    4cb0:	00 00 00 
    4cb3:	e8 10 32 54 76       	call   0x76547ec8
    4cb8:	ff d4                	call   rsp
    4cba:	c3                   	ret    
    4cbb:	48 d1 ec             	shr    rsp,1
    4cbe:	48 c1 ec 12          	shr    rsp,0x12
    4cc2:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    4cc6:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    4ccb:	48 f7 dc             	neg    rsp
    4cce:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    4cd2:	0f 05                	syscall 
    4cd4:	54                   	push   rsp
    4cd5:	ff 34 24             	push   QWORD PTR [rsp]
    4cd8:	68 10 32 54 76       	push   0x76543210
    4cdd:	5c                   	pop    rsp
    4cde:	8f 04 24             	pop    QWORD PTR [rsp]
    4ce1:	48 ff c4             	inc    rsp
    4ce4:	48 ff 04 24          	inc    QWORD PTR [rsp]
    4ce8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4ce9:	f3 e2 12             	repz loop 0x4cfe
    4cec:	e1 12                	loope  0x4d00
    4cee:	e0 12                	loopne 0x4d02
    4cf0:	f2 0f 10 f4          	movsd  xmm6,xmm4
    4cf4:	f2 0f 10 34 24       	movsd  xmm6,QWORD PTR [rsp]
    4cf9:	f2 48 0f 2d f4       	cvtsd2si rsi,xmm4
    4cfe:	f2 48 0f 2d 34 24    	cvtsd2si rsi,QWORD PTR [rsp]
    4d04:	f2 48 0f 2a f4       	cvtsi2sd xmm6,rsp
    4d09:	f2 0f 2a 34 24       	cvtsi2sd xmm6,DWORD PTR [rsp]
    4d0e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4d14:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    4d1b:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    4d22:	48 2b f5             	sub    rsi,rbp
    4d25:	48 29 75 00          	sub    QWORD PTR [rbp+0x0],rsi
    4d29:	48 2b 2e             	sub    rbp,QWORD PTR [rsi]
    4d2c:	48 f7 ed             	imul   rbp
    4d2f:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    4d33:	48 0f af f5          	imul   rsi,rbp
    4d37:	48 69 f5 10 32 54 76 	imul   rsi,rbp,0x76543210
    4d3e:	48 0f af 75 00       	imul   rsi,QWORD PTR [rbp+0x0]
    4d43:	48 69 75 00 10 32 54 	imul   rsi,QWORD PTR [rbp+0x0],0x76543210
    4d4a:	76 
    4d4b:	48 f7 fd             	idiv   rbp
    4d4e:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    4d52:	0f 8d 10 32 54 76    	jge    0x76547f68
    4d58:	e9 10 32 54 76       	jmp    0x76547f6d
    4d5d:	ff e5                	jmp    rbp
    4d5f:	48 8b f5             	mov    rsi,rbp
    4d62:	48 8b 75 00          	mov    rsi,QWORD PTR [rbp+0x0]
    4d66:	48 89 2e             	mov    QWORD PTR [rsi],rbp
    4d69:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    4d70:	09 00 00 
    4d73:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    4d7a:	00 00 00 
    4d7d:	e8 10 32 54 76       	call   0x76547f92
    4d82:	ff d5                	call   rbp
    4d84:	c3                   	ret    
    4d85:	48 d1 ed             	shr    rbp,1
    4d88:	48 c1 ed 12          	shr    rbp,0x12
    4d8c:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    4d90:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    4d95:	48 f7 dd             	neg    rbp
    4d98:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    4d9c:	0f 05                	syscall 
    4d9e:	55                   	push   rbp
    4d9f:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    4da2:	68 10 32 54 76       	push   0x76543210
    4da7:	5d                   	pop    rbp
    4da8:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    4dab:	48 ff c5             	inc    rbp
    4dae:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    4db2:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4db3:	f3 e2 12             	repz loop 0x4dc8
    4db6:	e1 12                	loope  0x4dca
    4db8:	e0 12                	loopne 0x4dcc
    4dba:	f2 0f 10 f5          	movsd  xmm6,xmm5
    4dbe:	f2 0f 10 75 00       	movsd  xmm6,QWORD PTR [rbp+0x0]
    4dc3:	f2 48 0f 2d f5       	cvtsd2si rsi,xmm5
    4dc8:	f2 48 0f 2d 75 00    	cvtsd2si rsi,QWORD PTR [rbp+0x0]
    4dce:	f2 48 0f 2a f5       	cvtsi2sd xmm6,rbp
    4dd3:	f2 0f 2a 75 00       	cvtsi2sd xmm6,DWORD PTR [rbp+0x0]
    4dd8:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4dde:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    4de5:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    4dec:	48 2b f6             	sub    rsi,rsi
    4def:	48 29 36             	sub    QWORD PTR [rsi],rsi
    4df2:	48 2b 36             	sub    rsi,QWORD PTR [rsi]
    4df5:	48 f7 ee             	imul   rsi
    4df8:	48 f7 2e             	imul   QWORD PTR [rsi]
    4dfb:	48 0f af f6          	imul   rsi,rsi
    4dff:	48 69 f6 10 32 54 76 	imul   rsi,rsi,0x76543210
    4e06:	48 0f af 36          	imul   rsi,QWORD PTR [rsi]
    4e0a:	48 69 36 10 32 54 76 	imul   rsi,QWORD PTR [rsi],0x76543210
    4e11:	48 f7 fe             	idiv   rsi
    4e14:	48 f7 3e             	idiv   QWORD PTR [rsi]
    4e17:	0f 8d 10 32 54 76    	jge    0x7654802d
    4e1d:	e9 10 32 54 76       	jmp    0x76548032
    4e22:	ff e6                	jmp    rsi
    4e24:	48 8b f6             	mov    rsi,rsi
    4e27:	48 8b 36             	mov    rsi,QWORD PTR [rsi]
    4e2a:	48 89 36             	mov    QWORD PTR [rsi],rsi
    4e2d:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    4e34:	09 00 00 
    4e37:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    4e3e:	00 00 00 
    4e41:	e8 10 32 54 76       	call   0x76548056
    4e46:	ff d6                	call   rsi
    4e48:	c3                   	ret    
    4e49:	48 d1 ee             	shr    rsi,1
    4e4c:	48 c1 ee 12          	shr    rsi,0x12
    4e50:	48 d1 2e             	shr    QWORD PTR [rsi],1
    4e53:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    4e57:	48 f7 de             	neg    rsi
    4e5a:	48 f7 1e             	neg    QWORD PTR [rsi]
    4e5d:	0f 05                	syscall 
    4e5f:	56                   	push   rsi
    4e60:	ff 36                	push   QWORD PTR [rsi]
    4e62:	68 10 32 54 76       	push   0x76543210
    4e67:	5e                   	pop    rsi
    4e68:	8f 06                	pop    QWORD PTR [rsi]
    4e6a:	48 ff c6             	inc    rsi
    4e6d:	48 ff 06             	inc    QWORD PTR [rsi]
    4e70:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4e71:	f3 e2 12             	repz loop 0x4e86
    4e74:	e1 12                	loope  0x4e88
    4e76:	e0 12                	loopne 0x4e8a
    4e78:	f2 0f 10 f6          	movsd  xmm6,xmm6
    4e7c:	f2 0f 10 36          	movsd  xmm6,QWORD PTR [rsi]
    4e80:	f2 48 0f 2d f6       	cvtsd2si rsi,xmm6
    4e85:	f2 48 0f 2d 36       	cvtsd2si rsi,QWORD PTR [rsi]
    4e8a:	f2 48 0f 2a f6       	cvtsi2sd xmm6,rsi
    4e8f:	f2 0f 2a 36          	cvtsi2sd xmm6,DWORD PTR [rsi]
    4e93:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4e99:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    4ea0:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    4ea7:	48 2b f7             	sub    rsi,rdi
    4eaa:	48 29 37             	sub    QWORD PTR [rdi],rsi
    4ead:	48 2b 3e             	sub    rdi,QWORD PTR [rsi]
    4eb0:	48 f7 ef             	imul   rdi
    4eb3:	48 f7 2f             	imul   QWORD PTR [rdi]
    4eb6:	48 0f af f7          	imul   rsi,rdi
    4eba:	48 69 f7 10 32 54 76 	imul   rsi,rdi,0x76543210
    4ec1:	48 0f af 37          	imul   rsi,QWORD PTR [rdi]
    4ec5:	48 69 37 10 32 54 76 	imul   rsi,QWORD PTR [rdi],0x76543210
    4ecc:	48 f7 ff             	idiv   rdi
    4ecf:	48 f7 3f             	idiv   QWORD PTR [rdi]
    4ed2:	0f 8d 10 32 54 76    	jge    0x765480e8
    4ed8:	e9 10 32 54 76       	jmp    0x765480ed
    4edd:	ff e7                	jmp    rdi
    4edf:	48 8b f7             	mov    rsi,rdi
    4ee2:	48 8b 37             	mov    rsi,QWORD PTR [rdi]
    4ee5:	48 89 3e             	mov    QWORD PTR [rsi],rdi
    4ee8:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    4eef:	09 00 00 
    4ef2:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    4ef9:	00 00 00 
    4efc:	e8 10 32 54 76       	call   0x76548111
    4f01:	ff d7                	call   rdi
    4f03:	c3                   	ret    
    4f04:	48 d1 ef             	shr    rdi,1
    4f07:	48 c1 ef 12          	shr    rdi,0x12
    4f0b:	48 d1 2f             	shr    QWORD PTR [rdi],1
    4f0e:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    4f12:	48 f7 df             	neg    rdi
    4f15:	48 f7 1f             	neg    QWORD PTR [rdi]
    4f18:	0f 05                	syscall 
    4f1a:	57                   	push   rdi
    4f1b:	ff 37                	push   QWORD PTR [rdi]
    4f1d:	68 10 32 54 76       	push   0x76543210
    4f22:	5f                   	pop    rdi
    4f23:	8f 07                	pop    QWORD PTR [rdi]
    4f25:	48 ff c7             	inc    rdi
    4f28:	48 ff 07             	inc    QWORD PTR [rdi]
    4f2b:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4f2c:	f3 e2 12             	repz loop 0x4f41
    4f2f:	e1 12                	loope  0x4f43
    4f31:	e0 12                	loopne 0x4f45
    4f33:	f2 0f 10 f7          	movsd  xmm6,xmm7
    4f37:	f2 0f 10 37          	movsd  xmm6,QWORD PTR [rdi]
    4f3b:	f2 48 0f 2d f7       	cvtsd2si rsi,xmm7
    4f40:	f2 48 0f 2d 37       	cvtsd2si rsi,QWORD PTR [rdi]
    4f45:	f2 48 0f 2a f7       	cvtsi2sd xmm6,rdi
    4f4a:	f2 0f 2a 37          	cvtsi2sd xmm6,DWORD PTR [rdi]
    4f4e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    4f54:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    4f5b:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    4f62:	49 2b f0             	sub    rsi,r8
    4f65:	49 29 30             	sub    QWORD PTR [r8],rsi
    4f68:	4c 2b 06             	sub    r8,QWORD PTR [rsi]
    4f6b:	49 f7 e8             	imul   r8
    4f6e:	49 f7 28             	imul   QWORD PTR [r8]
    4f71:	49 0f af f0          	imul   rsi,r8
    4f75:	49 69 f0 10 32 54 76 	imul   rsi,r8,0x76543210
    4f7c:	49 0f af 30          	imul   rsi,QWORD PTR [r8]
    4f80:	49 69 30 10 32 54 76 	imul   rsi,QWORD PTR [r8],0x76543210
    4f87:	49 f7 f8             	idiv   r8
    4f8a:	49 f7 38             	idiv   QWORD PTR [r8]
    4f8d:	0f 8d 10 32 54 76    	jge    0x765481a3
    4f93:	e9 10 32 54 76       	jmp    0x765481a8
    4f98:	41 ff e0             	jmp    r8
    4f9b:	49 8b f0             	mov    rsi,r8
    4f9e:	49 8b 30             	mov    rsi,QWORD PTR [r8]
    4fa1:	4c 89 06             	mov    QWORD PTR [rsi],r8
    4fa4:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    4fab:	09 00 00 
    4fae:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    4fb5:	00 00 00 
    4fb8:	e8 10 32 54 76       	call   0x765481cd
    4fbd:	41 ff d0             	call   r8
    4fc0:	c3                   	ret    
    4fc1:	49 d1 e8             	shr    r8,1
    4fc4:	49 c1 e8 12          	shr    r8,0x12
    4fc8:	49 d1 28             	shr    QWORD PTR [r8],1
    4fcb:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    4fcf:	49 f7 d8             	neg    r8
    4fd2:	49 f7 18             	neg    QWORD PTR [r8]
    4fd5:	0f 05                	syscall 
    4fd7:	41 50                	push   r8
    4fd9:	41 ff 30             	push   QWORD PTR [r8]
    4fdc:	68 10 32 54 76       	push   0x76543210
    4fe1:	41 58                	pop    r8
    4fe3:	41 8f 00             	pop    QWORD PTR [r8]
    4fe6:	49 ff c0             	inc    r8
    4fe9:	49 ff 00             	inc    QWORD PTR [r8]
    4fec:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    4fed:	f3 e2 12             	repz loop 0x5002
    4ff0:	e1 12                	loope  0x5004
    4ff2:	e0 12                	loopne 0x5006
    4ff4:	f2 41 0f 10 f0       	movsd  xmm6,xmm8
    4ff9:	f2 41 0f 10 30       	movsd  xmm6,QWORD PTR [r8]
    4ffe:	f2 49 0f 2d f0       	cvtsd2si rsi,xmm8
    5003:	f2 49 0f 2d 30       	cvtsd2si rsi,QWORD PTR [r8]
    5008:	f2 49 0f 2a f0       	cvtsi2sd xmm6,r8
    500d:	f2 41 0f 2a 30       	cvtsi2sd xmm6,DWORD PTR [r8]
    5012:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5018:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    501f:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    5026:	49 2b f1             	sub    rsi,r9
    5029:	49 29 31             	sub    QWORD PTR [r9],rsi
    502c:	4c 2b 0e             	sub    r9,QWORD PTR [rsi]
    502f:	49 f7 e9             	imul   r9
    5032:	49 f7 29             	imul   QWORD PTR [r9]
    5035:	49 0f af f1          	imul   rsi,r9
    5039:	49 69 f1 10 32 54 76 	imul   rsi,r9,0x76543210
    5040:	49 0f af 31          	imul   rsi,QWORD PTR [r9]
    5044:	49 69 31 10 32 54 76 	imul   rsi,QWORD PTR [r9],0x76543210
    504b:	49 f7 f9             	idiv   r9
    504e:	49 f7 39             	idiv   QWORD PTR [r9]
    5051:	0f 8d 10 32 54 76    	jge    0x76548267
    5057:	e9 10 32 54 76       	jmp    0x7654826c
    505c:	41 ff e1             	jmp    r9
    505f:	49 8b f1             	mov    rsi,r9
    5062:	49 8b 31             	mov    rsi,QWORD PTR [r9]
    5065:	4c 89 0e             	mov    QWORD PTR [rsi],r9
    5068:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    506f:	09 00 00 
    5072:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    5079:	00 00 00 
    507c:	e8 10 32 54 76       	call   0x76548291
    5081:	41 ff d1             	call   r9
    5084:	c3                   	ret    
    5085:	49 d1 e9             	shr    r9,1
    5088:	49 c1 e9 12          	shr    r9,0x12
    508c:	49 d1 29             	shr    QWORD PTR [r9],1
    508f:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    5093:	49 f7 d9             	neg    r9
    5096:	49 f7 19             	neg    QWORD PTR [r9]
    5099:	0f 05                	syscall 
    509b:	41 51                	push   r9
    509d:	41 ff 31             	push   QWORD PTR [r9]
    50a0:	68 10 32 54 76       	push   0x76543210
    50a5:	41 59                	pop    r9
    50a7:	41 8f 01             	pop    QWORD PTR [r9]
    50aa:	49 ff c1             	inc    r9
    50ad:	49 ff 01             	inc    QWORD PTR [r9]
    50b0:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    50b1:	f3 e2 12             	repz loop 0x50c6
    50b4:	e1 12                	loope  0x50c8
    50b6:	e0 12                	loopne 0x50ca
    50b8:	f2 41 0f 10 f1       	movsd  xmm6,xmm9
    50bd:	f2 41 0f 10 31       	movsd  xmm6,QWORD PTR [r9]
    50c2:	f2 49 0f 2d f1       	cvtsd2si rsi,xmm9
    50c7:	f2 49 0f 2d 31       	cvtsd2si rsi,QWORD PTR [r9]
    50cc:	f2 49 0f 2a f1       	cvtsi2sd xmm6,r9
    50d1:	f2 41 0f 2a 31       	cvtsi2sd xmm6,DWORD PTR [r9]
    50d6:	48 2d 10 32 54 76    	sub    rax,0x76543210
    50dc:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    50e3:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    50ea:	49 2b f2             	sub    rsi,r10
    50ed:	49 29 32             	sub    QWORD PTR [r10],rsi
    50f0:	4c 2b 16             	sub    r10,QWORD PTR [rsi]
    50f3:	49 f7 ea             	imul   r10
    50f6:	49 f7 2a             	imul   QWORD PTR [r10]
    50f9:	49 0f af f2          	imul   rsi,r10
    50fd:	49 69 f2 10 32 54 76 	imul   rsi,r10,0x76543210
    5104:	49 0f af 32          	imul   rsi,QWORD PTR [r10]
    5108:	49 69 32 10 32 54 76 	imul   rsi,QWORD PTR [r10],0x76543210
    510f:	49 f7 fa             	idiv   r10
    5112:	49 f7 3a             	idiv   QWORD PTR [r10]
    5115:	0f 8d 10 32 54 76    	jge    0x7654832b
    511b:	e9 10 32 54 76       	jmp    0x76548330
    5120:	41 ff e2             	jmp    r10
    5123:	49 8b f2             	mov    rsi,r10
    5126:	49 8b 32             	mov    rsi,QWORD PTR [r10]
    5129:	4c 89 16             	mov    QWORD PTR [rsi],r10
    512c:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    5133:	09 00 00 
    5136:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    513d:	00 00 00 
    5140:	e8 10 32 54 76       	call   0x76548355
    5145:	41 ff d2             	call   r10
    5148:	c3                   	ret    
    5149:	49 d1 ea             	shr    r10,1
    514c:	49 c1 ea 12          	shr    r10,0x12
    5150:	49 d1 2a             	shr    QWORD PTR [r10],1
    5153:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    5157:	49 f7 da             	neg    r10
    515a:	49 f7 1a             	neg    QWORD PTR [r10]
    515d:	0f 05                	syscall 
    515f:	41 52                	push   r10
    5161:	41 ff 32             	push   QWORD PTR [r10]
    5164:	68 10 32 54 76       	push   0x76543210
    5169:	41 5a                	pop    r10
    516b:	41 8f 02             	pop    QWORD PTR [r10]
    516e:	49 ff c2             	inc    r10
    5171:	49 ff 02             	inc    QWORD PTR [r10]
    5174:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5175:	f3 e2 12             	repz loop 0x518a
    5178:	e1 12                	loope  0x518c
    517a:	e0 12                	loopne 0x518e
    517c:	f2 41 0f 10 f2       	movsd  xmm6,xmm10
    5181:	f2 41 0f 10 32       	movsd  xmm6,QWORD PTR [r10]
    5186:	f2 49 0f 2d f2       	cvtsd2si rsi,xmm10
    518b:	f2 49 0f 2d 32       	cvtsd2si rsi,QWORD PTR [r10]
    5190:	f2 49 0f 2a f2       	cvtsi2sd xmm6,r10
    5195:	f2 41 0f 2a 32       	cvtsi2sd xmm6,DWORD PTR [r10]
    519a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    51a0:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    51a7:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    51ae:	49 2b f3             	sub    rsi,r11
    51b1:	49 29 33             	sub    QWORD PTR [r11],rsi
    51b4:	4c 2b 1e             	sub    r11,QWORD PTR [rsi]
    51b7:	49 f7 eb             	imul   r11
    51ba:	49 f7 2b             	imul   QWORD PTR [r11]
    51bd:	49 0f af f3          	imul   rsi,r11
    51c1:	49 69 f3 10 32 54 76 	imul   rsi,r11,0x76543210
    51c8:	49 0f af 33          	imul   rsi,QWORD PTR [r11]
    51cc:	49 69 33 10 32 54 76 	imul   rsi,QWORD PTR [r11],0x76543210
    51d3:	49 f7 fb             	idiv   r11
    51d6:	49 f7 3b             	idiv   QWORD PTR [r11]
    51d9:	0f 8d 10 32 54 76    	jge    0x765483ef
    51df:	e9 10 32 54 76       	jmp    0x765483f4
    51e4:	41 ff e3             	jmp    r11
    51e7:	49 8b f3             	mov    rsi,r11
    51ea:	49 8b 33             	mov    rsi,QWORD PTR [r11]
    51ed:	4c 89 1e             	mov    QWORD PTR [rsi],r11
    51f0:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    51f7:	09 00 00 
    51fa:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    5201:	00 00 00 
    5204:	e8 10 32 54 76       	call   0x76548419
    5209:	41 ff d3             	call   r11
    520c:	c3                   	ret    
    520d:	49 d1 eb             	shr    r11,1
    5210:	49 c1 eb 12          	shr    r11,0x12
    5214:	49 d1 2b             	shr    QWORD PTR [r11],1
    5217:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    521b:	49 f7 db             	neg    r11
    521e:	49 f7 1b             	neg    QWORD PTR [r11]
    5221:	0f 05                	syscall 
    5223:	41 53                	push   r11
    5225:	41 ff 33             	push   QWORD PTR [r11]
    5228:	68 10 32 54 76       	push   0x76543210
    522d:	41 5b                	pop    r11
    522f:	41 8f 03             	pop    QWORD PTR [r11]
    5232:	49 ff c3             	inc    r11
    5235:	49 ff 03             	inc    QWORD PTR [r11]
    5238:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5239:	f3 e2 12             	repz loop 0x524e
    523c:	e1 12                	loope  0x5250
    523e:	e0 12                	loopne 0x5252
    5240:	f2 41 0f 10 f3       	movsd  xmm6,xmm11
    5245:	f2 41 0f 10 33       	movsd  xmm6,QWORD PTR [r11]
    524a:	f2 49 0f 2d f3       	cvtsd2si rsi,xmm11
    524f:	f2 49 0f 2d 33       	cvtsd2si rsi,QWORD PTR [r11]
    5254:	f2 49 0f 2a f3       	cvtsi2sd xmm6,r11
    5259:	f2 41 0f 2a 33       	cvtsi2sd xmm6,DWORD PTR [r11]
    525e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5264:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    526b:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    5272:	49 2b f4             	sub    rsi,r12
    5275:	49 29 34 24          	sub    QWORD PTR [r12],rsi
    5279:	4c 2b 26             	sub    r12,QWORD PTR [rsi]
    527c:	49 f7 ec             	imul   r12
    527f:	49 f7 2c 24          	imul   QWORD PTR [r12]
    5283:	49 0f af f4          	imul   rsi,r12
    5287:	49 69 f4 10 32 54 76 	imul   rsi,r12,0x76543210
    528e:	49 0f af 34 24       	imul   rsi,QWORD PTR [r12]
    5293:	49 69 34 24 10 32 54 	imul   rsi,QWORD PTR [r12],0x76543210
    529a:	76 
    529b:	49 f7 fc             	idiv   r12
    529e:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    52a2:	0f 8d 10 32 54 76    	jge    0x765484b8
    52a8:	e9 10 32 54 76       	jmp    0x765484bd
    52ad:	41 ff e4             	jmp    r12
    52b0:	49 8b f4             	mov    rsi,r12
    52b3:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
    52b7:	4c 89 26             	mov    QWORD PTR [rsi],r12
    52ba:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    52c1:	09 00 00 
    52c4:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    52cb:	00 00 00 
    52ce:	e8 10 32 54 76       	call   0x765484e3
    52d3:	41 ff d4             	call   r12
    52d6:	c3                   	ret    
    52d7:	49 d1 ec             	shr    r12,1
    52da:	49 c1 ec 12          	shr    r12,0x12
    52de:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    52e2:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    52e7:	49 f7 dc             	neg    r12
    52ea:	49 f7 1c 24          	neg    QWORD PTR [r12]
    52ee:	0f 05                	syscall 
    52f0:	41 54                	push   r12
    52f2:	41 ff 34 24          	push   QWORD PTR [r12]
    52f6:	68 10 32 54 76       	push   0x76543210
    52fb:	41 5c                	pop    r12
    52fd:	41 8f 04 24          	pop    QWORD PTR [r12]
    5301:	49 ff c4             	inc    r12
    5304:	49 ff 04 24          	inc    QWORD PTR [r12]
    5308:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5309:	f3 e2 12             	repz loop 0x531e
    530c:	e1 12                	loope  0x5320
    530e:	e0 12                	loopne 0x5322
    5310:	f2 41 0f 10 f4       	movsd  xmm6,xmm12
    5315:	f2 41 0f 10 34 24    	movsd  xmm6,QWORD PTR [r12]
    531b:	f2 49 0f 2d f4       	cvtsd2si rsi,xmm12
    5320:	f2 49 0f 2d 34 24    	cvtsd2si rsi,QWORD PTR [r12]
    5326:	f2 49 0f 2a f4       	cvtsi2sd xmm6,r12
    532b:	f2 41 0f 2a 34 24    	cvtsi2sd xmm6,DWORD PTR [r12]
    5331:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5337:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    533e:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    5345:	49 2b f5             	sub    rsi,r13
    5348:	49 29 75 00          	sub    QWORD PTR [r13+0x0],rsi
    534c:	4c 2b 2e             	sub    r13,QWORD PTR [rsi]
    534f:	49 f7 ed             	imul   r13
    5352:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    5356:	49 0f af f5          	imul   rsi,r13
    535a:	49 69 f5 10 32 54 76 	imul   rsi,r13,0x76543210
    5361:	49 0f af 75 00       	imul   rsi,QWORD PTR [r13+0x0]
    5366:	49 69 75 00 10 32 54 	imul   rsi,QWORD PTR [r13+0x0],0x76543210
    536d:	76 
    536e:	49 f7 fd             	idiv   r13
    5371:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    5375:	0f 8d 10 32 54 76    	jge    0x7654858b
    537b:	e9 10 32 54 76       	jmp    0x76548590
    5380:	41 ff e5             	jmp    r13
    5383:	49 8b f5             	mov    rsi,r13
    5386:	49 8b 75 00          	mov    rsi,QWORD PTR [r13+0x0]
    538a:	4c 89 2e             	mov    QWORD PTR [rsi],r13
    538d:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    5394:	09 00 00 
    5397:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    539e:	00 00 00 
    53a1:	e8 10 32 54 76       	call   0x765485b6
    53a6:	41 ff d5             	call   r13
    53a9:	c3                   	ret    
    53aa:	49 d1 ed             	shr    r13,1
    53ad:	49 c1 ed 12          	shr    r13,0x12
    53b1:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    53b5:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    53ba:	49 f7 dd             	neg    r13
    53bd:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    53c1:	0f 05                	syscall 
    53c3:	41 55                	push   r13
    53c5:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    53c9:	68 10 32 54 76       	push   0x76543210
    53ce:	41 5d                	pop    r13
    53d0:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    53d4:	49 ff c5             	inc    r13
    53d7:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    53db:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    53dc:	f3 e2 12             	repz loop 0x53f1
    53df:	e1 12                	loope  0x53f3
    53e1:	e0 12                	loopne 0x53f5
    53e3:	f2 41 0f 10 f5       	movsd  xmm6,xmm13
    53e8:	f2 41 0f 10 75 00    	movsd  xmm6,QWORD PTR [r13+0x0]
    53ee:	f2 49 0f 2d f5       	cvtsd2si rsi,xmm13
    53f3:	f2 49 0f 2d 75 00    	cvtsd2si rsi,QWORD PTR [r13+0x0]
    53f9:	f2 49 0f 2a f5       	cvtsi2sd xmm6,r13
    53fe:	f2 41 0f 2a 75 00    	cvtsi2sd xmm6,DWORD PTR [r13+0x0]
    5404:	48 2d 10 32 54 76    	sub    rax,0x76543210
    540a:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    5411:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    5418:	49 2b f6             	sub    rsi,r14
    541b:	49 29 36             	sub    QWORD PTR [r14],rsi
    541e:	4c 2b 36             	sub    r14,QWORD PTR [rsi]
    5421:	49 f7 ee             	imul   r14
    5424:	49 f7 2e             	imul   QWORD PTR [r14]
    5427:	49 0f af f6          	imul   rsi,r14
    542b:	49 69 f6 10 32 54 76 	imul   rsi,r14,0x76543210
    5432:	49 0f af 36          	imul   rsi,QWORD PTR [r14]
    5436:	49 69 36 10 32 54 76 	imul   rsi,QWORD PTR [r14],0x76543210
    543d:	49 f7 fe             	idiv   r14
    5440:	49 f7 3e             	idiv   QWORD PTR [r14]
    5443:	0f 8d 10 32 54 76    	jge    0x76548659
    5449:	e9 10 32 54 76       	jmp    0x7654865e
    544e:	41 ff e6             	jmp    r14
    5451:	49 8b f6             	mov    rsi,r14
    5454:	49 8b 36             	mov    rsi,QWORD PTR [r14]
    5457:	4c 89 36             	mov    QWORD PTR [rsi],r14
    545a:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    5461:	09 00 00 
    5464:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    546b:	00 00 00 
    546e:	e8 10 32 54 76       	call   0x76548683
    5473:	41 ff d6             	call   r14
    5476:	c3                   	ret    
    5477:	49 d1 ee             	shr    r14,1
    547a:	49 c1 ee 12          	shr    r14,0x12
    547e:	49 d1 2e             	shr    QWORD PTR [r14],1
    5481:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    5485:	49 f7 de             	neg    r14
    5488:	49 f7 1e             	neg    QWORD PTR [r14]
    548b:	0f 05                	syscall 
    548d:	41 56                	push   r14
    548f:	41 ff 36             	push   QWORD PTR [r14]
    5492:	68 10 32 54 76       	push   0x76543210
    5497:	41 5e                	pop    r14
    5499:	41 8f 06             	pop    QWORD PTR [r14]
    549c:	49 ff c6             	inc    r14
    549f:	49 ff 06             	inc    QWORD PTR [r14]
    54a2:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    54a3:	f3 e2 12             	repz loop 0x54b8
    54a6:	e1 12                	loope  0x54ba
    54a8:	e0 12                	loopne 0x54bc
    54aa:	f2 41 0f 10 f6       	movsd  xmm6,xmm14
    54af:	f2 41 0f 10 36       	movsd  xmm6,QWORD PTR [r14]
    54b4:	f2 49 0f 2d f6       	cvtsd2si rsi,xmm14
    54b9:	f2 49 0f 2d 36       	cvtsd2si rsi,QWORD PTR [r14]
    54be:	f2 49 0f 2a f6       	cvtsi2sd xmm6,r14
    54c3:	f2 41 0f 2a 36       	cvtsi2sd xmm6,DWORD PTR [r14]
    54c8:	48 2d 10 32 54 76    	sub    rax,0x76543210
    54ce:	48 81 ee 10 32 54 76 	sub    rsi,0x76543210
    54d5:	48 81 2e 10 32 54 76 	sub    QWORD PTR [rsi],0x76543210
    54dc:	49 2b f7             	sub    rsi,r15
    54df:	49 29 37             	sub    QWORD PTR [r15],rsi
    54e2:	4c 2b 3e             	sub    r15,QWORD PTR [rsi]
    54e5:	49 f7 ef             	imul   r15
    54e8:	49 f7 2f             	imul   QWORD PTR [r15]
    54eb:	49 0f af f7          	imul   rsi,r15
    54ef:	49 69 f7 10 32 54 76 	imul   rsi,r15,0x76543210
    54f6:	49 0f af 37          	imul   rsi,QWORD PTR [r15]
    54fa:	49 69 37 10 32 54 76 	imul   rsi,QWORD PTR [r15],0x76543210
    5501:	49 f7 ff             	idiv   r15
    5504:	49 f7 3f             	idiv   QWORD PTR [r15]
    5507:	0f 8d 10 32 54 76    	jge    0x7654871d
    550d:	e9 10 32 54 76       	jmp    0x76548722
    5512:	41 ff e7             	jmp    r15
    5515:	49 8b f7             	mov    rsi,r15
    5518:	49 8b 37             	mov    rsi,QWORD PTR [r15]
    551b:	4c 89 3e             	mov    QWORD PTR [rsi],r15
    551e:	48 be 09 21 43 65 87 	movabs rsi,0x98765432109
    5525:	09 00 00 
    5528:	48 be 10 32 54 76 00 	movabs rsi,0x76543210
    552f:	00 00 00 
    5532:	e8 10 32 54 76       	call   0x76548747
    5537:	41 ff d7             	call   r15
    553a:	c3                   	ret    
    553b:	49 d1 ef             	shr    r15,1
    553e:	49 c1 ef 12          	shr    r15,0x12
    5542:	49 d1 2f             	shr    QWORD PTR [r15],1
    5545:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    5549:	49 f7 df             	neg    r15
    554c:	49 f7 1f             	neg    QWORD PTR [r15]
    554f:	0f 05                	syscall 
    5551:	41 57                	push   r15
    5553:	41 ff 37             	push   QWORD PTR [r15]
    5556:	68 10 32 54 76       	push   0x76543210
    555b:	41 5f                	pop    r15
    555d:	41 8f 07             	pop    QWORD PTR [r15]
    5560:	49 ff c7             	inc    r15
    5563:	49 ff 07             	inc    QWORD PTR [r15]
    5566:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5567:	f3 e2 12             	repz loop 0x557c
    556a:	e1 12                	loope  0x557e
    556c:	e0 12                	loopne 0x5580
    556e:	f2 41 0f 10 f7       	movsd  xmm6,xmm15
    5573:	f2 41 0f 10 37       	movsd  xmm6,QWORD PTR [r15]
    5578:	f2 49 0f 2d f7       	cvtsd2si rsi,xmm15
    557d:	f2 49 0f 2d 37       	cvtsd2si rsi,QWORD PTR [r15]
    5582:	f2 49 0f 2a f7       	cvtsi2sd xmm6,r15
    5587:	f2 41 0f 2a 37       	cvtsi2sd xmm6,DWORD PTR [r15]
    558c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5592:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5599:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    55a0:	48 2b f8             	sub    rdi,rax
    55a3:	48 29 38             	sub    QWORD PTR [rax],rdi
    55a6:	48 2b 07             	sub    rax,QWORD PTR [rdi]
    55a9:	48 f7 e8             	imul   rax
    55ac:	48 f7 28             	imul   QWORD PTR [rax]
    55af:	48 0f af f8          	imul   rdi,rax
    55b3:	48 69 f8 10 32 54 76 	imul   rdi,rax,0x76543210
    55ba:	48 0f af 38          	imul   rdi,QWORD PTR [rax]
    55be:	48 69 38 10 32 54 76 	imul   rdi,QWORD PTR [rax],0x76543210
    55c5:	48 f7 f8             	idiv   rax
    55c8:	48 f7 38             	idiv   QWORD PTR [rax]
    55cb:	0f 8d 10 32 54 76    	jge    0x765487e1
    55d1:	e9 10 32 54 76       	jmp    0x765487e6
    55d6:	ff e0                	jmp    rax
    55d8:	48 8b f8             	mov    rdi,rax
    55db:	48 8b 38             	mov    rdi,QWORD PTR [rax]
    55de:	48 89 07             	mov    QWORD PTR [rdi],rax
    55e1:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    55e8:	09 00 00 
    55eb:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    55f2:	00 00 00 
    55f5:	e8 10 32 54 76       	call   0x7654880a
    55fa:	ff d0                	call   rax
    55fc:	c3                   	ret    
    55fd:	48 d1 e8             	shr    rax,1
    5600:	48 c1 e8 12          	shr    rax,0x12
    5604:	48 d1 28             	shr    QWORD PTR [rax],1
    5607:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    560b:	48 f7 d8             	neg    rax
    560e:	48 f7 18             	neg    QWORD PTR [rax]
    5611:	0f 05                	syscall 
    5613:	50                   	push   rax
    5614:	ff 30                	push   QWORD PTR [rax]
    5616:	68 10 32 54 76       	push   0x76543210
    561b:	58                   	pop    rax
    561c:	8f 00                	pop    QWORD PTR [rax]
    561e:	48 ff c0             	inc    rax
    5621:	48 ff 00             	inc    QWORD PTR [rax]
    5624:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5625:	f3 e2 12             	repz loop 0x563a
    5628:	e1 12                	loope  0x563c
    562a:	e0 12                	loopne 0x563e
    562c:	f2 0f 10 f8          	movsd  xmm7,xmm0
    5630:	f2 0f 10 38          	movsd  xmm7,QWORD PTR [rax]
    5634:	f2 48 0f 2d f8       	cvtsd2si rdi,xmm0
    5639:	f2 48 0f 2d 38       	cvtsd2si rdi,QWORD PTR [rax]
    563e:	f2 48 0f 2a f8       	cvtsi2sd xmm7,rax
    5643:	f2 0f 2a 38          	cvtsi2sd xmm7,DWORD PTR [rax]
    5647:	48 2d 10 32 54 76    	sub    rax,0x76543210
    564d:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5654:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    565b:	48 2b f9             	sub    rdi,rcx
    565e:	48 29 39             	sub    QWORD PTR [rcx],rdi
    5661:	48 2b 0f             	sub    rcx,QWORD PTR [rdi]
    5664:	48 f7 e9             	imul   rcx
    5667:	48 f7 29             	imul   QWORD PTR [rcx]
    566a:	48 0f af f9          	imul   rdi,rcx
    566e:	48 69 f9 10 32 54 76 	imul   rdi,rcx,0x76543210
    5675:	48 0f af 39          	imul   rdi,QWORD PTR [rcx]
    5679:	48 69 39 10 32 54 76 	imul   rdi,QWORD PTR [rcx],0x76543210
    5680:	48 f7 f9             	idiv   rcx
    5683:	48 f7 39             	idiv   QWORD PTR [rcx]
    5686:	0f 8d 10 32 54 76    	jge    0x7654889c
    568c:	e9 10 32 54 76       	jmp    0x765488a1
    5691:	ff e1                	jmp    rcx
    5693:	48 8b f9             	mov    rdi,rcx
    5696:	48 8b 39             	mov    rdi,QWORD PTR [rcx]
    5699:	48 89 0f             	mov    QWORD PTR [rdi],rcx
    569c:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    56a3:	09 00 00 
    56a6:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    56ad:	00 00 00 
    56b0:	e8 10 32 54 76       	call   0x765488c5
    56b5:	ff d1                	call   rcx
    56b7:	c3                   	ret    
    56b8:	48 d1 e9             	shr    rcx,1
    56bb:	48 c1 e9 12          	shr    rcx,0x12
    56bf:	48 d1 29             	shr    QWORD PTR [rcx],1
    56c2:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    56c6:	48 f7 d9             	neg    rcx
    56c9:	48 f7 19             	neg    QWORD PTR [rcx]
    56cc:	0f 05                	syscall 
    56ce:	51                   	push   rcx
    56cf:	ff 31                	push   QWORD PTR [rcx]
    56d1:	68 10 32 54 76       	push   0x76543210
    56d6:	59                   	pop    rcx
    56d7:	8f 01                	pop    QWORD PTR [rcx]
    56d9:	48 ff c1             	inc    rcx
    56dc:	48 ff 01             	inc    QWORD PTR [rcx]
    56df:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    56e0:	f3 e2 12             	repz loop 0x56f5
    56e3:	e1 12                	loope  0x56f7
    56e5:	e0 12                	loopne 0x56f9
    56e7:	f2 0f 10 f9          	movsd  xmm7,xmm1
    56eb:	f2 0f 10 39          	movsd  xmm7,QWORD PTR [rcx]
    56ef:	f2 48 0f 2d f9       	cvtsd2si rdi,xmm1
    56f4:	f2 48 0f 2d 39       	cvtsd2si rdi,QWORD PTR [rcx]
    56f9:	f2 48 0f 2a f9       	cvtsi2sd xmm7,rcx
    56fe:	f2 0f 2a 39          	cvtsi2sd xmm7,DWORD PTR [rcx]
    5702:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5708:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    570f:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    5716:	48 2b fa             	sub    rdi,rdx
    5719:	48 29 3a             	sub    QWORD PTR [rdx],rdi
    571c:	48 2b 17             	sub    rdx,QWORD PTR [rdi]
    571f:	48 f7 ea             	imul   rdx
    5722:	48 f7 2a             	imul   QWORD PTR [rdx]
    5725:	48 0f af fa          	imul   rdi,rdx
    5729:	48 69 fa 10 32 54 76 	imul   rdi,rdx,0x76543210
    5730:	48 0f af 3a          	imul   rdi,QWORD PTR [rdx]
    5734:	48 69 3a 10 32 54 76 	imul   rdi,QWORD PTR [rdx],0x76543210
    573b:	48 f7 fa             	idiv   rdx
    573e:	48 f7 3a             	idiv   QWORD PTR [rdx]
    5741:	0f 8d 10 32 54 76    	jge    0x76548957
    5747:	e9 10 32 54 76       	jmp    0x7654895c
    574c:	ff e2                	jmp    rdx
    574e:	48 8b fa             	mov    rdi,rdx
    5751:	48 8b 3a             	mov    rdi,QWORD PTR [rdx]
    5754:	48 89 17             	mov    QWORD PTR [rdi],rdx
    5757:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    575e:	09 00 00 
    5761:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    5768:	00 00 00 
    576b:	e8 10 32 54 76       	call   0x76548980
    5770:	ff d2                	call   rdx
    5772:	c3                   	ret    
    5773:	48 d1 ea             	shr    rdx,1
    5776:	48 c1 ea 12          	shr    rdx,0x12
    577a:	48 d1 2a             	shr    QWORD PTR [rdx],1
    577d:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    5781:	48 f7 da             	neg    rdx
    5784:	48 f7 1a             	neg    QWORD PTR [rdx]
    5787:	0f 05                	syscall 
    5789:	52                   	push   rdx
    578a:	ff 32                	push   QWORD PTR [rdx]
    578c:	68 10 32 54 76       	push   0x76543210
    5791:	5a                   	pop    rdx
    5792:	8f 02                	pop    QWORD PTR [rdx]
    5794:	48 ff c2             	inc    rdx
    5797:	48 ff 02             	inc    QWORD PTR [rdx]
    579a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    579b:	f3 e2 12             	repz loop 0x57b0
    579e:	e1 12                	loope  0x57b2
    57a0:	e0 12                	loopne 0x57b4
    57a2:	f2 0f 10 fa          	movsd  xmm7,xmm2
    57a6:	f2 0f 10 3a          	movsd  xmm7,QWORD PTR [rdx]
    57aa:	f2 48 0f 2d fa       	cvtsd2si rdi,xmm2
    57af:	f2 48 0f 2d 3a       	cvtsd2si rdi,QWORD PTR [rdx]
    57b4:	f2 48 0f 2a fa       	cvtsi2sd xmm7,rdx
    57b9:	f2 0f 2a 3a          	cvtsi2sd xmm7,DWORD PTR [rdx]
    57bd:	48 2d 10 32 54 76    	sub    rax,0x76543210
    57c3:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    57ca:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    57d1:	48 2b fb             	sub    rdi,rbx
    57d4:	48 29 3b             	sub    QWORD PTR [rbx],rdi
    57d7:	48 2b 1f             	sub    rbx,QWORD PTR [rdi]
    57da:	48 f7 eb             	imul   rbx
    57dd:	48 f7 2b             	imul   QWORD PTR [rbx]
    57e0:	48 0f af fb          	imul   rdi,rbx
    57e4:	48 69 fb 10 32 54 76 	imul   rdi,rbx,0x76543210
    57eb:	48 0f af 3b          	imul   rdi,QWORD PTR [rbx]
    57ef:	48 69 3b 10 32 54 76 	imul   rdi,QWORD PTR [rbx],0x76543210
    57f6:	48 f7 fb             	idiv   rbx
    57f9:	48 f7 3b             	idiv   QWORD PTR [rbx]
    57fc:	0f 8d 10 32 54 76    	jge    0x76548a12
    5802:	e9 10 32 54 76       	jmp    0x76548a17
    5807:	ff e3                	jmp    rbx
    5809:	48 8b fb             	mov    rdi,rbx
    580c:	48 8b 3b             	mov    rdi,QWORD PTR [rbx]
    580f:	48 89 1f             	mov    QWORD PTR [rdi],rbx
    5812:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    5819:	09 00 00 
    581c:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    5823:	00 00 00 
    5826:	e8 10 32 54 76       	call   0x76548a3b
    582b:	ff d3                	call   rbx
    582d:	c3                   	ret    
    582e:	48 d1 eb             	shr    rbx,1
    5831:	48 c1 eb 12          	shr    rbx,0x12
    5835:	48 d1 2b             	shr    QWORD PTR [rbx],1
    5838:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    583c:	48 f7 db             	neg    rbx
    583f:	48 f7 1b             	neg    QWORD PTR [rbx]
    5842:	0f 05                	syscall 
    5844:	53                   	push   rbx
    5845:	ff 33                	push   QWORD PTR [rbx]
    5847:	68 10 32 54 76       	push   0x76543210
    584c:	5b                   	pop    rbx
    584d:	8f 03                	pop    QWORD PTR [rbx]
    584f:	48 ff c3             	inc    rbx
    5852:	48 ff 03             	inc    QWORD PTR [rbx]
    5855:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5856:	f3 e2 12             	repz loop 0x586b
    5859:	e1 12                	loope  0x586d
    585b:	e0 12                	loopne 0x586f
    585d:	f2 0f 10 fb          	movsd  xmm7,xmm3
    5861:	f2 0f 10 3b          	movsd  xmm7,QWORD PTR [rbx]
    5865:	f2 48 0f 2d fb       	cvtsd2si rdi,xmm3
    586a:	f2 48 0f 2d 3b       	cvtsd2si rdi,QWORD PTR [rbx]
    586f:	f2 48 0f 2a fb       	cvtsi2sd xmm7,rbx
    5874:	f2 0f 2a 3b          	cvtsi2sd xmm7,DWORD PTR [rbx]
    5878:	48 2d 10 32 54 76    	sub    rax,0x76543210
    587e:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5885:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    588c:	48 2b fc             	sub    rdi,rsp
    588f:	48 29 3c 24          	sub    QWORD PTR [rsp],rdi
    5893:	48 2b 27             	sub    rsp,QWORD PTR [rdi]
    5896:	48 f7 ec             	imul   rsp
    5899:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    589d:	48 0f af fc          	imul   rdi,rsp
    58a1:	48 69 fc 10 32 54 76 	imul   rdi,rsp,0x76543210
    58a8:	48 0f af 3c 24       	imul   rdi,QWORD PTR [rsp]
    58ad:	48 69 3c 24 10 32 54 	imul   rdi,QWORD PTR [rsp],0x76543210
    58b4:	76 
    58b5:	48 f7 fc             	idiv   rsp
    58b8:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    58bc:	0f 8d 10 32 54 76    	jge    0x76548ad2
    58c2:	e9 10 32 54 76       	jmp    0x76548ad7
    58c7:	ff e4                	jmp    rsp
    58c9:	48 8b fc             	mov    rdi,rsp
    58cc:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
    58d0:	48 89 27             	mov    QWORD PTR [rdi],rsp
    58d3:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    58da:	09 00 00 
    58dd:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    58e4:	00 00 00 
    58e7:	e8 10 32 54 76       	call   0x76548afc
    58ec:	ff d4                	call   rsp
    58ee:	c3                   	ret    
    58ef:	48 d1 ec             	shr    rsp,1
    58f2:	48 c1 ec 12          	shr    rsp,0x12
    58f6:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    58fa:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    58ff:	48 f7 dc             	neg    rsp
    5902:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    5906:	0f 05                	syscall 
    5908:	54                   	push   rsp
    5909:	ff 34 24             	push   QWORD PTR [rsp]
    590c:	68 10 32 54 76       	push   0x76543210
    5911:	5c                   	pop    rsp
    5912:	8f 04 24             	pop    QWORD PTR [rsp]
    5915:	48 ff c4             	inc    rsp
    5918:	48 ff 04 24          	inc    QWORD PTR [rsp]
    591c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    591d:	f3 e2 12             	repz loop 0x5932
    5920:	e1 12                	loope  0x5934
    5922:	e0 12                	loopne 0x5936
    5924:	f2 0f 10 fc          	movsd  xmm7,xmm4
    5928:	f2 0f 10 3c 24       	movsd  xmm7,QWORD PTR [rsp]
    592d:	f2 48 0f 2d fc       	cvtsd2si rdi,xmm4
    5932:	f2 48 0f 2d 3c 24    	cvtsd2si rdi,QWORD PTR [rsp]
    5938:	f2 48 0f 2a fc       	cvtsi2sd xmm7,rsp
    593d:	f2 0f 2a 3c 24       	cvtsi2sd xmm7,DWORD PTR [rsp]
    5942:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5948:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    594f:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    5956:	48 2b fd             	sub    rdi,rbp
    5959:	48 29 7d 00          	sub    QWORD PTR [rbp+0x0],rdi
    595d:	48 2b 2f             	sub    rbp,QWORD PTR [rdi]
    5960:	48 f7 ed             	imul   rbp
    5963:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    5967:	48 0f af fd          	imul   rdi,rbp
    596b:	48 69 fd 10 32 54 76 	imul   rdi,rbp,0x76543210
    5972:	48 0f af 7d 00       	imul   rdi,QWORD PTR [rbp+0x0]
    5977:	48 69 7d 00 10 32 54 	imul   rdi,QWORD PTR [rbp+0x0],0x76543210
    597e:	76 
    597f:	48 f7 fd             	idiv   rbp
    5982:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    5986:	0f 8d 10 32 54 76    	jge    0x76548b9c
    598c:	e9 10 32 54 76       	jmp    0x76548ba1
    5991:	ff e5                	jmp    rbp
    5993:	48 8b fd             	mov    rdi,rbp
    5996:	48 8b 7d 00          	mov    rdi,QWORD PTR [rbp+0x0]
    599a:	48 89 2f             	mov    QWORD PTR [rdi],rbp
    599d:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    59a4:	09 00 00 
    59a7:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    59ae:	00 00 00 
    59b1:	e8 10 32 54 76       	call   0x76548bc6
    59b6:	ff d5                	call   rbp
    59b8:	c3                   	ret    
    59b9:	48 d1 ed             	shr    rbp,1
    59bc:	48 c1 ed 12          	shr    rbp,0x12
    59c0:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    59c4:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    59c9:	48 f7 dd             	neg    rbp
    59cc:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    59d0:	0f 05                	syscall 
    59d2:	55                   	push   rbp
    59d3:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    59d6:	68 10 32 54 76       	push   0x76543210
    59db:	5d                   	pop    rbp
    59dc:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    59df:	48 ff c5             	inc    rbp
    59e2:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    59e6:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    59e7:	f3 e2 12             	repz loop 0x59fc
    59ea:	e1 12                	loope  0x59fe
    59ec:	e0 12                	loopne 0x5a00
    59ee:	f2 0f 10 fd          	movsd  xmm7,xmm5
    59f2:	f2 0f 10 7d 00       	movsd  xmm7,QWORD PTR [rbp+0x0]
    59f7:	f2 48 0f 2d fd       	cvtsd2si rdi,xmm5
    59fc:	f2 48 0f 2d 7d 00    	cvtsd2si rdi,QWORD PTR [rbp+0x0]
    5a02:	f2 48 0f 2a fd       	cvtsi2sd xmm7,rbp
    5a07:	f2 0f 2a 7d 00       	cvtsi2sd xmm7,DWORD PTR [rbp+0x0]
    5a0c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5a12:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5a19:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    5a20:	48 2b fe             	sub    rdi,rsi
    5a23:	48 29 3e             	sub    QWORD PTR [rsi],rdi
    5a26:	48 2b 37             	sub    rsi,QWORD PTR [rdi]
    5a29:	48 f7 ee             	imul   rsi
    5a2c:	48 f7 2e             	imul   QWORD PTR [rsi]
    5a2f:	48 0f af fe          	imul   rdi,rsi
    5a33:	48 69 fe 10 32 54 76 	imul   rdi,rsi,0x76543210
    5a3a:	48 0f af 3e          	imul   rdi,QWORD PTR [rsi]
    5a3e:	48 69 3e 10 32 54 76 	imul   rdi,QWORD PTR [rsi],0x76543210
    5a45:	48 f7 fe             	idiv   rsi
    5a48:	48 f7 3e             	idiv   QWORD PTR [rsi]
    5a4b:	0f 8d 10 32 54 76    	jge    0x76548c61
    5a51:	e9 10 32 54 76       	jmp    0x76548c66
    5a56:	ff e6                	jmp    rsi
    5a58:	48 8b fe             	mov    rdi,rsi
    5a5b:	48 8b 3e             	mov    rdi,QWORD PTR [rsi]
    5a5e:	48 89 37             	mov    QWORD PTR [rdi],rsi
    5a61:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    5a68:	09 00 00 
    5a6b:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    5a72:	00 00 00 
    5a75:	e8 10 32 54 76       	call   0x76548c8a
    5a7a:	ff d6                	call   rsi
    5a7c:	c3                   	ret    
    5a7d:	48 d1 ee             	shr    rsi,1
    5a80:	48 c1 ee 12          	shr    rsi,0x12
    5a84:	48 d1 2e             	shr    QWORD PTR [rsi],1
    5a87:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    5a8b:	48 f7 de             	neg    rsi
    5a8e:	48 f7 1e             	neg    QWORD PTR [rsi]
    5a91:	0f 05                	syscall 
    5a93:	56                   	push   rsi
    5a94:	ff 36                	push   QWORD PTR [rsi]
    5a96:	68 10 32 54 76       	push   0x76543210
    5a9b:	5e                   	pop    rsi
    5a9c:	8f 06                	pop    QWORD PTR [rsi]
    5a9e:	48 ff c6             	inc    rsi
    5aa1:	48 ff 06             	inc    QWORD PTR [rsi]
    5aa4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5aa5:	f3 e2 12             	repz loop 0x5aba
    5aa8:	e1 12                	loope  0x5abc
    5aaa:	e0 12                	loopne 0x5abe
    5aac:	f2 0f 10 fe          	movsd  xmm7,xmm6
    5ab0:	f2 0f 10 3e          	movsd  xmm7,QWORD PTR [rsi]
    5ab4:	f2 48 0f 2d fe       	cvtsd2si rdi,xmm6
    5ab9:	f2 48 0f 2d 3e       	cvtsd2si rdi,QWORD PTR [rsi]
    5abe:	f2 48 0f 2a fe       	cvtsi2sd xmm7,rsi
    5ac3:	f2 0f 2a 3e          	cvtsi2sd xmm7,DWORD PTR [rsi]
    5ac7:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5acd:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5ad4:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    5adb:	48 2b ff             	sub    rdi,rdi
    5ade:	48 29 3f             	sub    QWORD PTR [rdi],rdi
    5ae1:	48 2b 3f             	sub    rdi,QWORD PTR [rdi]
    5ae4:	48 f7 ef             	imul   rdi
    5ae7:	48 f7 2f             	imul   QWORD PTR [rdi]
    5aea:	48 0f af ff          	imul   rdi,rdi
    5aee:	48 69 ff 10 32 54 76 	imul   rdi,rdi,0x76543210
    5af5:	48 0f af 3f          	imul   rdi,QWORD PTR [rdi]
    5af9:	48 69 3f 10 32 54 76 	imul   rdi,QWORD PTR [rdi],0x76543210
    5b00:	48 f7 ff             	idiv   rdi
    5b03:	48 f7 3f             	idiv   QWORD PTR [rdi]
    5b06:	0f 8d 10 32 54 76    	jge    0x76548d1c
    5b0c:	e9 10 32 54 76       	jmp    0x76548d21
    5b11:	ff e7                	jmp    rdi
    5b13:	48 8b ff             	mov    rdi,rdi
    5b16:	48 8b 3f             	mov    rdi,QWORD PTR [rdi]
    5b19:	48 89 3f             	mov    QWORD PTR [rdi],rdi
    5b1c:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    5b23:	09 00 00 
    5b26:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    5b2d:	00 00 00 
    5b30:	e8 10 32 54 76       	call   0x76548d45
    5b35:	ff d7                	call   rdi
    5b37:	c3                   	ret    
    5b38:	48 d1 ef             	shr    rdi,1
    5b3b:	48 c1 ef 12          	shr    rdi,0x12
    5b3f:	48 d1 2f             	shr    QWORD PTR [rdi],1
    5b42:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    5b46:	48 f7 df             	neg    rdi
    5b49:	48 f7 1f             	neg    QWORD PTR [rdi]
    5b4c:	0f 05                	syscall 
    5b4e:	57                   	push   rdi
    5b4f:	ff 37                	push   QWORD PTR [rdi]
    5b51:	68 10 32 54 76       	push   0x76543210
    5b56:	5f                   	pop    rdi
    5b57:	8f 07                	pop    QWORD PTR [rdi]
    5b59:	48 ff c7             	inc    rdi
    5b5c:	48 ff 07             	inc    QWORD PTR [rdi]
    5b5f:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5b60:	f3 e2 12             	repz loop 0x5b75
    5b63:	e1 12                	loope  0x5b77
    5b65:	e0 12                	loopne 0x5b79
    5b67:	f2 0f 10 ff          	movsd  xmm7,xmm7
    5b6b:	f2 0f 10 3f          	movsd  xmm7,QWORD PTR [rdi]
    5b6f:	f2 48 0f 2d ff       	cvtsd2si rdi,xmm7
    5b74:	f2 48 0f 2d 3f       	cvtsd2si rdi,QWORD PTR [rdi]
    5b79:	f2 48 0f 2a ff       	cvtsi2sd xmm7,rdi
    5b7e:	f2 0f 2a 3f          	cvtsi2sd xmm7,DWORD PTR [rdi]
    5b82:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5b88:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5b8f:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    5b96:	49 2b f8             	sub    rdi,r8
    5b99:	49 29 38             	sub    QWORD PTR [r8],rdi
    5b9c:	4c 2b 07             	sub    r8,QWORD PTR [rdi]
    5b9f:	49 f7 e8             	imul   r8
    5ba2:	49 f7 28             	imul   QWORD PTR [r8]
    5ba5:	49 0f af f8          	imul   rdi,r8
    5ba9:	49 69 f8 10 32 54 76 	imul   rdi,r8,0x76543210
    5bb0:	49 0f af 38          	imul   rdi,QWORD PTR [r8]
    5bb4:	49 69 38 10 32 54 76 	imul   rdi,QWORD PTR [r8],0x76543210
    5bbb:	49 f7 f8             	idiv   r8
    5bbe:	49 f7 38             	idiv   QWORD PTR [r8]
    5bc1:	0f 8d 10 32 54 76    	jge    0x76548dd7
    5bc7:	e9 10 32 54 76       	jmp    0x76548ddc
    5bcc:	41 ff e0             	jmp    r8
    5bcf:	49 8b f8             	mov    rdi,r8
    5bd2:	49 8b 38             	mov    rdi,QWORD PTR [r8]
    5bd5:	4c 89 07             	mov    QWORD PTR [rdi],r8
    5bd8:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    5bdf:	09 00 00 
    5be2:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    5be9:	00 00 00 
    5bec:	e8 10 32 54 76       	call   0x76548e01
    5bf1:	41 ff d0             	call   r8
    5bf4:	c3                   	ret    
    5bf5:	49 d1 e8             	shr    r8,1
    5bf8:	49 c1 e8 12          	shr    r8,0x12
    5bfc:	49 d1 28             	shr    QWORD PTR [r8],1
    5bff:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    5c03:	49 f7 d8             	neg    r8
    5c06:	49 f7 18             	neg    QWORD PTR [r8]
    5c09:	0f 05                	syscall 
    5c0b:	41 50                	push   r8
    5c0d:	41 ff 30             	push   QWORD PTR [r8]
    5c10:	68 10 32 54 76       	push   0x76543210
    5c15:	41 58                	pop    r8
    5c17:	41 8f 00             	pop    QWORD PTR [r8]
    5c1a:	49 ff c0             	inc    r8
    5c1d:	49 ff 00             	inc    QWORD PTR [r8]
    5c20:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5c21:	f3 e2 12             	repz loop 0x5c36
    5c24:	e1 12                	loope  0x5c38
    5c26:	e0 12                	loopne 0x5c3a
    5c28:	f2 41 0f 10 f8       	movsd  xmm7,xmm8
    5c2d:	f2 41 0f 10 38       	movsd  xmm7,QWORD PTR [r8]
    5c32:	f2 49 0f 2d f8       	cvtsd2si rdi,xmm8
    5c37:	f2 49 0f 2d 38       	cvtsd2si rdi,QWORD PTR [r8]
    5c3c:	f2 49 0f 2a f8       	cvtsi2sd xmm7,r8
    5c41:	f2 41 0f 2a 38       	cvtsi2sd xmm7,DWORD PTR [r8]
    5c46:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5c4c:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5c53:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    5c5a:	49 2b f9             	sub    rdi,r9
    5c5d:	49 29 39             	sub    QWORD PTR [r9],rdi
    5c60:	4c 2b 0f             	sub    r9,QWORD PTR [rdi]
    5c63:	49 f7 e9             	imul   r9
    5c66:	49 f7 29             	imul   QWORD PTR [r9]
    5c69:	49 0f af f9          	imul   rdi,r9
    5c6d:	49 69 f9 10 32 54 76 	imul   rdi,r9,0x76543210
    5c74:	49 0f af 39          	imul   rdi,QWORD PTR [r9]
    5c78:	49 69 39 10 32 54 76 	imul   rdi,QWORD PTR [r9],0x76543210
    5c7f:	49 f7 f9             	idiv   r9
    5c82:	49 f7 39             	idiv   QWORD PTR [r9]
    5c85:	0f 8d 10 32 54 76    	jge    0x76548e9b
    5c8b:	e9 10 32 54 76       	jmp    0x76548ea0
    5c90:	41 ff e1             	jmp    r9
    5c93:	49 8b f9             	mov    rdi,r9
    5c96:	49 8b 39             	mov    rdi,QWORD PTR [r9]
    5c99:	4c 89 0f             	mov    QWORD PTR [rdi],r9
    5c9c:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    5ca3:	09 00 00 
    5ca6:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    5cad:	00 00 00 
    5cb0:	e8 10 32 54 76       	call   0x76548ec5
    5cb5:	41 ff d1             	call   r9
    5cb8:	c3                   	ret    
    5cb9:	49 d1 e9             	shr    r9,1
    5cbc:	49 c1 e9 12          	shr    r9,0x12
    5cc0:	49 d1 29             	shr    QWORD PTR [r9],1
    5cc3:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    5cc7:	49 f7 d9             	neg    r9
    5cca:	49 f7 19             	neg    QWORD PTR [r9]
    5ccd:	0f 05                	syscall 
    5ccf:	41 51                	push   r9
    5cd1:	41 ff 31             	push   QWORD PTR [r9]
    5cd4:	68 10 32 54 76       	push   0x76543210
    5cd9:	41 59                	pop    r9
    5cdb:	41 8f 01             	pop    QWORD PTR [r9]
    5cde:	49 ff c1             	inc    r9
    5ce1:	49 ff 01             	inc    QWORD PTR [r9]
    5ce4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5ce5:	f3 e2 12             	repz loop 0x5cfa
    5ce8:	e1 12                	loope  0x5cfc
    5cea:	e0 12                	loopne 0x5cfe
    5cec:	f2 41 0f 10 f9       	movsd  xmm7,xmm9
    5cf1:	f2 41 0f 10 39       	movsd  xmm7,QWORD PTR [r9]
    5cf6:	f2 49 0f 2d f9       	cvtsd2si rdi,xmm9
    5cfb:	f2 49 0f 2d 39       	cvtsd2si rdi,QWORD PTR [r9]
    5d00:	f2 49 0f 2a f9       	cvtsi2sd xmm7,r9
    5d05:	f2 41 0f 2a 39       	cvtsi2sd xmm7,DWORD PTR [r9]
    5d0a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5d10:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5d17:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    5d1e:	49 2b fa             	sub    rdi,r10
    5d21:	49 29 3a             	sub    QWORD PTR [r10],rdi
    5d24:	4c 2b 17             	sub    r10,QWORD PTR [rdi]
    5d27:	49 f7 ea             	imul   r10
    5d2a:	49 f7 2a             	imul   QWORD PTR [r10]
    5d2d:	49 0f af fa          	imul   rdi,r10
    5d31:	49 69 fa 10 32 54 76 	imul   rdi,r10,0x76543210
    5d38:	49 0f af 3a          	imul   rdi,QWORD PTR [r10]
    5d3c:	49 69 3a 10 32 54 76 	imul   rdi,QWORD PTR [r10],0x76543210
    5d43:	49 f7 fa             	idiv   r10
    5d46:	49 f7 3a             	idiv   QWORD PTR [r10]
    5d49:	0f 8d 10 32 54 76    	jge    0x76548f5f
    5d4f:	e9 10 32 54 76       	jmp    0x76548f64
    5d54:	41 ff e2             	jmp    r10
    5d57:	49 8b fa             	mov    rdi,r10
    5d5a:	49 8b 3a             	mov    rdi,QWORD PTR [r10]
    5d5d:	4c 89 17             	mov    QWORD PTR [rdi],r10
    5d60:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    5d67:	09 00 00 
    5d6a:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    5d71:	00 00 00 
    5d74:	e8 10 32 54 76       	call   0x76548f89
    5d79:	41 ff d2             	call   r10
    5d7c:	c3                   	ret    
    5d7d:	49 d1 ea             	shr    r10,1
    5d80:	49 c1 ea 12          	shr    r10,0x12
    5d84:	49 d1 2a             	shr    QWORD PTR [r10],1
    5d87:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    5d8b:	49 f7 da             	neg    r10
    5d8e:	49 f7 1a             	neg    QWORD PTR [r10]
    5d91:	0f 05                	syscall 
    5d93:	41 52                	push   r10
    5d95:	41 ff 32             	push   QWORD PTR [r10]
    5d98:	68 10 32 54 76       	push   0x76543210
    5d9d:	41 5a                	pop    r10
    5d9f:	41 8f 02             	pop    QWORD PTR [r10]
    5da2:	49 ff c2             	inc    r10
    5da5:	49 ff 02             	inc    QWORD PTR [r10]
    5da8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5da9:	f3 e2 12             	repz loop 0x5dbe
    5dac:	e1 12                	loope  0x5dc0
    5dae:	e0 12                	loopne 0x5dc2
    5db0:	f2 41 0f 10 fa       	movsd  xmm7,xmm10
    5db5:	f2 41 0f 10 3a       	movsd  xmm7,QWORD PTR [r10]
    5dba:	f2 49 0f 2d fa       	cvtsd2si rdi,xmm10
    5dbf:	f2 49 0f 2d 3a       	cvtsd2si rdi,QWORD PTR [r10]
    5dc4:	f2 49 0f 2a fa       	cvtsi2sd xmm7,r10
    5dc9:	f2 41 0f 2a 3a       	cvtsi2sd xmm7,DWORD PTR [r10]
    5dce:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5dd4:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5ddb:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    5de2:	49 2b fb             	sub    rdi,r11
    5de5:	49 29 3b             	sub    QWORD PTR [r11],rdi
    5de8:	4c 2b 1f             	sub    r11,QWORD PTR [rdi]
    5deb:	49 f7 eb             	imul   r11
    5dee:	49 f7 2b             	imul   QWORD PTR [r11]
    5df1:	49 0f af fb          	imul   rdi,r11
    5df5:	49 69 fb 10 32 54 76 	imul   rdi,r11,0x76543210
    5dfc:	49 0f af 3b          	imul   rdi,QWORD PTR [r11]
    5e00:	49 69 3b 10 32 54 76 	imul   rdi,QWORD PTR [r11],0x76543210
    5e07:	49 f7 fb             	idiv   r11
    5e0a:	49 f7 3b             	idiv   QWORD PTR [r11]
    5e0d:	0f 8d 10 32 54 76    	jge    0x76549023
    5e13:	e9 10 32 54 76       	jmp    0x76549028
    5e18:	41 ff e3             	jmp    r11
    5e1b:	49 8b fb             	mov    rdi,r11
    5e1e:	49 8b 3b             	mov    rdi,QWORD PTR [r11]
    5e21:	4c 89 1f             	mov    QWORD PTR [rdi],r11
    5e24:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    5e2b:	09 00 00 
    5e2e:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    5e35:	00 00 00 
    5e38:	e8 10 32 54 76       	call   0x7654904d
    5e3d:	41 ff d3             	call   r11
    5e40:	c3                   	ret    
    5e41:	49 d1 eb             	shr    r11,1
    5e44:	49 c1 eb 12          	shr    r11,0x12
    5e48:	49 d1 2b             	shr    QWORD PTR [r11],1
    5e4b:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    5e4f:	49 f7 db             	neg    r11
    5e52:	49 f7 1b             	neg    QWORD PTR [r11]
    5e55:	0f 05                	syscall 
    5e57:	41 53                	push   r11
    5e59:	41 ff 33             	push   QWORD PTR [r11]
    5e5c:	68 10 32 54 76       	push   0x76543210
    5e61:	41 5b                	pop    r11
    5e63:	41 8f 03             	pop    QWORD PTR [r11]
    5e66:	49 ff c3             	inc    r11
    5e69:	49 ff 03             	inc    QWORD PTR [r11]
    5e6c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5e6d:	f3 e2 12             	repz loop 0x5e82
    5e70:	e1 12                	loope  0x5e84
    5e72:	e0 12                	loopne 0x5e86
    5e74:	f2 41 0f 10 fb       	movsd  xmm7,xmm11
    5e79:	f2 41 0f 10 3b       	movsd  xmm7,QWORD PTR [r11]
    5e7e:	f2 49 0f 2d fb       	cvtsd2si rdi,xmm11
    5e83:	f2 49 0f 2d 3b       	cvtsd2si rdi,QWORD PTR [r11]
    5e88:	f2 49 0f 2a fb       	cvtsi2sd xmm7,r11
    5e8d:	f2 41 0f 2a 3b       	cvtsi2sd xmm7,DWORD PTR [r11]
    5e92:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5e98:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5e9f:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    5ea6:	49 2b fc             	sub    rdi,r12
    5ea9:	49 29 3c 24          	sub    QWORD PTR [r12],rdi
    5ead:	4c 2b 27             	sub    r12,QWORD PTR [rdi]
    5eb0:	49 f7 ec             	imul   r12
    5eb3:	49 f7 2c 24          	imul   QWORD PTR [r12]
    5eb7:	49 0f af fc          	imul   rdi,r12
    5ebb:	49 69 fc 10 32 54 76 	imul   rdi,r12,0x76543210
    5ec2:	49 0f af 3c 24       	imul   rdi,QWORD PTR [r12]
    5ec7:	49 69 3c 24 10 32 54 	imul   rdi,QWORD PTR [r12],0x76543210
    5ece:	76 
    5ecf:	49 f7 fc             	idiv   r12
    5ed2:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    5ed6:	0f 8d 10 32 54 76    	jge    0x765490ec
    5edc:	e9 10 32 54 76       	jmp    0x765490f1
    5ee1:	41 ff e4             	jmp    r12
    5ee4:	49 8b fc             	mov    rdi,r12
    5ee7:	49 8b 3c 24          	mov    rdi,QWORD PTR [r12]
    5eeb:	4c 89 27             	mov    QWORD PTR [rdi],r12
    5eee:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    5ef5:	09 00 00 
    5ef8:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    5eff:	00 00 00 
    5f02:	e8 10 32 54 76       	call   0x76549117
    5f07:	41 ff d4             	call   r12
    5f0a:	c3                   	ret    
    5f0b:	49 d1 ec             	shr    r12,1
    5f0e:	49 c1 ec 12          	shr    r12,0x12
    5f12:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    5f16:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    5f1b:	49 f7 dc             	neg    r12
    5f1e:	49 f7 1c 24          	neg    QWORD PTR [r12]
    5f22:	0f 05                	syscall 
    5f24:	41 54                	push   r12
    5f26:	41 ff 34 24          	push   QWORD PTR [r12]
    5f2a:	68 10 32 54 76       	push   0x76543210
    5f2f:	41 5c                	pop    r12
    5f31:	41 8f 04 24          	pop    QWORD PTR [r12]
    5f35:	49 ff c4             	inc    r12
    5f38:	49 ff 04 24          	inc    QWORD PTR [r12]
    5f3c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    5f3d:	f3 e2 12             	repz loop 0x5f52
    5f40:	e1 12                	loope  0x5f54
    5f42:	e0 12                	loopne 0x5f56
    5f44:	f2 41 0f 10 fc       	movsd  xmm7,xmm12
    5f49:	f2 41 0f 10 3c 24    	movsd  xmm7,QWORD PTR [r12]
    5f4f:	f2 49 0f 2d fc       	cvtsd2si rdi,xmm12
    5f54:	f2 49 0f 2d 3c 24    	cvtsd2si rdi,QWORD PTR [r12]
    5f5a:	f2 49 0f 2a fc       	cvtsi2sd xmm7,r12
    5f5f:	f2 41 0f 2a 3c 24    	cvtsi2sd xmm7,DWORD PTR [r12]
    5f65:	48 2d 10 32 54 76    	sub    rax,0x76543210
    5f6b:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    5f72:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    5f79:	49 2b fd             	sub    rdi,r13
    5f7c:	49 29 7d 00          	sub    QWORD PTR [r13+0x0],rdi
    5f80:	4c 2b 2f             	sub    r13,QWORD PTR [rdi]
    5f83:	49 f7 ed             	imul   r13
    5f86:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    5f8a:	49 0f af fd          	imul   rdi,r13
    5f8e:	49 69 fd 10 32 54 76 	imul   rdi,r13,0x76543210
    5f95:	49 0f af 7d 00       	imul   rdi,QWORD PTR [r13+0x0]
    5f9a:	49 69 7d 00 10 32 54 	imul   rdi,QWORD PTR [r13+0x0],0x76543210
    5fa1:	76 
    5fa2:	49 f7 fd             	idiv   r13
    5fa5:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    5fa9:	0f 8d 10 32 54 76    	jge    0x765491bf
    5faf:	e9 10 32 54 76       	jmp    0x765491c4
    5fb4:	41 ff e5             	jmp    r13
    5fb7:	49 8b fd             	mov    rdi,r13
    5fba:	49 8b 7d 00          	mov    rdi,QWORD PTR [r13+0x0]
    5fbe:	4c 89 2f             	mov    QWORD PTR [rdi],r13
    5fc1:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    5fc8:	09 00 00 
    5fcb:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    5fd2:	00 00 00 
    5fd5:	e8 10 32 54 76       	call   0x765491ea
    5fda:	41 ff d5             	call   r13
    5fdd:	c3                   	ret    
    5fde:	49 d1 ed             	shr    r13,1
    5fe1:	49 c1 ed 12          	shr    r13,0x12
    5fe5:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    5fe9:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    5fee:	49 f7 dd             	neg    r13
    5ff1:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    5ff5:	0f 05                	syscall 
    5ff7:	41 55                	push   r13
    5ff9:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    5ffd:	68 10 32 54 76       	push   0x76543210
    6002:	41 5d                	pop    r13
    6004:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    6008:	49 ff c5             	inc    r13
    600b:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    600f:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6010:	f3 e2 12             	repz loop 0x6025
    6013:	e1 12                	loope  0x6027
    6015:	e0 12                	loopne 0x6029
    6017:	f2 41 0f 10 fd       	movsd  xmm7,xmm13
    601c:	f2 41 0f 10 7d 00    	movsd  xmm7,QWORD PTR [r13+0x0]
    6022:	f2 49 0f 2d fd       	cvtsd2si rdi,xmm13
    6027:	f2 49 0f 2d 7d 00    	cvtsd2si rdi,QWORD PTR [r13+0x0]
    602d:	f2 49 0f 2a fd       	cvtsi2sd xmm7,r13
    6032:	f2 41 0f 2a 7d 00    	cvtsi2sd xmm7,DWORD PTR [r13+0x0]
    6038:	48 2d 10 32 54 76    	sub    rax,0x76543210
    603e:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    6045:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    604c:	49 2b fe             	sub    rdi,r14
    604f:	49 29 3e             	sub    QWORD PTR [r14],rdi
    6052:	4c 2b 37             	sub    r14,QWORD PTR [rdi]
    6055:	49 f7 ee             	imul   r14
    6058:	49 f7 2e             	imul   QWORD PTR [r14]
    605b:	49 0f af fe          	imul   rdi,r14
    605f:	49 69 fe 10 32 54 76 	imul   rdi,r14,0x76543210
    6066:	49 0f af 3e          	imul   rdi,QWORD PTR [r14]
    606a:	49 69 3e 10 32 54 76 	imul   rdi,QWORD PTR [r14],0x76543210
    6071:	49 f7 fe             	idiv   r14
    6074:	49 f7 3e             	idiv   QWORD PTR [r14]
    6077:	0f 8d 10 32 54 76    	jge    0x7654928d
    607d:	e9 10 32 54 76       	jmp    0x76549292
    6082:	41 ff e6             	jmp    r14
    6085:	49 8b fe             	mov    rdi,r14
    6088:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
    608b:	4c 89 37             	mov    QWORD PTR [rdi],r14
    608e:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    6095:	09 00 00 
    6098:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    609f:	00 00 00 
    60a2:	e8 10 32 54 76       	call   0x765492b7
    60a7:	41 ff d6             	call   r14
    60aa:	c3                   	ret    
    60ab:	49 d1 ee             	shr    r14,1
    60ae:	49 c1 ee 12          	shr    r14,0x12
    60b2:	49 d1 2e             	shr    QWORD PTR [r14],1
    60b5:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    60b9:	49 f7 de             	neg    r14
    60bc:	49 f7 1e             	neg    QWORD PTR [r14]
    60bf:	0f 05                	syscall 
    60c1:	41 56                	push   r14
    60c3:	41 ff 36             	push   QWORD PTR [r14]
    60c6:	68 10 32 54 76       	push   0x76543210
    60cb:	41 5e                	pop    r14
    60cd:	41 8f 06             	pop    QWORD PTR [r14]
    60d0:	49 ff c6             	inc    r14
    60d3:	49 ff 06             	inc    QWORD PTR [r14]
    60d6:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    60d7:	f3 e2 12             	repz loop 0x60ec
    60da:	e1 12                	loope  0x60ee
    60dc:	e0 12                	loopne 0x60f0
    60de:	f2 41 0f 10 fe       	movsd  xmm7,xmm14
    60e3:	f2 41 0f 10 3e       	movsd  xmm7,QWORD PTR [r14]
    60e8:	f2 49 0f 2d fe       	cvtsd2si rdi,xmm14
    60ed:	f2 49 0f 2d 3e       	cvtsd2si rdi,QWORD PTR [r14]
    60f2:	f2 49 0f 2a fe       	cvtsi2sd xmm7,r14
    60f7:	f2 41 0f 2a 3e       	cvtsi2sd xmm7,DWORD PTR [r14]
    60fc:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6102:	48 81 ef 10 32 54 76 	sub    rdi,0x76543210
    6109:	48 81 2f 10 32 54 76 	sub    QWORD PTR [rdi],0x76543210
    6110:	49 2b ff             	sub    rdi,r15
    6113:	49 29 3f             	sub    QWORD PTR [r15],rdi
    6116:	4c 2b 3f             	sub    r15,QWORD PTR [rdi]
    6119:	49 f7 ef             	imul   r15
    611c:	49 f7 2f             	imul   QWORD PTR [r15]
    611f:	49 0f af ff          	imul   rdi,r15
    6123:	49 69 ff 10 32 54 76 	imul   rdi,r15,0x76543210
    612a:	49 0f af 3f          	imul   rdi,QWORD PTR [r15]
    612e:	49 69 3f 10 32 54 76 	imul   rdi,QWORD PTR [r15],0x76543210
    6135:	49 f7 ff             	idiv   r15
    6138:	49 f7 3f             	idiv   QWORD PTR [r15]
    613b:	0f 8d 10 32 54 76    	jge    0x76549351
    6141:	e9 10 32 54 76       	jmp    0x76549356
    6146:	41 ff e7             	jmp    r15
    6149:	49 8b ff             	mov    rdi,r15
    614c:	49 8b 3f             	mov    rdi,QWORD PTR [r15]
    614f:	4c 89 3f             	mov    QWORD PTR [rdi],r15
    6152:	48 bf 09 21 43 65 87 	movabs rdi,0x98765432109
    6159:	09 00 00 
    615c:	48 bf 10 32 54 76 00 	movabs rdi,0x76543210
    6163:	00 00 00 
    6166:	e8 10 32 54 76       	call   0x7654937b
    616b:	41 ff d7             	call   r15
    616e:	c3                   	ret    
    616f:	49 d1 ef             	shr    r15,1
    6172:	49 c1 ef 12          	shr    r15,0x12
    6176:	49 d1 2f             	shr    QWORD PTR [r15],1
    6179:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    617d:	49 f7 df             	neg    r15
    6180:	49 f7 1f             	neg    QWORD PTR [r15]
    6183:	0f 05                	syscall 
    6185:	41 57                	push   r15
    6187:	41 ff 37             	push   QWORD PTR [r15]
    618a:	68 10 32 54 76       	push   0x76543210
    618f:	41 5f                	pop    r15
    6191:	41 8f 07             	pop    QWORD PTR [r15]
    6194:	49 ff c7             	inc    r15
    6197:	49 ff 07             	inc    QWORD PTR [r15]
    619a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    619b:	f3 e2 12             	repz loop 0x61b0
    619e:	e1 12                	loope  0x61b2
    61a0:	e0 12                	loopne 0x61b4
    61a2:	f2 41 0f 10 ff       	movsd  xmm7,xmm15
    61a7:	f2 41 0f 10 3f       	movsd  xmm7,QWORD PTR [r15]
    61ac:	f2 49 0f 2d ff       	cvtsd2si rdi,xmm15
    61b1:	f2 49 0f 2d 3f       	cvtsd2si rdi,QWORD PTR [r15]
    61b6:	f2 49 0f 2a ff       	cvtsi2sd xmm7,r15
    61bb:	f2 41 0f 2a 3f       	cvtsi2sd xmm7,DWORD PTR [r15]
    61c0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    61c6:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    61cd:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    61d4:	4c 2b c0             	sub    r8,rax
    61d7:	4c 29 00             	sub    QWORD PTR [rax],r8
    61da:	49 2b 00             	sub    rax,QWORD PTR [r8]
    61dd:	48 f7 e8             	imul   rax
    61e0:	48 f7 28             	imul   QWORD PTR [rax]
    61e3:	4c 0f af c0          	imul   r8,rax
    61e7:	4c 69 c0 10 32 54 76 	imul   r8,rax,0x76543210
    61ee:	4c 0f af 00          	imul   r8,QWORD PTR [rax]
    61f2:	4c 69 00 10 32 54 76 	imul   r8,QWORD PTR [rax],0x76543210
    61f9:	48 f7 f8             	idiv   rax
    61fc:	48 f7 38             	idiv   QWORD PTR [rax]
    61ff:	0f 8d 10 32 54 76    	jge    0x76549415
    6205:	e9 10 32 54 76       	jmp    0x7654941a
    620a:	ff e0                	jmp    rax
    620c:	4c 8b c0             	mov    r8,rax
    620f:	4c 8b 00             	mov    r8,QWORD PTR [rax]
    6212:	49 89 00             	mov    QWORD PTR [r8],rax
    6215:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    621c:	09 00 00 
    621f:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    6226:	00 00 00 
    6229:	e8 10 32 54 76       	call   0x7654943e
    622e:	ff d0                	call   rax
    6230:	c3                   	ret    
    6231:	48 d1 e8             	shr    rax,1
    6234:	48 c1 e8 12          	shr    rax,0x12
    6238:	48 d1 28             	shr    QWORD PTR [rax],1
    623b:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    623f:	48 f7 d8             	neg    rax
    6242:	48 f7 18             	neg    QWORD PTR [rax]
    6245:	0f 05                	syscall 
    6247:	50                   	push   rax
    6248:	ff 30                	push   QWORD PTR [rax]
    624a:	68 10 32 54 76       	push   0x76543210
    624f:	58                   	pop    rax
    6250:	8f 00                	pop    QWORD PTR [rax]
    6252:	48 ff c0             	inc    rax
    6255:	48 ff 00             	inc    QWORD PTR [rax]
    6258:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6259:	f3 e2 12             	repz loop 0x626e
    625c:	e1 12                	loope  0x6270
    625e:	e0 12                	loopne 0x6272
    6260:	f2 44 0f 10 c0       	movsd  xmm8,xmm0
    6265:	f2 44 0f 10 00       	movsd  xmm8,QWORD PTR [rax]
    626a:	f2 4c 0f 2d c0       	cvtsd2si r8,xmm0
    626f:	f2 4c 0f 2d 00       	cvtsd2si r8,QWORD PTR [rax]
    6274:	f2 4c 0f 2a c0       	cvtsi2sd xmm8,rax
    6279:	f2 44 0f 2a 00       	cvtsi2sd xmm8,DWORD PTR [rax]
    627e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6284:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    628b:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    6292:	4c 2b c1             	sub    r8,rcx
    6295:	4c 29 01             	sub    QWORD PTR [rcx],r8
    6298:	49 2b 08             	sub    rcx,QWORD PTR [r8]
    629b:	48 f7 e9             	imul   rcx
    629e:	48 f7 29             	imul   QWORD PTR [rcx]
    62a1:	4c 0f af c1          	imul   r8,rcx
    62a5:	4c 69 c1 10 32 54 76 	imul   r8,rcx,0x76543210
    62ac:	4c 0f af 01          	imul   r8,QWORD PTR [rcx]
    62b0:	4c 69 01 10 32 54 76 	imul   r8,QWORD PTR [rcx],0x76543210
    62b7:	48 f7 f9             	idiv   rcx
    62ba:	48 f7 39             	idiv   QWORD PTR [rcx]
    62bd:	0f 8d 10 32 54 76    	jge    0x765494d3
    62c3:	e9 10 32 54 76       	jmp    0x765494d8
    62c8:	ff e1                	jmp    rcx
    62ca:	4c 8b c1             	mov    r8,rcx
    62cd:	4c 8b 01             	mov    r8,QWORD PTR [rcx]
    62d0:	49 89 08             	mov    QWORD PTR [r8],rcx
    62d3:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    62da:	09 00 00 
    62dd:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    62e4:	00 00 00 
    62e7:	e8 10 32 54 76       	call   0x765494fc
    62ec:	ff d1                	call   rcx
    62ee:	c3                   	ret    
    62ef:	48 d1 e9             	shr    rcx,1
    62f2:	48 c1 e9 12          	shr    rcx,0x12
    62f6:	48 d1 29             	shr    QWORD PTR [rcx],1
    62f9:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    62fd:	48 f7 d9             	neg    rcx
    6300:	48 f7 19             	neg    QWORD PTR [rcx]
    6303:	0f 05                	syscall 
    6305:	51                   	push   rcx
    6306:	ff 31                	push   QWORD PTR [rcx]
    6308:	68 10 32 54 76       	push   0x76543210
    630d:	59                   	pop    rcx
    630e:	8f 01                	pop    QWORD PTR [rcx]
    6310:	48 ff c1             	inc    rcx
    6313:	48 ff 01             	inc    QWORD PTR [rcx]
    6316:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6317:	f3 e2 12             	repz loop 0x632c
    631a:	e1 12                	loope  0x632e
    631c:	e0 12                	loopne 0x6330
    631e:	f2 44 0f 10 c1       	movsd  xmm8,xmm1
    6323:	f2 44 0f 10 01       	movsd  xmm8,QWORD PTR [rcx]
    6328:	f2 4c 0f 2d c1       	cvtsd2si r8,xmm1
    632d:	f2 4c 0f 2d 01       	cvtsd2si r8,QWORD PTR [rcx]
    6332:	f2 4c 0f 2a c1       	cvtsi2sd xmm8,rcx
    6337:	f2 44 0f 2a 01       	cvtsi2sd xmm8,DWORD PTR [rcx]
    633c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6342:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    6349:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    6350:	4c 2b c2             	sub    r8,rdx
    6353:	4c 29 02             	sub    QWORD PTR [rdx],r8
    6356:	49 2b 10             	sub    rdx,QWORD PTR [r8]
    6359:	48 f7 ea             	imul   rdx
    635c:	48 f7 2a             	imul   QWORD PTR [rdx]
    635f:	4c 0f af c2          	imul   r8,rdx
    6363:	4c 69 c2 10 32 54 76 	imul   r8,rdx,0x76543210
    636a:	4c 0f af 02          	imul   r8,QWORD PTR [rdx]
    636e:	4c 69 02 10 32 54 76 	imul   r8,QWORD PTR [rdx],0x76543210
    6375:	48 f7 fa             	idiv   rdx
    6378:	48 f7 3a             	idiv   QWORD PTR [rdx]
    637b:	0f 8d 10 32 54 76    	jge    0x76549591
    6381:	e9 10 32 54 76       	jmp    0x76549596
    6386:	ff e2                	jmp    rdx
    6388:	4c 8b c2             	mov    r8,rdx
    638b:	4c 8b 02             	mov    r8,QWORD PTR [rdx]
    638e:	49 89 10             	mov    QWORD PTR [r8],rdx
    6391:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    6398:	09 00 00 
    639b:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    63a2:	00 00 00 
    63a5:	e8 10 32 54 76       	call   0x765495ba
    63aa:	ff d2                	call   rdx
    63ac:	c3                   	ret    
    63ad:	48 d1 ea             	shr    rdx,1
    63b0:	48 c1 ea 12          	shr    rdx,0x12
    63b4:	48 d1 2a             	shr    QWORD PTR [rdx],1
    63b7:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    63bb:	48 f7 da             	neg    rdx
    63be:	48 f7 1a             	neg    QWORD PTR [rdx]
    63c1:	0f 05                	syscall 
    63c3:	52                   	push   rdx
    63c4:	ff 32                	push   QWORD PTR [rdx]
    63c6:	68 10 32 54 76       	push   0x76543210
    63cb:	5a                   	pop    rdx
    63cc:	8f 02                	pop    QWORD PTR [rdx]
    63ce:	48 ff c2             	inc    rdx
    63d1:	48 ff 02             	inc    QWORD PTR [rdx]
    63d4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    63d5:	f3 e2 12             	repz loop 0x63ea
    63d8:	e1 12                	loope  0x63ec
    63da:	e0 12                	loopne 0x63ee
    63dc:	f2 44 0f 10 c2       	movsd  xmm8,xmm2
    63e1:	f2 44 0f 10 02       	movsd  xmm8,QWORD PTR [rdx]
    63e6:	f2 4c 0f 2d c2       	cvtsd2si r8,xmm2
    63eb:	f2 4c 0f 2d 02       	cvtsd2si r8,QWORD PTR [rdx]
    63f0:	f2 4c 0f 2a c2       	cvtsi2sd xmm8,rdx
    63f5:	f2 44 0f 2a 02       	cvtsi2sd xmm8,DWORD PTR [rdx]
    63fa:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6400:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    6407:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    640e:	4c 2b c3             	sub    r8,rbx
    6411:	4c 29 03             	sub    QWORD PTR [rbx],r8
    6414:	49 2b 18             	sub    rbx,QWORD PTR [r8]
    6417:	48 f7 eb             	imul   rbx
    641a:	48 f7 2b             	imul   QWORD PTR [rbx]
    641d:	4c 0f af c3          	imul   r8,rbx
    6421:	4c 69 c3 10 32 54 76 	imul   r8,rbx,0x76543210
    6428:	4c 0f af 03          	imul   r8,QWORD PTR [rbx]
    642c:	4c 69 03 10 32 54 76 	imul   r8,QWORD PTR [rbx],0x76543210
    6433:	48 f7 fb             	idiv   rbx
    6436:	48 f7 3b             	idiv   QWORD PTR [rbx]
    6439:	0f 8d 10 32 54 76    	jge    0x7654964f
    643f:	e9 10 32 54 76       	jmp    0x76549654
    6444:	ff e3                	jmp    rbx
    6446:	4c 8b c3             	mov    r8,rbx
    6449:	4c 8b 03             	mov    r8,QWORD PTR [rbx]
    644c:	49 89 18             	mov    QWORD PTR [r8],rbx
    644f:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    6456:	09 00 00 
    6459:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    6460:	00 00 00 
    6463:	e8 10 32 54 76       	call   0x76549678
    6468:	ff d3                	call   rbx
    646a:	c3                   	ret    
    646b:	48 d1 eb             	shr    rbx,1
    646e:	48 c1 eb 12          	shr    rbx,0x12
    6472:	48 d1 2b             	shr    QWORD PTR [rbx],1
    6475:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    6479:	48 f7 db             	neg    rbx
    647c:	48 f7 1b             	neg    QWORD PTR [rbx]
    647f:	0f 05                	syscall 
    6481:	53                   	push   rbx
    6482:	ff 33                	push   QWORD PTR [rbx]
    6484:	68 10 32 54 76       	push   0x76543210
    6489:	5b                   	pop    rbx
    648a:	8f 03                	pop    QWORD PTR [rbx]
    648c:	48 ff c3             	inc    rbx
    648f:	48 ff 03             	inc    QWORD PTR [rbx]
    6492:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6493:	f3 e2 12             	repz loop 0x64a8
    6496:	e1 12                	loope  0x64aa
    6498:	e0 12                	loopne 0x64ac
    649a:	f2 44 0f 10 c3       	movsd  xmm8,xmm3
    649f:	f2 44 0f 10 03       	movsd  xmm8,QWORD PTR [rbx]
    64a4:	f2 4c 0f 2d c3       	cvtsd2si r8,xmm3
    64a9:	f2 4c 0f 2d 03       	cvtsd2si r8,QWORD PTR [rbx]
    64ae:	f2 4c 0f 2a c3       	cvtsi2sd xmm8,rbx
    64b3:	f2 44 0f 2a 03       	cvtsi2sd xmm8,DWORD PTR [rbx]
    64b8:	48 2d 10 32 54 76    	sub    rax,0x76543210
    64be:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    64c5:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    64cc:	4c 2b c4             	sub    r8,rsp
    64cf:	4c 29 04 24          	sub    QWORD PTR [rsp],r8
    64d3:	49 2b 20             	sub    rsp,QWORD PTR [r8]
    64d6:	48 f7 ec             	imul   rsp
    64d9:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    64dd:	4c 0f af c4          	imul   r8,rsp
    64e1:	4c 69 c4 10 32 54 76 	imul   r8,rsp,0x76543210
    64e8:	4c 0f af 04 24       	imul   r8,QWORD PTR [rsp]
    64ed:	4c 69 04 24 10 32 54 	imul   r8,QWORD PTR [rsp],0x76543210
    64f4:	76 
    64f5:	48 f7 fc             	idiv   rsp
    64f8:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    64fc:	0f 8d 10 32 54 76    	jge    0x76549712
    6502:	e9 10 32 54 76       	jmp    0x76549717
    6507:	ff e4                	jmp    rsp
    6509:	4c 8b c4             	mov    r8,rsp
    650c:	4c 8b 04 24          	mov    r8,QWORD PTR [rsp]
    6510:	49 89 20             	mov    QWORD PTR [r8],rsp
    6513:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    651a:	09 00 00 
    651d:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    6524:	00 00 00 
    6527:	e8 10 32 54 76       	call   0x7654973c
    652c:	ff d4                	call   rsp
    652e:	c3                   	ret    
    652f:	48 d1 ec             	shr    rsp,1
    6532:	48 c1 ec 12          	shr    rsp,0x12
    6536:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    653a:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    653f:	48 f7 dc             	neg    rsp
    6542:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    6546:	0f 05                	syscall 
    6548:	54                   	push   rsp
    6549:	ff 34 24             	push   QWORD PTR [rsp]
    654c:	68 10 32 54 76       	push   0x76543210
    6551:	5c                   	pop    rsp
    6552:	8f 04 24             	pop    QWORD PTR [rsp]
    6555:	48 ff c4             	inc    rsp
    6558:	48 ff 04 24          	inc    QWORD PTR [rsp]
    655c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    655d:	f3 e2 12             	repz loop 0x6572
    6560:	e1 12                	loope  0x6574
    6562:	e0 12                	loopne 0x6576
    6564:	f2 44 0f 10 c4       	movsd  xmm8,xmm4
    6569:	f2 44 0f 10 04 24    	movsd  xmm8,QWORD PTR [rsp]
    656f:	f2 4c 0f 2d c4       	cvtsd2si r8,xmm4
    6574:	f2 4c 0f 2d 04 24    	cvtsd2si r8,QWORD PTR [rsp]
    657a:	f2 4c 0f 2a c4       	cvtsi2sd xmm8,rsp
    657f:	f2 44 0f 2a 04 24    	cvtsi2sd xmm8,DWORD PTR [rsp]
    6585:	48 2d 10 32 54 76    	sub    rax,0x76543210
    658b:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    6592:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    6599:	4c 2b c5             	sub    r8,rbp
    659c:	4c 29 45 00          	sub    QWORD PTR [rbp+0x0],r8
    65a0:	49 2b 28             	sub    rbp,QWORD PTR [r8]
    65a3:	48 f7 ed             	imul   rbp
    65a6:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    65aa:	4c 0f af c5          	imul   r8,rbp
    65ae:	4c 69 c5 10 32 54 76 	imul   r8,rbp,0x76543210
    65b5:	4c 0f af 45 00       	imul   r8,QWORD PTR [rbp+0x0]
    65ba:	4c 69 45 00 10 32 54 	imul   r8,QWORD PTR [rbp+0x0],0x76543210
    65c1:	76 
    65c2:	48 f7 fd             	idiv   rbp
    65c5:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    65c9:	0f 8d 10 32 54 76    	jge    0x765497df
    65cf:	e9 10 32 54 76       	jmp    0x765497e4
    65d4:	ff e5                	jmp    rbp
    65d6:	4c 8b c5             	mov    r8,rbp
    65d9:	4c 8b 45 00          	mov    r8,QWORD PTR [rbp+0x0]
    65dd:	49 89 28             	mov    QWORD PTR [r8],rbp
    65e0:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    65e7:	09 00 00 
    65ea:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    65f1:	00 00 00 
    65f4:	e8 10 32 54 76       	call   0x76549809
    65f9:	ff d5                	call   rbp
    65fb:	c3                   	ret    
    65fc:	48 d1 ed             	shr    rbp,1
    65ff:	48 c1 ed 12          	shr    rbp,0x12
    6603:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    6607:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    660c:	48 f7 dd             	neg    rbp
    660f:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    6613:	0f 05                	syscall 
    6615:	55                   	push   rbp
    6616:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    6619:	68 10 32 54 76       	push   0x76543210
    661e:	5d                   	pop    rbp
    661f:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    6622:	48 ff c5             	inc    rbp
    6625:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    6629:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    662a:	f3 e2 12             	repz loop 0x663f
    662d:	e1 12                	loope  0x6641
    662f:	e0 12                	loopne 0x6643
    6631:	f2 44 0f 10 c5       	movsd  xmm8,xmm5
    6636:	f2 44 0f 10 45 00    	movsd  xmm8,QWORD PTR [rbp+0x0]
    663c:	f2 4c 0f 2d c5       	cvtsd2si r8,xmm5
    6641:	f2 4c 0f 2d 45 00    	cvtsd2si r8,QWORD PTR [rbp+0x0]
    6647:	f2 4c 0f 2a c5       	cvtsi2sd xmm8,rbp
    664c:	f2 44 0f 2a 45 00    	cvtsi2sd xmm8,DWORD PTR [rbp+0x0]
    6652:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6658:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    665f:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    6666:	4c 2b c6             	sub    r8,rsi
    6669:	4c 29 06             	sub    QWORD PTR [rsi],r8
    666c:	49 2b 30             	sub    rsi,QWORD PTR [r8]
    666f:	48 f7 ee             	imul   rsi
    6672:	48 f7 2e             	imul   QWORD PTR [rsi]
    6675:	4c 0f af c6          	imul   r8,rsi
    6679:	4c 69 c6 10 32 54 76 	imul   r8,rsi,0x76543210
    6680:	4c 0f af 06          	imul   r8,QWORD PTR [rsi]
    6684:	4c 69 06 10 32 54 76 	imul   r8,QWORD PTR [rsi],0x76543210
    668b:	48 f7 fe             	idiv   rsi
    668e:	48 f7 3e             	idiv   QWORD PTR [rsi]
    6691:	0f 8d 10 32 54 76    	jge    0x765498a7
    6697:	e9 10 32 54 76       	jmp    0x765498ac
    669c:	ff e6                	jmp    rsi
    669e:	4c 8b c6             	mov    r8,rsi
    66a1:	4c 8b 06             	mov    r8,QWORD PTR [rsi]
    66a4:	49 89 30             	mov    QWORD PTR [r8],rsi
    66a7:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    66ae:	09 00 00 
    66b1:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    66b8:	00 00 00 
    66bb:	e8 10 32 54 76       	call   0x765498d0
    66c0:	ff d6                	call   rsi
    66c2:	c3                   	ret    
    66c3:	48 d1 ee             	shr    rsi,1
    66c6:	48 c1 ee 12          	shr    rsi,0x12
    66ca:	48 d1 2e             	shr    QWORD PTR [rsi],1
    66cd:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    66d1:	48 f7 de             	neg    rsi
    66d4:	48 f7 1e             	neg    QWORD PTR [rsi]
    66d7:	0f 05                	syscall 
    66d9:	56                   	push   rsi
    66da:	ff 36                	push   QWORD PTR [rsi]
    66dc:	68 10 32 54 76       	push   0x76543210
    66e1:	5e                   	pop    rsi
    66e2:	8f 06                	pop    QWORD PTR [rsi]
    66e4:	48 ff c6             	inc    rsi
    66e7:	48 ff 06             	inc    QWORD PTR [rsi]
    66ea:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    66eb:	f3 e2 12             	repz loop 0x6700
    66ee:	e1 12                	loope  0x6702
    66f0:	e0 12                	loopne 0x6704
    66f2:	f2 44 0f 10 c6       	movsd  xmm8,xmm6
    66f7:	f2 44 0f 10 06       	movsd  xmm8,QWORD PTR [rsi]
    66fc:	f2 4c 0f 2d c6       	cvtsd2si r8,xmm6
    6701:	f2 4c 0f 2d 06       	cvtsd2si r8,QWORD PTR [rsi]
    6706:	f2 4c 0f 2a c6       	cvtsi2sd xmm8,rsi
    670b:	f2 44 0f 2a 06       	cvtsi2sd xmm8,DWORD PTR [rsi]
    6710:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6716:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    671d:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    6724:	4c 2b c7             	sub    r8,rdi
    6727:	4c 29 07             	sub    QWORD PTR [rdi],r8
    672a:	49 2b 38             	sub    rdi,QWORD PTR [r8]
    672d:	48 f7 ef             	imul   rdi
    6730:	48 f7 2f             	imul   QWORD PTR [rdi]
    6733:	4c 0f af c7          	imul   r8,rdi
    6737:	4c 69 c7 10 32 54 76 	imul   r8,rdi,0x76543210
    673e:	4c 0f af 07          	imul   r8,QWORD PTR [rdi]
    6742:	4c 69 07 10 32 54 76 	imul   r8,QWORD PTR [rdi],0x76543210
    6749:	48 f7 ff             	idiv   rdi
    674c:	48 f7 3f             	idiv   QWORD PTR [rdi]
    674f:	0f 8d 10 32 54 76    	jge    0x76549965
    6755:	e9 10 32 54 76       	jmp    0x7654996a
    675a:	ff e7                	jmp    rdi
    675c:	4c 8b c7             	mov    r8,rdi
    675f:	4c 8b 07             	mov    r8,QWORD PTR [rdi]
    6762:	49 89 38             	mov    QWORD PTR [r8],rdi
    6765:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    676c:	09 00 00 
    676f:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    6776:	00 00 00 
    6779:	e8 10 32 54 76       	call   0x7654998e
    677e:	ff d7                	call   rdi
    6780:	c3                   	ret    
    6781:	48 d1 ef             	shr    rdi,1
    6784:	48 c1 ef 12          	shr    rdi,0x12
    6788:	48 d1 2f             	shr    QWORD PTR [rdi],1
    678b:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    678f:	48 f7 df             	neg    rdi
    6792:	48 f7 1f             	neg    QWORD PTR [rdi]
    6795:	0f 05                	syscall 
    6797:	57                   	push   rdi
    6798:	ff 37                	push   QWORD PTR [rdi]
    679a:	68 10 32 54 76       	push   0x76543210
    679f:	5f                   	pop    rdi
    67a0:	8f 07                	pop    QWORD PTR [rdi]
    67a2:	48 ff c7             	inc    rdi
    67a5:	48 ff 07             	inc    QWORD PTR [rdi]
    67a8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    67a9:	f3 e2 12             	repz loop 0x67be
    67ac:	e1 12                	loope  0x67c0
    67ae:	e0 12                	loopne 0x67c2
    67b0:	f2 44 0f 10 c7       	movsd  xmm8,xmm7
    67b5:	f2 44 0f 10 07       	movsd  xmm8,QWORD PTR [rdi]
    67ba:	f2 4c 0f 2d c7       	cvtsd2si r8,xmm7
    67bf:	f2 4c 0f 2d 07       	cvtsd2si r8,QWORD PTR [rdi]
    67c4:	f2 4c 0f 2a c7       	cvtsi2sd xmm8,rdi
    67c9:	f2 44 0f 2a 07       	cvtsi2sd xmm8,DWORD PTR [rdi]
    67ce:	48 2d 10 32 54 76    	sub    rax,0x76543210
    67d4:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    67db:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    67e2:	4d 2b c0             	sub    r8,r8
    67e5:	4d 29 00             	sub    QWORD PTR [r8],r8
    67e8:	4d 2b 00             	sub    r8,QWORD PTR [r8]
    67eb:	49 f7 e8             	imul   r8
    67ee:	49 f7 28             	imul   QWORD PTR [r8]
    67f1:	4d 0f af c0          	imul   r8,r8
    67f5:	4d 69 c0 10 32 54 76 	imul   r8,r8,0x76543210
    67fc:	4d 0f af 00          	imul   r8,QWORD PTR [r8]
    6800:	4d 69 00 10 32 54 76 	imul   r8,QWORD PTR [r8],0x76543210
    6807:	49 f7 f8             	idiv   r8
    680a:	49 f7 38             	idiv   QWORD PTR [r8]
    680d:	0f 8d 10 32 54 76    	jge    0x76549a23
    6813:	e9 10 32 54 76       	jmp    0x76549a28
    6818:	41 ff e0             	jmp    r8
    681b:	4d 8b c0             	mov    r8,r8
    681e:	4d 8b 00             	mov    r8,QWORD PTR [r8]
    6821:	4d 89 00             	mov    QWORD PTR [r8],r8
    6824:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    682b:	09 00 00 
    682e:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    6835:	00 00 00 
    6838:	e8 10 32 54 76       	call   0x76549a4d
    683d:	41 ff d0             	call   r8
    6840:	c3                   	ret    
    6841:	49 d1 e8             	shr    r8,1
    6844:	49 c1 e8 12          	shr    r8,0x12
    6848:	49 d1 28             	shr    QWORD PTR [r8],1
    684b:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    684f:	49 f7 d8             	neg    r8
    6852:	49 f7 18             	neg    QWORD PTR [r8]
    6855:	0f 05                	syscall 
    6857:	41 50                	push   r8
    6859:	41 ff 30             	push   QWORD PTR [r8]
    685c:	68 10 32 54 76       	push   0x76543210
    6861:	41 58                	pop    r8
    6863:	41 8f 00             	pop    QWORD PTR [r8]
    6866:	49 ff c0             	inc    r8
    6869:	49 ff 00             	inc    QWORD PTR [r8]
    686c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    686d:	f3 e2 12             	repz loop 0x6882
    6870:	e1 12                	loope  0x6884
    6872:	e0 12                	loopne 0x6886
    6874:	f2 45 0f 10 c0       	movsd  xmm8,xmm8
    6879:	f2 45 0f 10 00       	movsd  xmm8,QWORD PTR [r8]
    687e:	f2 4d 0f 2d c0       	cvtsd2si r8,xmm8
    6883:	f2 4d 0f 2d 00       	cvtsd2si r8,QWORD PTR [r8]
    6888:	f2 4d 0f 2a c0       	cvtsi2sd xmm8,r8
    688d:	f2 45 0f 2a 00       	cvtsi2sd xmm8,DWORD PTR [r8]
    6892:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6898:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    689f:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    68a6:	4d 2b c1             	sub    r8,r9
    68a9:	4d 29 01             	sub    QWORD PTR [r9],r8
    68ac:	4d 2b 08             	sub    r9,QWORD PTR [r8]
    68af:	49 f7 e9             	imul   r9
    68b2:	49 f7 29             	imul   QWORD PTR [r9]
    68b5:	4d 0f af c1          	imul   r8,r9
    68b9:	4d 69 c1 10 32 54 76 	imul   r8,r9,0x76543210
    68c0:	4d 0f af 01          	imul   r8,QWORD PTR [r9]
    68c4:	4d 69 01 10 32 54 76 	imul   r8,QWORD PTR [r9],0x76543210
    68cb:	49 f7 f9             	idiv   r9
    68ce:	49 f7 39             	idiv   QWORD PTR [r9]
    68d1:	0f 8d 10 32 54 76    	jge    0x76549ae7
    68d7:	e9 10 32 54 76       	jmp    0x76549aec
    68dc:	41 ff e1             	jmp    r9
    68df:	4d 8b c1             	mov    r8,r9
    68e2:	4d 8b 01             	mov    r8,QWORD PTR [r9]
    68e5:	4d 89 08             	mov    QWORD PTR [r8],r9
    68e8:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    68ef:	09 00 00 
    68f2:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    68f9:	00 00 00 
    68fc:	e8 10 32 54 76       	call   0x76549b11
    6901:	41 ff d1             	call   r9
    6904:	c3                   	ret    
    6905:	49 d1 e9             	shr    r9,1
    6908:	49 c1 e9 12          	shr    r9,0x12
    690c:	49 d1 29             	shr    QWORD PTR [r9],1
    690f:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    6913:	49 f7 d9             	neg    r9
    6916:	49 f7 19             	neg    QWORD PTR [r9]
    6919:	0f 05                	syscall 
    691b:	41 51                	push   r9
    691d:	41 ff 31             	push   QWORD PTR [r9]
    6920:	68 10 32 54 76       	push   0x76543210
    6925:	41 59                	pop    r9
    6927:	41 8f 01             	pop    QWORD PTR [r9]
    692a:	49 ff c1             	inc    r9
    692d:	49 ff 01             	inc    QWORD PTR [r9]
    6930:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6931:	f3 e2 12             	repz loop 0x6946
    6934:	e1 12                	loope  0x6948
    6936:	e0 12                	loopne 0x694a
    6938:	f2 45 0f 10 c1       	movsd  xmm8,xmm9
    693d:	f2 45 0f 10 01       	movsd  xmm8,QWORD PTR [r9]
    6942:	f2 4d 0f 2d c1       	cvtsd2si r8,xmm9
    6947:	f2 4d 0f 2d 01       	cvtsd2si r8,QWORD PTR [r9]
    694c:	f2 4d 0f 2a c1       	cvtsi2sd xmm8,r9
    6951:	f2 45 0f 2a 01       	cvtsi2sd xmm8,DWORD PTR [r9]
    6956:	48 2d 10 32 54 76    	sub    rax,0x76543210
    695c:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    6963:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    696a:	4d 2b c2             	sub    r8,r10
    696d:	4d 29 02             	sub    QWORD PTR [r10],r8
    6970:	4d 2b 10             	sub    r10,QWORD PTR [r8]
    6973:	49 f7 ea             	imul   r10
    6976:	49 f7 2a             	imul   QWORD PTR [r10]
    6979:	4d 0f af c2          	imul   r8,r10
    697d:	4d 69 c2 10 32 54 76 	imul   r8,r10,0x76543210
    6984:	4d 0f af 02          	imul   r8,QWORD PTR [r10]
    6988:	4d 69 02 10 32 54 76 	imul   r8,QWORD PTR [r10],0x76543210
    698f:	49 f7 fa             	idiv   r10
    6992:	49 f7 3a             	idiv   QWORD PTR [r10]
    6995:	0f 8d 10 32 54 76    	jge    0x76549bab
    699b:	e9 10 32 54 76       	jmp    0x76549bb0
    69a0:	41 ff e2             	jmp    r10
    69a3:	4d 8b c2             	mov    r8,r10
    69a6:	4d 8b 02             	mov    r8,QWORD PTR [r10]
    69a9:	4d 89 10             	mov    QWORD PTR [r8],r10
    69ac:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    69b3:	09 00 00 
    69b6:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    69bd:	00 00 00 
    69c0:	e8 10 32 54 76       	call   0x76549bd5
    69c5:	41 ff d2             	call   r10
    69c8:	c3                   	ret    
    69c9:	49 d1 ea             	shr    r10,1
    69cc:	49 c1 ea 12          	shr    r10,0x12
    69d0:	49 d1 2a             	shr    QWORD PTR [r10],1
    69d3:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    69d7:	49 f7 da             	neg    r10
    69da:	49 f7 1a             	neg    QWORD PTR [r10]
    69dd:	0f 05                	syscall 
    69df:	41 52                	push   r10
    69e1:	41 ff 32             	push   QWORD PTR [r10]
    69e4:	68 10 32 54 76       	push   0x76543210
    69e9:	41 5a                	pop    r10
    69eb:	41 8f 02             	pop    QWORD PTR [r10]
    69ee:	49 ff c2             	inc    r10
    69f1:	49 ff 02             	inc    QWORD PTR [r10]
    69f4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    69f5:	f3 e2 12             	repz loop 0x6a0a
    69f8:	e1 12                	loope  0x6a0c
    69fa:	e0 12                	loopne 0x6a0e
    69fc:	f2 45 0f 10 c2       	movsd  xmm8,xmm10
    6a01:	f2 45 0f 10 02       	movsd  xmm8,QWORD PTR [r10]
    6a06:	f2 4d 0f 2d c2       	cvtsd2si r8,xmm10
    6a0b:	f2 4d 0f 2d 02       	cvtsd2si r8,QWORD PTR [r10]
    6a10:	f2 4d 0f 2a c2       	cvtsi2sd xmm8,r10
    6a15:	f2 45 0f 2a 02       	cvtsi2sd xmm8,DWORD PTR [r10]
    6a1a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6a20:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    6a27:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    6a2e:	4d 2b c3             	sub    r8,r11
    6a31:	4d 29 03             	sub    QWORD PTR [r11],r8
    6a34:	4d 2b 18             	sub    r11,QWORD PTR [r8]
    6a37:	49 f7 eb             	imul   r11
    6a3a:	49 f7 2b             	imul   QWORD PTR [r11]
    6a3d:	4d 0f af c3          	imul   r8,r11
    6a41:	4d 69 c3 10 32 54 76 	imul   r8,r11,0x76543210
    6a48:	4d 0f af 03          	imul   r8,QWORD PTR [r11]
    6a4c:	4d 69 03 10 32 54 76 	imul   r8,QWORD PTR [r11],0x76543210
    6a53:	49 f7 fb             	idiv   r11
    6a56:	49 f7 3b             	idiv   QWORD PTR [r11]
    6a59:	0f 8d 10 32 54 76    	jge    0x76549c6f
    6a5f:	e9 10 32 54 76       	jmp    0x76549c74
    6a64:	41 ff e3             	jmp    r11
    6a67:	4d 8b c3             	mov    r8,r11
    6a6a:	4d 8b 03             	mov    r8,QWORD PTR [r11]
    6a6d:	4d 89 18             	mov    QWORD PTR [r8],r11
    6a70:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    6a77:	09 00 00 
    6a7a:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    6a81:	00 00 00 
    6a84:	e8 10 32 54 76       	call   0x76549c99
    6a89:	41 ff d3             	call   r11
    6a8c:	c3                   	ret    
    6a8d:	49 d1 eb             	shr    r11,1
    6a90:	49 c1 eb 12          	shr    r11,0x12
    6a94:	49 d1 2b             	shr    QWORD PTR [r11],1
    6a97:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    6a9b:	49 f7 db             	neg    r11
    6a9e:	49 f7 1b             	neg    QWORD PTR [r11]
    6aa1:	0f 05                	syscall 
    6aa3:	41 53                	push   r11
    6aa5:	41 ff 33             	push   QWORD PTR [r11]
    6aa8:	68 10 32 54 76       	push   0x76543210
    6aad:	41 5b                	pop    r11
    6aaf:	41 8f 03             	pop    QWORD PTR [r11]
    6ab2:	49 ff c3             	inc    r11
    6ab5:	49 ff 03             	inc    QWORD PTR [r11]
    6ab8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6ab9:	f3 e2 12             	repz loop 0x6ace
    6abc:	e1 12                	loope  0x6ad0
    6abe:	e0 12                	loopne 0x6ad2
    6ac0:	f2 45 0f 10 c3       	movsd  xmm8,xmm11
    6ac5:	f2 45 0f 10 03       	movsd  xmm8,QWORD PTR [r11]
    6aca:	f2 4d 0f 2d c3       	cvtsd2si r8,xmm11
    6acf:	f2 4d 0f 2d 03       	cvtsd2si r8,QWORD PTR [r11]
    6ad4:	f2 4d 0f 2a c3       	cvtsi2sd xmm8,r11
    6ad9:	f2 45 0f 2a 03       	cvtsi2sd xmm8,DWORD PTR [r11]
    6ade:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6ae4:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    6aeb:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    6af2:	4d 2b c4             	sub    r8,r12
    6af5:	4d 29 04 24          	sub    QWORD PTR [r12],r8
    6af9:	4d 2b 20             	sub    r12,QWORD PTR [r8]
    6afc:	49 f7 ec             	imul   r12
    6aff:	49 f7 2c 24          	imul   QWORD PTR [r12]
    6b03:	4d 0f af c4          	imul   r8,r12
    6b07:	4d 69 c4 10 32 54 76 	imul   r8,r12,0x76543210
    6b0e:	4d 0f af 04 24       	imul   r8,QWORD PTR [r12]
    6b13:	4d 69 04 24 10 32 54 	imul   r8,QWORD PTR [r12],0x76543210
    6b1a:	76 
    6b1b:	49 f7 fc             	idiv   r12
    6b1e:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    6b22:	0f 8d 10 32 54 76    	jge    0x76549d38
    6b28:	e9 10 32 54 76       	jmp    0x76549d3d
    6b2d:	41 ff e4             	jmp    r12
    6b30:	4d 8b c4             	mov    r8,r12
    6b33:	4d 8b 04 24          	mov    r8,QWORD PTR [r12]
    6b37:	4d 89 20             	mov    QWORD PTR [r8],r12
    6b3a:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    6b41:	09 00 00 
    6b44:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    6b4b:	00 00 00 
    6b4e:	e8 10 32 54 76       	call   0x76549d63
    6b53:	41 ff d4             	call   r12
    6b56:	c3                   	ret    
    6b57:	49 d1 ec             	shr    r12,1
    6b5a:	49 c1 ec 12          	shr    r12,0x12
    6b5e:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    6b62:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    6b67:	49 f7 dc             	neg    r12
    6b6a:	49 f7 1c 24          	neg    QWORD PTR [r12]
    6b6e:	0f 05                	syscall 
    6b70:	41 54                	push   r12
    6b72:	41 ff 34 24          	push   QWORD PTR [r12]
    6b76:	68 10 32 54 76       	push   0x76543210
    6b7b:	41 5c                	pop    r12
    6b7d:	41 8f 04 24          	pop    QWORD PTR [r12]
    6b81:	49 ff c4             	inc    r12
    6b84:	49 ff 04 24          	inc    QWORD PTR [r12]
    6b88:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6b89:	f3 e2 12             	repz loop 0x6b9e
    6b8c:	e1 12                	loope  0x6ba0
    6b8e:	e0 12                	loopne 0x6ba2
    6b90:	f2 45 0f 10 c4       	movsd  xmm8,xmm12
    6b95:	f2 45 0f 10 04 24    	movsd  xmm8,QWORD PTR [r12]
    6b9b:	f2 4d 0f 2d c4       	cvtsd2si r8,xmm12
    6ba0:	f2 4d 0f 2d 04 24    	cvtsd2si r8,QWORD PTR [r12]
    6ba6:	f2 4d 0f 2a c4       	cvtsi2sd xmm8,r12
    6bab:	f2 45 0f 2a 04 24    	cvtsi2sd xmm8,DWORD PTR [r12]
    6bb1:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6bb7:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    6bbe:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    6bc5:	4d 2b c5             	sub    r8,r13
    6bc8:	4d 29 45 00          	sub    QWORD PTR [r13+0x0],r8
    6bcc:	4d 2b 28             	sub    r13,QWORD PTR [r8]
    6bcf:	49 f7 ed             	imul   r13
    6bd2:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    6bd6:	4d 0f af c5          	imul   r8,r13
    6bda:	4d 69 c5 10 32 54 76 	imul   r8,r13,0x76543210
    6be1:	4d 0f af 45 00       	imul   r8,QWORD PTR [r13+0x0]
    6be6:	4d 69 45 00 10 32 54 	imul   r8,QWORD PTR [r13+0x0],0x76543210
    6bed:	76 
    6bee:	49 f7 fd             	idiv   r13
    6bf1:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    6bf5:	0f 8d 10 32 54 76    	jge    0x76549e0b
    6bfb:	e9 10 32 54 76       	jmp    0x76549e10
    6c00:	41 ff e5             	jmp    r13
    6c03:	4d 8b c5             	mov    r8,r13
    6c06:	4d 8b 45 00          	mov    r8,QWORD PTR [r13+0x0]
    6c0a:	4d 89 28             	mov    QWORD PTR [r8],r13
    6c0d:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    6c14:	09 00 00 
    6c17:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    6c1e:	00 00 00 
    6c21:	e8 10 32 54 76       	call   0x76549e36
    6c26:	41 ff d5             	call   r13
    6c29:	c3                   	ret    
    6c2a:	49 d1 ed             	shr    r13,1
    6c2d:	49 c1 ed 12          	shr    r13,0x12
    6c31:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    6c35:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    6c3a:	49 f7 dd             	neg    r13
    6c3d:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    6c41:	0f 05                	syscall 
    6c43:	41 55                	push   r13
    6c45:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    6c49:	68 10 32 54 76       	push   0x76543210
    6c4e:	41 5d                	pop    r13
    6c50:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    6c54:	49 ff c5             	inc    r13
    6c57:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    6c5b:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6c5c:	f3 e2 12             	repz loop 0x6c71
    6c5f:	e1 12                	loope  0x6c73
    6c61:	e0 12                	loopne 0x6c75
    6c63:	f2 45 0f 10 c5       	movsd  xmm8,xmm13
    6c68:	f2 45 0f 10 45 00    	movsd  xmm8,QWORD PTR [r13+0x0]
    6c6e:	f2 4d 0f 2d c5       	cvtsd2si r8,xmm13
    6c73:	f2 4d 0f 2d 45 00    	cvtsd2si r8,QWORD PTR [r13+0x0]
    6c79:	f2 4d 0f 2a c5       	cvtsi2sd xmm8,r13
    6c7e:	f2 45 0f 2a 45 00    	cvtsi2sd xmm8,DWORD PTR [r13+0x0]
    6c84:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6c8a:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    6c91:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    6c98:	4d 2b c6             	sub    r8,r14
    6c9b:	4d 29 06             	sub    QWORD PTR [r14],r8
    6c9e:	4d 2b 30             	sub    r14,QWORD PTR [r8]
    6ca1:	49 f7 ee             	imul   r14
    6ca4:	49 f7 2e             	imul   QWORD PTR [r14]
    6ca7:	4d 0f af c6          	imul   r8,r14
    6cab:	4d 69 c6 10 32 54 76 	imul   r8,r14,0x76543210
    6cb2:	4d 0f af 06          	imul   r8,QWORD PTR [r14]
    6cb6:	4d 69 06 10 32 54 76 	imul   r8,QWORD PTR [r14],0x76543210
    6cbd:	49 f7 fe             	idiv   r14
    6cc0:	49 f7 3e             	idiv   QWORD PTR [r14]
    6cc3:	0f 8d 10 32 54 76    	jge    0x76549ed9
    6cc9:	e9 10 32 54 76       	jmp    0x76549ede
    6cce:	41 ff e6             	jmp    r14
    6cd1:	4d 8b c6             	mov    r8,r14
    6cd4:	4d 8b 06             	mov    r8,QWORD PTR [r14]
    6cd7:	4d 89 30             	mov    QWORD PTR [r8],r14
    6cda:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    6ce1:	09 00 00 
    6ce4:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    6ceb:	00 00 00 
    6cee:	e8 10 32 54 76       	call   0x76549f03
    6cf3:	41 ff d6             	call   r14
    6cf6:	c3                   	ret    
    6cf7:	49 d1 ee             	shr    r14,1
    6cfa:	49 c1 ee 12          	shr    r14,0x12
    6cfe:	49 d1 2e             	shr    QWORD PTR [r14],1
    6d01:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    6d05:	49 f7 de             	neg    r14
    6d08:	49 f7 1e             	neg    QWORD PTR [r14]
    6d0b:	0f 05                	syscall 
    6d0d:	41 56                	push   r14
    6d0f:	41 ff 36             	push   QWORD PTR [r14]
    6d12:	68 10 32 54 76       	push   0x76543210
    6d17:	41 5e                	pop    r14
    6d19:	41 8f 06             	pop    QWORD PTR [r14]
    6d1c:	49 ff c6             	inc    r14
    6d1f:	49 ff 06             	inc    QWORD PTR [r14]
    6d22:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6d23:	f3 e2 12             	repz loop 0x6d38
    6d26:	e1 12                	loope  0x6d3a
    6d28:	e0 12                	loopne 0x6d3c
    6d2a:	f2 45 0f 10 c6       	movsd  xmm8,xmm14
    6d2f:	f2 45 0f 10 06       	movsd  xmm8,QWORD PTR [r14]
    6d34:	f2 4d 0f 2d c6       	cvtsd2si r8,xmm14
    6d39:	f2 4d 0f 2d 06       	cvtsd2si r8,QWORD PTR [r14]
    6d3e:	f2 4d 0f 2a c6       	cvtsi2sd xmm8,r14
    6d43:	f2 45 0f 2a 06       	cvtsi2sd xmm8,DWORD PTR [r14]
    6d48:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6d4e:	49 81 e8 10 32 54 76 	sub    r8,0x76543210
    6d55:	49 81 28 10 32 54 76 	sub    QWORD PTR [r8],0x76543210
    6d5c:	4d 2b c7             	sub    r8,r15
    6d5f:	4d 29 07             	sub    QWORD PTR [r15],r8
    6d62:	4d 2b 38             	sub    r15,QWORD PTR [r8]
    6d65:	49 f7 ef             	imul   r15
    6d68:	49 f7 2f             	imul   QWORD PTR [r15]
    6d6b:	4d 0f af c7          	imul   r8,r15
    6d6f:	4d 69 c7 10 32 54 76 	imul   r8,r15,0x76543210
    6d76:	4d 0f af 07          	imul   r8,QWORD PTR [r15]
    6d7a:	4d 69 07 10 32 54 76 	imul   r8,QWORD PTR [r15],0x76543210
    6d81:	49 f7 ff             	idiv   r15
    6d84:	49 f7 3f             	idiv   QWORD PTR [r15]
    6d87:	0f 8d 10 32 54 76    	jge    0x76549f9d
    6d8d:	e9 10 32 54 76       	jmp    0x76549fa2
    6d92:	41 ff e7             	jmp    r15
    6d95:	4d 8b c7             	mov    r8,r15
    6d98:	4d 8b 07             	mov    r8,QWORD PTR [r15]
    6d9b:	4d 89 38             	mov    QWORD PTR [r8],r15
    6d9e:	49 b8 09 21 43 65 87 	movabs r8,0x98765432109
    6da5:	09 00 00 
    6da8:	49 b8 10 32 54 76 00 	movabs r8,0x76543210
    6daf:	00 00 00 
    6db2:	e8 10 32 54 76       	call   0x76549fc7
    6db7:	41 ff d7             	call   r15
    6dba:	c3                   	ret    
    6dbb:	49 d1 ef             	shr    r15,1
    6dbe:	49 c1 ef 12          	shr    r15,0x12
    6dc2:	49 d1 2f             	shr    QWORD PTR [r15],1
    6dc5:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    6dc9:	49 f7 df             	neg    r15
    6dcc:	49 f7 1f             	neg    QWORD PTR [r15]
    6dcf:	0f 05                	syscall 
    6dd1:	41 57                	push   r15
    6dd3:	41 ff 37             	push   QWORD PTR [r15]
    6dd6:	68 10 32 54 76       	push   0x76543210
    6ddb:	41 5f                	pop    r15
    6ddd:	41 8f 07             	pop    QWORD PTR [r15]
    6de0:	49 ff c7             	inc    r15
    6de3:	49 ff 07             	inc    QWORD PTR [r15]
    6de6:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6de7:	f3 e2 12             	repz loop 0x6dfc
    6dea:	e1 12                	loope  0x6dfe
    6dec:	e0 12                	loopne 0x6e00
    6dee:	f2 45 0f 10 c7       	movsd  xmm8,xmm15
    6df3:	f2 45 0f 10 07       	movsd  xmm8,QWORD PTR [r15]
    6df8:	f2 4d 0f 2d c7       	cvtsd2si r8,xmm15
    6dfd:	f2 4d 0f 2d 07       	cvtsd2si r8,QWORD PTR [r15]
    6e02:	f2 4d 0f 2a c7       	cvtsi2sd xmm8,r15
    6e07:	f2 45 0f 2a 07       	cvtsi2sd xmm8,DWORD PTR [r15]
    6e0c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6e12:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    6e19:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    6e20:	4c 2b c8             	sub    r9,rax
    6e23:	4c 29 08             	sub    QWORD PTR [rax],r9
    6e26:	49 2b 01             	sub    rax,QWORD PTR [r9]
    6e29:	48 f7 e8             	imul   rax
    6e2c:	48 f7 28             	imul   QWORD PTR [rax]
    6e2f:	4c 0f af c8          	imul   r9,rax
    6e33:	4c 69 c8 10 32 54 76 	imul   r9,rax,0x76543210
    6e3a:	4c 0f af 08          	imul   r9,QWORD PTR [rax]
    6e3e:	4c 69 08 10 32 54 76 	imul   r9,QWORD PTR [rax],0x76543210
    6e45:	48 f7 f8             	idiv   rax
    6e48:	48 f7 38             	idiv   QWORD PTR [rax]
    6e4b:	0f 8d 10 32 54 76    	jge    0x7654a061
    6e51:	e9 10 32 54 76       	jmp    0x7654a066
    6e56:	ff e0                	jmp    rax
    6e58:	4c 8b c8             	mov    r9,rax
    6e5b:	4c 8b 08             	mov    r9,QWORD PTR [rax]
    6e5e:	49 89 01             	mov    QWORD PTR [r9],rax
    6e61:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    6e68:	09 00 00 
    6e6b:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    6e72:	00 00 00 
    6e75:	e8 10 32 54 76       	call   0x7654a08a
    6e7a:	ff d0                	call   rax
    6e7c:	c3                   	ret    
    6e7d:	48 d1 e8             	shr    rax,1
    6e80:	48 c1 e8 12          	shr    rax,0x12
    6e84:	48 d1 28             	shr    QWORD PTR [rax],1
    6e87:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    6e8b:	48 f7 d8             	neg    rax
    6e8e:	48 f7 18             	neg    QWORD PTR [rax]
    6e91:	0f 05                	syscall 
    6e93:	50                   	push   rax
    6e94:	ff 30                	push   QWORD PTR [rax]
    6e96:	68 10 32 54 76       	push   0x76543210
    6e9b:	58                   	pop    rax
    6e9c:	8f 00                	pop    QWORD PTR [rax]
    6e9e:	48 ff c0             	inc    rax
    6ea1:	48 ff 00             	inc    QWORD PTR [rax]
    6ea4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6ea5:	f3 e2 12             	repz loop 0x6eba
    6ea8:	e1 12                	loope  0x6ebc
    6eaa:	e0 12                	loopne 0x6ebe
    6eac:	f2 44 0f 10 c8       	movsd  xmm9,xmm0
    6eb1:	f2 44 0f 10 08       	movsd  xmm9,QWORD PTR [rax]
    6eb6:	f2 4c 0f 2d c8       	cvtsd2si r9,xmm0
    6ebb:	f2 4c 0f 2d 08       	cvtsd2si r9,QWORD PTR [rax]
    6ec0:	f2 4c 0f 2a c8       	cvtsi2sd xmm9,rax
    6ec5:	f2 44 0f 2a 08       	cvtsi2sd xmm9,DWORD PTR [rax]
    6eca:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6ed0:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    6ed7:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    6ede:	4c 2b c9             	sub    r9,rcx
    6ee1:	4c 29 09             	sub    QWORD PTR [rcx],r9
    6ee4:	49 2b 09             	sub    rcx,QWORD PTR [r9]
    6ee7:	48 f7 e9             	imul   rcx
    6eea:	48 f7 29             	imul   QWORD PTR [rcx]
    6eed:	4c 0f af c9          	imul   r9,rcx
    6ef1:	4c 69 c9 10 32 54 76 	imul   r9,rcx,0x76543210
    6ef8:	4c 0f af 09          	imul   r9,QWORD PTR [rcx]
    6efc:	4c 69 09 10 32 54 76 	imul   r9,QWORD PTR [rcx],0x76543210
    6f03:	48 f7 f9             	idiv   rcx
    6f06:	48 f7 39             	idiv   QWORD PTR [rcx]
    6f09:	0f 8d 10 32 54 76    	jge    0x7654a11f
    6f0f:	e9 10 32 54 76       	jmp    0x7654a124
    6f14:	ff e1                	jmp    rcx
    6f16:	4c 8b c9             	mov    r9,rcx
    6f19:	4c 8b 09             	mov    r9,QWORD PTR [rcx]
    6f1c:	49 89 09             	mov    QWORD PTR [r9],rcx
    6f1f:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    6f26:	09 00 00 
    6f29:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    6f30:	00 00 00 
    6f33:	e8 10 32 54 76       	call   0x7654a148
    6f38:	ff d1                	call   rcx
    6f3a:	c3                   	ret    
    6f3b:	48 d1 e9             	shr    rcx,1
    6f3e:	48 c1 e9 12          	shr    rcx,0x12
    6f42:	48 d1 29             	shr    QWORD PTR [rcx],1
    6f45:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    6f49:	48 f7 d9             	neg    rcx
    6f4c:	48 f7 19             	neg    QWORD PTR [rcx]
    6f4f:	0f 05                	syscall 
    6f51:	51                   	push   rcx
    6f52:	ff 31                	push   QWORD PTR [rcx]
    6f54:	68 10 32 54 76       	push   0x76543210
    6f59:	59                   	pop    rcx
    6f5a:	8f 01                	pop    QWORD PTR [rcx]
    6f5c:	48 ff c1             	inc    rcx
    6f5f:	48 ff 01             	inc    QWORD PTR [rcx]
    6f62:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    6f63:	f3 e2 12             	repz loop 0x6f78
    6f66:	e1 12                	loope  0x6f7a
    6f68:	e0 12                	loopne 0x6f7c
    6f6a:	f2 44 0f 10 c9       	movsd  xmm9,xmm1
    6f6f:	f2 44 0f 10 09       	movsd  xmm9,QWORD PTR [rcx]
    6f74:	f2 4c 0f 2d c9       	cvtsd2si r9,xmm1
    6f79:	f2 4c 0f 2d 09       	cvtsd2si r9,QWORD PTR [rcx]
    6f7e:	f2 4c 0f 2a c9       	cvtsi2sd xmm9,rcx
    6f83:	f2 44 0f 2a 09       	cvtsi2sd xmm9,DWORD PTR [rcx]
    6f88:	48 2d 10 32 54 76    	sub    rax,0x76543210
    6f8e:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    6f95:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    6f9c:	4c 2b ca             	sub    r9,rdx
    6f9f:	4c 29 0a             	sub    QWORD PTR [rdx],r9
    6fa2:	49 2b 11             	sub    rdx,QWORD PTR [r9]
    6fa5:	48 f7 ea             	imul   rdx
    6fa8:	48 f7 2a             	imul   QWORD PTR [rdx]
    6fab:	4c 0f af ca          	imul   r9,rdx
    6faf:	4c 69 ca 10 32 54 76 	imul   r9,rdx,0x76543210
    6fb6:	4c 0f af 0a          	imul   r9,QWORD PTR [rdx]
    6fba:	4c 69 0a 10 32 54 76 	imul   r9,QWORD PTR [rdx],0x76543210
    6fc1:	48 f7 fa             	idiv   rdx
    6fc4:	48 f7 3a             	idiv   QWORD PTR [rdx]
    6fc7:	0f 8d 10 32 54 76    	jge    0x7654a1dd
    6fcd:	e9 10 32 54 76       	jmp    0x7654a1e2
    6fd2:	ff e2                	jmp    rdx
    6fd4:	4c 8b ca             	mov    r9,rdx
    6fd7:	4c 8b 0a             	mov    r9,QWORD PTR [rdx]
    6fda:	49 89 11             	mov    QWORD PTR [r9],rdx
    6fdd:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    6fe4:	09 00 00 
    6fe7:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    6fee:	00 00 00 
    6ff1:	e8 10 32 54 76       	call   0x7654a206
    6ff6:	ff d2                	call   rdx
    6ff8:	c3                   	ret    
    6ff9:	48 d1 ea             	shr    rdx,1
    6ffc:	48 c1 ea 12          	shr    rdx,0x12
    7000:	48 d1 2a             	shr    QWORD PTR [rdx],1
    7003:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    7007:	48 f7 da             	neg    rdx
    700a:	48 f7 1a             	neg    QWORD PTR [rdx]
    700d:	0f 05                	syscall 
    700f:	52                   	push   rdx
    7010:	ff 32                	push   QWORD PTR [rdx]
    7012:	68 10 32 54 76       	push   0x76543210
    7017:	5a                   	pop    rdx
    7018:	8f 02                	pop    QWORD PTR [rdx]
    701a:	48 ff c2             	inc    rdx
    701d:	48 ff 02             	inc    QWORD PTR [rdx]
    7020:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7021:	f3 e2 12             	repz loop 0x7036
    7024:	e1 12                	loope  0x7038
    7026:	e0 12                	loopne 0x703a
    7028:	f2 44 0f 10 ca       	movsd  xmm9,xmm2
    702d:	f2 44 0f 10 0a       	movsd  xmm9,QWORD PTR [rdx]
    7032:	f2 4c 0f 2d ca       	cvtsd2si r9,xmm2
    7037:	f2 4c 0f 2d 0a       	cvtsd2si r9,QWORD PTR [rdx]
    703c:	f2 4c 0f 2a ca       	cvtsi2sd xmm9,rdx
    7041:	f2 44 0f 2a 0a       	cvtsi2sd xmm9,DWORD PTR [rdx]
    7046:	48 2d 10 32 54 76    	sub    rax,0x76543210
    704c:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    7053:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    705a:	4c 2b cb             	sub    r9,rbx
    705d:	4c 29 0b             	sub    QWORD PTR [rbx],r9
    7060:	49 2b 19             	sub    rbx,QWORD PTR [r9]
    7063:	48 f7 eb             	imul   rbx
    7066:	48 f7 2b             	imul   QWORD PTR [rbx]
    7069:	4c 0f af cb          	imul   r9,rbx
    706d:	4c 69 cb 10 32 54 76 	imul   r9,rbx,0x76543210
    7074:	4c 0f af 0b          	imul   r9,QWORD PTR [rbx]
    7078:	4c 69 0b 10 32 54 76 	imul   r9,QWORD PTR [rbx],0x76543210
    707f:	48 f7 fb             	idiv   rbx
    7082:	48 f7 3b             	idiv   QWORD PTR [rbx]
    7085:	0f 8d 10 32 54 76    	jge    0x7654a29b
    708b:	e9 10 32 54 76       	jmp    0x7654a2a0
    7090:	ff e3                	jmp    rbx
    7092:	4c 8b cb             	mov    r9,rbx
    7095:	4c 8b 0b             	mov    r9,QWORD PTR [rbx]
    7098:	49 89 19             	mov    QWORD PTR [r9],rbx
    709b:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    70a2:	09 00 00 
    70a5:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    70ac:	00 00 00 
    70af:	e8 10 32 54 76       	call   0x7654a2c4
    70b4:	ff d3                	call   rbx
    70b6:	c3                   	ret    
    70b7:	48 d1 eb             	shr    rbx,1
    70ba:	48 c1 eb 12          	shr    rbx,0x12
    70be:	48 d1 2b             	shr    QWORD PTR [rbx],1
    70c1:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    70c5:	48 f7 db             	neg    rbx
    70c8:	48 f7 1b             	neg    QWORD PTR [rbx]
    70cb:	0f 05                	syscall 
    70cd:	53                   	push   rbx
    70ce:	ff 33                	push   QWORD PTR [rbx]
    70d0:	68 10 32 54 76       	push   0x76543210
    70d5:	5b                   	pop    rbx
    70d6:	8f 03                	pop    QWORD PTR [rbx]
    70d8:	48 ff c3             	inc    rbx
    70db:	48 ff 03             	inc    QWORD PTR [rbx]
    70de:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    70df:	f3 e2 12             	repz loop 0x70f4
    70e2:	e1 12                	loope  0x70f6
    70e4:	e0 12                	loopne 0x70f8
    70e6:	f2 44 0f 10 cb       	movsd  xmm9,xmm3
    70eb:	f2 44 0f 10 0b       	movsd  xmm9,QWORD PTR [rbx]
    70f0:	f2 4c 0f 2d cb       	cvtsd2si r9,xmm3
    70f5:	f2 4c 0f 2d 0b       	cvtsd2si r9,QWORD PTR [rbx]
    70fa:	f2 4c 0f 2a cb       	cvtsi2sd xmm9,rbx
    70ff:	f2 44 0f 2a 0b       	cvtsi2sd xmm9,DWORD PTR [rbx]
    7104:	48 2d 10 32 54 76    	sub    rax,0x76543210
    710a:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    7111:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    7118:	4c 2b cc             	sub    r9,rsp
    711b:	4c 29 0c 24          	sub    QWORD PTR [rsp],r9
    711f:	49 2b 21             	sub    rsp,QWORD PTR [r9]
    7122:	48 f7 ec             	imul   rsp
    7125:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    7129:	4c 0f af cc          	imul   r9,rsp
    712d:	4c 69 cc 10 32 54 76 	imul   r9,rsp,0x76543210
    7134:	4c 0f af 0c 24       	imul   r9,QWORD PTR [rsp]
    7139:	4c 69 0c 24 10 32 54 	imul   r9,QWORD PTR [rsp],0x76543210
    7140:	76 
    7141:	48 f7 fc             	idiv   rsp
    7144:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    7148:	0f 8d 10 32 54 76    	jge    0x7654a35e
    714e:	e9 10 32 54 76       	jmp    0x7654a363
    7153:	ff e4                	jmp    rsp
    7155:	4c 8b cc             	mov    r9,rsp
    7158:	4c 8b 0c 24          	mov    r9,QWORD PTR [rsp]
    715c:	49 89 21             	mov    QWORD PTR [r9],rsp
    715f:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    7166:	09 00 00 
    7169:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    7170:	00 00 00 
    7173:	e8 10 32 54 76       	call   0x7654a388
    7178:	ff d4                	call   rsp
    717a:	c3                   	ret    
    717b:	48 d1 ec             	shr    rsp,1
    717e:	48 c1 ec 12          	shr    rsp,0x12
    7182:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    7186:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    718b:	48 f7 dc             	neg    rsp
    718e:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    7192:	0f 05                	syscall 
    7194:	54                   	push   rsp
    7195:	ff 34 24             	push   QWORD PTR [rsp]
    7198:	68 10 32 54 76       	push   0x76543210
    719d:	5c                   	pop    rsp
    719e:	8f 04 24             	pop    QWORD PTR [rsp]
    71a1:	48 ff c4             	inc    rsp
    71a4:	48 ff 04 24          	inc    QWORD PTR [rsp]
    71a8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    71a9:	f3 e2 12             	repz loop 0x71be
    71ac:	e1 12                	loope  0x71c0
    71ae:	e0 12                	loopne 0x71c2
    71b0:	f2 44 0f 10 cc       	movsd  xmm9,xmm4
    71b5:	f2 44 0f 10 0c 24    	movsd  xmm9,QWORD PTR [rsp]
    71bb:	f2 4c 0f 2d cc       	cvtsd2si r9,xmm4
    71c0:	f2 4c 0f 2d 0c 24    	cvtsd2si r9,QWORD PTR [rsp]
    71c6:	f2 4c 0f 2a cc       	cvtsi2sd xmm9,rsp
    71cb:	f2 44 0f 2a 0c 24    	cvtsi2sd xmm9,DWORD PTR [rsp]
    71d1:	48 2d 10 32 54 76    	sub    rax,0x76543210
    71d7:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    71de:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    71e5:	4c 2b cd             	sub    r9,rbp
    71e8:	4c 29 4d 00          	sub    QWORD PTR [rbp+0x0],r9
    71ec:	49 2b 29             	sub    rbp,QWORD PTR [r9]
    71ef:	48 f7 ed             	imul   rbp
    71f2:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    71f6:	4c 0f af cd          	imul   r9,rbp
    71fa:	4c 69 cd 10 32 54 76 	imul   r9,rbp,0x76543210
    7201:	4c 0f af 4d 00       	imul   r9,QWORD PTR [rbp+0x0]
    7206:	4c 69 4d 00 10 32 54 	imul   r9,QWORD PTR [rbp+0x0],0x76543210
    720d:	76 
    720e:	48 f7 fd             	idiv   rbp
    7211:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    7215:	0f 8d 10 32 54 76    	jge    0x7654a42b
    721b:	e9 10 32 54 76       	jmp    0x7654a430
    7220:	ff e5                	jmp    rbp
    7222:	4c 8b cd             	mov    r9,rbp
    7225:	4c 8b 4d 00          	mov    r9,QWORD PTR [rbp+0x0]
    7229:	49 89 29             	mov    QWORD PTR [r9],rbp
    722c:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    7233:	09 00 00 
    7236:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    723d:	00 00 00 
    7240:	e8 10 32 54 76       	call   0x7654a455
    7245:	ff d5                	call   rbp
    7247:	c3                   	ret    
    7248:	48 d1 ed             	shr    rbp,1
    724b:	48 c1 ed 12          	shr    rbp,0x12
    724f:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    7253:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    7258:	48 f7 dd             	neg    rbp
    725b:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    725f:	0f 05                	syscall 
    7261:	55                   	push   rbp
    7262:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    7265:	68 10 32 54 76       	push   0x76543210
    726a:	5d                   	pop    rbp
    726b:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    726e:	48 ff c5             	inc    rbp
    7271:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    7275:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7276:	f3 e2 12             	repz loop 0x728b
    7279:	e1 12                	loope  0x728d
    727b:	e0 12                	loopne 0x728f
    727d:	f2 44 0f 10 cd       	movsd  xmm9,xmm5
    7282:	f2 44 0f 10 4d 00    	movsd  xmm9,QWORD PTR [rbp+0x0]
    7288:	f2 4c 0f 2d cd       	cvtsd2si r9,xmm5
    728d:	f2 4c 0f 2d 4d 00    	cvtsd2si r9,QWORD PTR [rbp+0x0]
    7293:	f2 4c 0f 2a cd       	cvtsi2sd xmm9,rbp
    7298:	f2 44 0f 2a 4d 00    	cvtsi2sd xmm9,DWORD PTR [rbp+0x0]
    729e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    72a4:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    72ab:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    72b2:	4c 2b ce             	sub    r9,rsi
    72b5:	4c 29 0e             	sub    QWORD PTR [rsi],r9
    72b8:	49 2b 31             	sub    rsi,QWORD PTR [r9]
    72bb:	48 f7 ee             	imul   rsi
    72be:	48 f7 2e             	imul   QWORD PTR [rsi]
    72c1:	4c 0f af ce          	imul   r9,rsi
    72c5:	4c 69 ce 10 32 54 76 	imul   r9,rsi,0x76543210
    72cc:	4c 0f af 0e          	imul   r9,QWORD PTR [rsi]
    72d0:	4c 69 0e 10 32 54 76 	imul   r9,QWORD PTR [rsi],0x76543210
    72d7:	48 f7 fe             	idiv   rsi
    72da:	48 f7 3e             	idiv   QWORD PTR [rsi]
    72dd:	0f 8d 10 32 54 76    	jge    0x7654a4f3
    72e3:	e9 10 32 54 76       	jmp    0x7654a4f8
    72e8:	ff e6                	jmp    rsi
    72ea:	4c 8b ce             	mov    r9,rsi
    72ed:	4c 8b 0e             	mov    r9,QWORD PTR [rsi]
    72f0:	49 89 31             	mov    QWORD PTR [r9],rsi
    72f3:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    72fa:	09 00 00 
    72fd:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    7304:	00 00 00 
    7307:	e8 10 32 54 76       	call   0x7654a51c
    730c:	ff d6                	call   rsi
    730e:	c3                   	ret    
    730f:	48 d1 ee             	shr    rsi,1
    7312:	48 c1 ee 12          	shr    rsi,0x12
    7316:	48 d1 2e             	shr    QWORD PTR [rsi],1
    7319:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    731d:	48 f7 de             	neg    rsi
    7320:	48 f7 1e             	neg    QWORD PTR [rsi]
    7323:	0f 05                	syscall 
    7325:	56                   	push   rsi
    7326:	ff 36                	push   QWORD PTR [rsi]
    7328:	68 10 32 54 76       	push   0x76543210
    732d:	5e                   	pop    rsi
    732e:	8f 06                	pop    QWORD PTR [rsi]
    7330:	48 ff c6             	inc    rsi
    7333:	48 ff 06             	inc    QWORD PTR [rsi]
    7336:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7337:	f3 e2 12             	repz loop 0x734c
    733a:	e1 12                	loope  0x734e
    733c:	e0 12                	loopne 0x7350
    733e:	f2 44 0f 10 ce       	movsd  xmm9,xmm6
    7343:	f2 44 0f 10 0e       	movsd  xmm9,QWORD PTR [rsi]
    7348:	f2 4c 0f 2d ce       	cvtsd2si r9,xmm6
    734d:	f2 4c 0f 2d 0e       	cvtsd2si r9,QWORD PTR [rsi]
    7352:	f2 4c 0f 2a ce       	cvtsi2sd xmm9,rsi
    7357:	f2 44 0f 2a 0e       	cvtsi2sd xmm9,DWORD PTR [rsi]
    735c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7362:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    7369:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    7370:	4c 2b cf             	sub    r9,rdi
    7373:	4c 29 0f             	sub    QWORD PTR [rdi],r9
    7376:	49 2b 39             	sub    rdi,QWORD PTR [r9]
    7379:	48 f7 ef             	imul   rdi
    737c:	48 f7 2f             	imul   QWORD PTR [rdi]
    737f:	4c 0f af cf          	imul   r9,rdi
    7383:	4c 69 cf 10 32 54 76 	imul   r9,rdi,0x76543210
    738a:	4c 0f af 0f          	imul   r9,QWORD PTR [rdi]
    738e:	4c 69 0f 10 32 54 76 	imul   r9,QWORD PTR [rdi],0x76543210
    7395:	48 f7 ff             	idiv   rdi
    7398:	48 f7 3f             	idiv   QWORD PTR [rdi]
    739b:	0f 8d 10 32 54 76    	jge    0x7654a5b1
    73a1:	e9 10 32 54 76       	jmp    0x7654a5b6
    73a6:	ff e7                	jmp    rdi
    73a8:	4c 8b cf             	mov    r9,rdi
    73ab:	4c 8b 0f             	mov    r9,QWORD PTR [rdi]
    73ae:	49 89 39             	mov    QWORD PTR [r9],rdi
    73b1:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    73b8:	09 00 00 
    73bb:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    73c2:	00 00 00 
    73c5:	e8 10 32 54 76       	call   0x7654a5da
    73ca:	ff d7                	call   rdi
    73cc:	c3                   	ret    
    73cd:	48 d1 ef             	shr    rdi,1
    73d0:	48 c1 ef 12          	shr    rdi,0x12
    73d4:	48 d1 2f             	shr    QWORD PTR [rdi],1
    73d7:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    73db:	48 f7 df             	neg    rdi
    73de:	48 f7 1f             	neg    QWORD PTR [rdi]
    73e1:	0f 05                	syscall 
    73e3:	57                   	push   rdi
    73e4:	ff 37                	push   QWORD PTR [rdi]
    73e6:	68 10 32 54 76       	push   0x76543210
    73eb:	5f                   	pop    rdi
    73ec:	8f 07                	pop    QWORD PTR [rdi]
    73ee:	48 ff c7             	inc    rdi
    73f1:	48 ff 07             	inc    QWORD PTR [rdi]
    73f4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    73f5:	f3 e2 12             	repz loop 0x740a
    73f8:	e1 12                	loope  0x740c
    73fa:	e0 12                	loopne 0x740e
    73fc:	f2 44 0f 10 cf       	movsd  xmm9,xmm7
    7401:	f2 44 0f 10 0f       	movsd  xmm9,QWORD PTR [rdi]
    7406:	f2 4c 0f 2d cf       	cvtsd2si r9,xmm7
    740b:	f2 4c 0f 2d 0f       	cvtsd2si r9,QWORD PTR [rdi]
    7410:	f2 4c 0f 2a cf       	cvtsi2sd xmm9,rdi
    7415:	f2 44 0f 2a 0f       	cvtsi2sd xmm9,DWORD PTR [rdi]
    741a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7420:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    7427:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    742e:	4d 2b c8             	sub    r9,r8
    7431:	4d 29 08             	sub    QWORD PTR [r8],r9
    7434:	4d 2b 01             	sub    r8,QWORD PTR [r9]
    7437:	49 f7 e8             	imul   r8
    743a:	49 f7 28             	imul   QWORD PTR [r8]
    743d:	4d 0f af c8          	imul   r9,r8
    7441:	4d 69 c8 10 32 54 76 	imul   r9,r8,0x76543210
    7448:	4d 0f af 08          	imul   r9,QWORD PTR [r8]
    744c:	4d 69 08 10 32 54 76 	imul   r9,QWORD PTR [r8],0x76543210
    7453:	49 f7 f8             	idiv   r8
    7456:	49 f7 38             	idiv   QWORD PTR [r8]
    7459:	0f 8d 10 32 54 76    	jge    0x7654a66f
    745f:	e9 10 32 54 76       	jmp    0x7654a674
    7464:	41 ff e0             	jmp    r8
    7467:	4d 8b c8             	mov    r9,r8
    746a:	4d 8b 08             	mov    r9,QWORD PTR [r8]
    746d:	4d 89 01             	mov    QWORD PTR [r9],r8
    7470:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    7477:	09 00 00 
    747a:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    7481:	00 00 00 
    7484:	e8 10 32 54 76       	call   0x7654a699
    7489:	41 ff d0             	call   r8
    748c:	c3                   	ret    
    748d:	49 d1 e8             	shr    r8,1
    7490:	49 c1 e8 12          	shr    r8,0x12
    7494:	49 d1 28             	shr    QWORD PTR [r8],1
    7497:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    749b:	49 f7 d8             	neg    r8
    749e:	49 f7 18             	neg    QWORD PTR [r8]
    74a1:	0f 05                	syscall 
    74a3:	41 50                	push   r8
    74a5:	41 ff 30             	push   QWORD PTR [r8]
    74a8:	68 10 32 54 76       	push   0x76543210
    74ad:	41 58                	pop    r8
    74af:	41 8f 00             	pop    QWORD PTR [r8]
    74b2:	49 ff c0             	inc    r8
    74b5:	49 ff 00             	inc    QWORD PTR [r8]
    74b8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    74b9:	f3 e2 12             	repz loop 0x74ce
    74bc:	e1 12                	loope  0x74d0
    74be:	e0 12                	loopne 0x74d2
    74c0:	f2 45 0f 10 c8       	movsd  xmm9,xmm8
    74c5:	f2 45 0f 10 08       	movsd  xmm9,QWORD PTR [r8]
    74ca:	f2 4d 0f 2d c8       	cvtsd2si r9,xmm8
    74cf:	f2 4d 0f 2d 08       	cvtsd2si r9,QWORD PTR [r8]
    74d4:	f2 4d 0f 2a c8       	cvtsi2sd xmm9,r8
    74d9:	f2 45 0f 2a 08       	cvtsi2sd xmm9,DWORD PTR [r8]
    74de:	48 2d 10 32 54 76    	sub    rax,0x76543210
    74e4:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    74eb:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    74f2:	4d 2b c9             	sub    r9,r9
    74f5:	4d 29 09             	sub    QWORD PTR [r9],r9
    74f8:	4d 2b 09             	sub    r9,QWORD PTR [r9]
    74fb:	49 f7 e9             	imul   r9
    74fe:	49 f7 29             	imul   QWORD PTR [r9]
    7501:	4d 0f af c9          	imul   r9,r9
    7505:	4d 69 c9 10 32 54 76 	imul   r9,r9,0x76543210
    750c:	4d 0f af 09          	imul   r9,QWORD PTR [r9]
    7510:	4d 69 09 10 32 54 76 	imul   r9,QWORD PTR [r9],0x76543210
    7517:	49 f7 f9             	idiv   r9
    751a:	49 f7 39             	idiv   QWORD PTR [r9]
    751d:	0f 8d 10 32 54 76    	jge    0x7654a733
    7523:	e9 10 32 54 76       	jmp    0x7654a738
    7528:	41 ff e1             	jmp    r9
    752b:	4d 8b c9             	mov    r9,r9
    752e:	4d 8b 09             	mov    r9,QWORD PTR [r9]
    7531:	4d 89 09             	mov    QWORD PTR [r9],r9
    7534:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    753b:	09 00 00 
    753e:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    7545:	00 00 00 
    7548:	e8 10 32 54 76       	call   0x7654a75d
    754d:	41 ff d1             	call   r9
    7550:	c3                   	ret    
    7551:	49 d1 e9             	shr    r9,1
    7554:	49 c1 e9 12          	shr    r9,0x12
    7558:	49 d1 29             	shr    QWORD PTR [r9],1
    755b:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    755f:	49 f7 d9             	neg    r9
    7562:	49 f7 19             	neg    QWORD PTR [r9]
    7565:	0f 05                	syscall 
    7567:	41 51                	push   r9
    7569:	41 ff 31             	push   QWORD PTR [r9]
    756c:	68 10 32 54 76       	push   0x76543210
    7571:	41 59                	pop    r9
    7573:	41 8f 01             	pop    QWORD PTR [r9]
    7576:	49 ff c1             	inc    r9
    7579:	49 ff 01             	inc    QWORD PTR [r9]
    757c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    757d:	f3 e2 12             	repz loop 0x7592
    7580:	e1 12                	loope  0x7594
    7582:	e0 12                	loopne 0x7596
    7584:	f2 45 0f 10 c9       	movsd  xmm9,xmm9
    7589:	f2 45 0f 10 09       	movsd  xmm9,QWORD PTR [r9]
    758e:	f2 4d 0f 2d c9       	cvtsd2si r9,xmm9
    7593:	f2 4d 0f 2d 09       	cvtsd2si r9,QWORD PTR [r9]
    7598:	f2 4d 0f 2a c9       	cvtsi2sd xmm9,r9
    759d:	f2 45 0f 2a 09       	cvtsi2sd xmm9,DWORD PTR [r9]
    75a2:	48 2d 10 32 54 76    	sub    rax,0x76543210
    75a8:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    75af:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    75b6:	4d 2b ca             	sub    r9,r10
    75b9:	4d 29 0a             	sub    QWORD PTR [r10],r9
    75bc:	4d 2b 11             	sub    r10,QWORD PTR [r9]
    75bf:	49 f7 ea             	imul   r10
    75c2:	49 f7 2a             	imul   QWORD PTR [r10]
    75c5:	4d 0f af ca          	imul   r9,r10
    75c9:	4d 69 ca 10 32 54 76 	imul   r9,r10,0x76543210
    75d0:	4d 0f af 0a          	imul   r9,QWORD PTR [r10]
    75d4:	4d 69 0a 10 32 54 76 	imul   r9,QWORD PTR [r10],0x76543210
    75db:	49 f7 fa             	idiv   r10
    75de:	49 f7 3a             	idiv   QWORD PTR [r10]
    75e1:	0f 8d 10 32 54 76    	jge    0x7654a7f7
    75e7:	e9 10 32 54 76       	jmp    0x7654a7fc
    75ec:	41 ff e2             	jmp    r10
    75ef:	4d 8b ca             	mov    r9,r10
    75f2:	4d 8b 0a             	mov    r9,QWORD PTR [r10]
    75f5:	4d 89 11             	mov    QWORD PTR [r9],r10
    75f8:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    75ff:	09 00 00 
    7602:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    7609:	00 00 00 
    760c:	e8 10 32 54 76       	call   0x7654a821
    7611:	41 ff d2             	call   r10
    7614:	c3                   	ret    
    7615:	49 d1 ea             	shr    r10,1
    7618:	49 c1 ea 12          	shr    r10,0x12
    761c:	49 d1 2a             	shr    QWORD PTR [r10],1
    761f:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    7623:	49 f7 da             	neg    r10
    7626:	49 f7 1a             	neg    QWORD PTR [r10]
    7629:	0f 05                	syscall 
    762b:	41 52                	push   r10
    762d:	41 ff 32             	push   QWORD PTR [r10]
    7630:	68 10 32 54 76       	push   0x76543210
    7635:	41 5a                	pop    r10
    7637:	41 8f 02             	pop    QWORD PTR [r10]
    763a:	49 ff c2             	inc    r10
    763d:	49 ff 02             	inc    QWORD PTR [r10]
    7640:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7641:	f3 e2 12             	repz loop 0x7656
    7644:	e1 12                	loope  0x7658
    7646:	e0 12                	loopne 0x765a
    7648:	f2 45 0f 10 ca       	movsd  xmm9,xmm10
    764d:	f2 45 0f 10 0a       	movsd  xmm9,QWORD PTR [r10]
    7652:	f2 4d 0f 2d ca       	cvtsd2si r9,xmm10
    7657:	f2 4d 0f 2d 0a       	cvtsd2si r9,QWORD PTR [r10]
    765c:	f2 4d 0f 2a ca       	cvtsi2sd xmm9,r10
    7661:	f2 45 0f 2a 0a       	cvtsi2sd xmm9,DWORD PTR [r10]
    7666:	48 2d 10 32 54 76    	sub    rax,0x76543210
    766c:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    7673:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    767a:	4d 2b cb             	sub    r9,r11
    767d:	4d 29 0b             	sub    QWORD PTR [r11],r9
    7680:	4d 2b 19             	sub    r11,QWORD PTR [r9]
    7683:	49 f7 eb             	imul   r11
    7686:	49 f7 2b             	imul   QWORD PTR [r11]
    7689:	4d 0f af cb          	imul   r9,r11
    768d:	4d 69 cb 10 32 54 76 	imul   r9,r11,0x76543210
    7694:	4d 0f af 0b          	imul   r9,QWORD PTR [r11]
    7698:	4d 69 0b 10 32 54 76 	imul   r9,QWORD PTR [r11],0x76543210
    769f:	49 f7 fb             	idiv   r11
    76a2:	49 f7 3b             	idiv   QWORD PTR [r11]
    76a5:	0f 8d 10 32 54 76    	jge    0x7654a8bb
    76ab:	e9 10 32 54 76       	jmp    0x7654a8c0
    76b0:	41 ff e3             	jmp    r11
    76b3:	4d 8b cb             	mov    r9,r11
    76b6:	4d 8b 0b             	mov    r9,QWORD PTR [r11]
    76b9:	4d 89 19             	mov    QWORD PTR [r9],r11
    76bc:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    76c3:	09 00 00 
    76c6:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    76cd:	00 00 00 
    76d0:	e8 10 32 54 76       	call   0x7654a8e5
    76d5:	41 ff d3             	call   r11
    76d8:	c3                   	ret    
    76d9:	49 d1 eb             	shr    r11,1
    76dc:	49 c1 eb 12          	shr    r11,0x12
    76e0:	49 d1 2b             	shr    QWORD PTR [r11],1
    76e3:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    76e7:	49 f7 db             	neg    r11
    76ea:	49 f7 1b             	neg    QWORD PTR [r11]
    76ed:	0f 05                	syscall 
    76ef:	41 53                	push   r11
    76f1:	41 ff 33             	push   QWORD PTR [r11]
    76f4:	68 10 32 54 76       	push   0x76543210
    76f9:	41 5b                	pop    r11
    76fb:	41 8f 03             	pop    QWORD PTR [r11]
    76fe:	49 ff c3             	inc    r11
    7701:	49 ff 03             	inc    QWORD PTR [r11]
    7704:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7705:	f3 e2 12             	repz loop 0x771a
    7708:	e1 12                	loope  0x771c
    770a:	e0 12                	loopne 0x771e
    770c:	f2 45 0f 10 cb       	movsd  xmm9,xmm11
    7711:	f2 45 0f 10 0b       	movsd  xmm9,QWORD PTR [r11]
    7716:	f2 4d 0f 2d cb       	cvtsd2si r9,xmm11
    771b:	f2 4d 0f 2d 0b       	cvtsd2si r9,QWORD PTR [r11]
    7720:	f2 4d 0f 2a cb       	cvtsi2sd xmm9,r11
    7725:	f2 45 0f 2a 0b       	cvtsi2sd xmm9,DWORD PTR [r11]
    772a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7730:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    7737:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    773e:	4d 2b cc             	sub    r9,r12
    7741:	4d 29 0c 24          	sub    QWORD PTR [r12],r9
    7745:	4d 2b 21             	sub    r12,QWORD PTR [r9]
    7748:	49 f7 ec             	imul   r12
    774b:	49 f7 2c 24          	imul   QWORD PTR [r12]
    774f:	4d 0f af cc          	imul   r9,r12
    7753:	4d 69 cc 10 32 54 76 	imul   r9,r12,0x76543210
    775a:	4d 0f af 0c 24       	imul   r9,QWORD PTR [r12]
    775f:	4d 69 0c 24 10 32 54 	imul   r9,QWORD PTR [r12],0x76543210
    7766:	76 
    7767:	49 f7 fc             	idiv   r12
    776a:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    776e:	0f 8d 10 32 54 76    	jge    0x7654a984
    7774:	e9 10 32 54 76       	jmp    0x7654a989
    7779:	41 ff e4             	jmp    r12
    777c:	4d 8b cc             	mov    r9,r12
    777f:	4d 8b 0c 24          	mov    r9,QWORD PTR [r12]
    7783:	4d 89 21             	mov    QWORD PTR [r9],r12
    7786:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    778d:	09 00 00 
    7790:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    7797:	00 00 00 
    779a:	e8 10 32 54 76       	call   0x7654a9af
    779f:	41 ff d4             	call   r12
    77a2:	c3                   	ret    
    77a3:	49 d1 ec             	shr    r12,1
    77a6:	49 c1 ec 12          	shr    r12,0x12
    77aa:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    77ae:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    77b3:	49 f7 dc             	neg    r12
    77b6:	49 f7 1c 24          	neg    QWORD PTR [r12]
    77ba:	0f 05                	syscall 
    77bc:	41 54                	push   r12
    77be:	41 ff 34 24          	push   QWORD PTR [r12]
    77c2:	68 10 32 54 76       	push   0x76543210
    77c7:	41 5c                	pop    r12
    77c9:	41 8f 04 24          	pop    QWORD PTR [r12]
    77cd:	49 ff c4             	inc    r12
    77d0:	49 ff 04 24          	inc    QWORD PTR [r12]
    77d4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    77d5:	f3 e2 12             	repz loop 0x77ea
    77d8:	e1 12                	loope  0x77ec
    77da:	e0 12                	loopne 0x77ee
    77dc:	f2 45 0f 10 cc       	movsd  xmm9,xmm12
    77e1:	f2 45 0f 10 0c 24    	movsd  xmm9,QWORD PTR [r12]
    77e7:	f2 4d 0f 2d cc       	cvtsd2si r9,xmm12
    77ec:	f2 4d 0f 2d 0c 24    	cvtsd2si r9,QWORD PTR [r12]
    77f2:	f2 4d 0f 2a cc       	cvtsi2sd xmm9,r12
    77f7:	f2 45 0f 2a 0c 24    	cvtsi2sd xmm9,DWORD PTR [r12]
    77fd:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7803:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    780a:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    7811:	4d 2b cd             	sub    r9,r13
    7814:	4d 29 4d 00          	sub    QWORD PTR [r13+0x0],r9
    7818:	4d 2b 29             	sub    r13,QWORD PTR [r9]
    781b:	49 f7 ed             	imul   r13
    781e:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    7822:	4d 0f af cd          	imul   r9,r13
    7826:	4d 69 cd 10 32 54 76 	imul   r9,r13,0x76543210
    782d:	4d 0f af 4d 00       	imul   r9,QWORD PTR [r13+0x0]
    7832:	4d 69 4d 00 10 32 54 	imul   r9,QWORD PTR [r13+0x0],0x76543210
    7839:	76 
    783a:	49 f7 fd             	idiv   r13
    783d:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    7841:	0f 8d 10 32 54 76    	jge    0x7654aa57
    7847:	e9 10 32 54 76       	jmp    0x7654aa5c
    784c:	41 ff e5             	jmp    r13
    784f:	4d 8b cd             	mov    r9,r13
    7852:	4d 8b 4d 00          	mov    r9,QWORD PTR [r13+0x0]
    7856:	4d 89 29             	mov    QWORD PTR [r9],r13
    7859:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    7860:	09 00 00 
    7863:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    786a:	00 00 00 
    786d:	e8 10 32 54 76       	call   0x7654aa82
    7872:	41 ff d5             	call   r13
    7875:	c3                   	ret    
    7876:	49 d1 ed             	shr    r13,1
    7879:	49 c1 ed 12          	shr    r13,0x12
    787d:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    7881:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    7886:	49 f7 dd             	neg    r13
    7889:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    788d:	0f 05                	syscall 
    788f:	41 55                	push   r13
    7891:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    7895:	68 10 32 54 76       	push   0x76543210
    789a:	41 5d                	pop    r13
    789c:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    78a0:	49 ff c5             	inc    r13
    78a3:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    78a7:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    78a8:	f3 e2 12             	repz loop 0x78bd
    78ab:	e1 12                	loope  0x78bf
    78ad:	e0 12                	loopne 0x78c1
    78af:	f2 45 0f 10 cd       	movsd  xmm9,xmm13
    78b4:	f2 45 0f 10 4d 00    	movsd  xmm9,QWORD PTR [r13+0x0]
    78ba:	f2 4d 0f 2d cd       	cvtsd2si r9,xmm13
    78bf:	f2 4d 0f 2d 4d 00    	cvtsd2si r9,QWORD PTR [r13+0x0]
    78c5:	f2 4d 0f 2a cd       	cvtsi2sd xmm9,r13
    78ca:	f2 45 0f 2a 4d 00    	cvtsi2sd xmm9,DWORD PTR [r13+0x0]
    78d0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    78d6:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    78dd:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    78e4:	4d 2b ce             	sub    r9,r14
    78e7:	4d 29 0e             	sub    QWORD PTR [r14],r9
    78ea:	4d 2b 31             	sub    r14,QWORD PTR [r9]
    78ed:	49 f7 ee             	imul   r14
    78f0:	49 f7 2e             	imul   QWORD PTR [r14]
    78f3:	4d 0f af ce          	imul   r9,r14
    78f7:	4d 69 ce 10 32 54 76 	imul   r9,r14,0x76543210
    78fe:	4d 0f af 0e          	imul   r9,QWORD PTR [r14]
    7902:	4d 69 0e 10 32 54 76 	imul   r9,QWORD PTR [r14],0x76543210
    7909:	49 f7 fe             	idiv   r14
    790c:	49 f7 3e             	idiv   QWORD PTR [r14]
    790f:	0f 8d 10 32 54 76    	jge    0x7654ab25
    7915:	e9 10 32 54 76       	jmp    0x7654ab2a
    791a:	41 ff e6             	jmp    r14
    791d:	4d 8b ce             	mov    r9,r14
    7920:	4d 8b 0e             	mov    r9,QWORD PTR [r14]
    7923:	4d 89 31             	mov    QWORD PTR [r9],r14
    7926:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    792d:	09 00 00 
    7930:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    7937:	00 00 00 
    793a:	e8 10 32 54 76       	call   0x7654ab4f
    793f:	41 ff d6             	call   r14
    7942:	c3                   	ret    
    7943:	49 d1 ee             	shr    r14,1
    7946:	49 c1 ee 12          	shr    r14,0x12
    794a:	49 d1 2e             	shr    QWORD PTR [r14],1
    794d:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    7951:	49 f7 de             	neg    r14
    7954:	49 f7 1e             	neg    QWORD PTR [r14]
    7957:	0f 05                	syscall 
    7959:	41 56                	push   r14
    795b:	41 ff 36             	push   QWORD PTR [r14]
    795e:	68 10 32 54 76       	push   0x76543210
    7963:	41 5e                	pop    r14
    7965:	41 8f 06             	pop    QWORD PTR [r14]
    7968:	49 ff c6             	inc    r14
    796b:	49 ff 06             	inc    QWORD PTR [r14]
    796e:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    796f:	f3 e2 12             	repz loop 0x7984
    7972:	e1 12                	loope  0x7986
    7974:	e0 12                	loopne 0x7988
    7976:	f2 45 0f 10 ce       	movsd  xmm9,xmm14
    797b:	f2 45 0f 10 0e       	movsd  xmm9,QWORD PTR [r14]
    7980:	f2 4d 0f 2d ce       	cvtsd2si r9,xmm14
    7985:	f2 4d 0f 2d 0e       	cvtsd2si r9,QWORD PTR [r14]
    798a:	f2 4d 0f 2a ce       	cvtsi2sd xmm9,r14
    798f:	f2 45 0f 2a 0e       	cvtsi2sd xmm9,DWORD PTR [r14]
    7994:	48 2d 10 32 54 76    	sub    rax,0x76543210
    799a:	49 81 e9 10 32 54 76 	sub    r9,0x76543210
    79a1:	49 81 29 10 32 54 76 	sub    QWORD PTR [r9],0x76543210
    79a8:	4d 2b cf             	sub    r9,r15
    79ab:	4d 29 0f             	sub    QWORD PTR [r15],r9
    79ae:	4d 2b 39             	sub    r15,QWORD PTR [r9]
    79b1:	49 f7 ef             	imul   r15
    79b4:	49 f7 2f             	imul   QWORD PTR [r15]
    79b7:	4d 0f af cf          	imul   r9,r15
    79bb:	4d 69 cf 10 32 54 76 	imul   r9,r15,0x76543210
    79c2:	4d 0f af 0f          	imul   r9,QWORD PTR [r15]
    79c6:	4d 69 0f 10 32 54 76 	imul   r9,QWORD PTR [r15],0x76543210
    79cd:	49 f7 ff             	idiv   r15
    79d0:	49 f7 3f             	idiv   QWORD PTR [r15]
    79d3:	0f 8d 10 32 54 76    	jge    0x7654abe9
    79d9:	e9 10 32 54 76       	jmp    0x7654abee
    79de:	41 ff e7             	jmp    r15
    79e1:	4d 8b cf             	mov    r9,r15
    79e4:	4d 8b 0f             	mov    r9,QWORD PTR [r15]
    79e7:	4d 89 39             	mov    QWORD PTR [r9],r15
    79ea:	49 b9 09 21 43 65 87 	movabs r9,0x98765432109
    79f1:	09 00 00 
    79f4:	49 b9 10 32 54 76 00 	movabs r9,0x76543210
    79fb:	00 00 00 
    79fe:	e8 10 32 54 76       	call   0x7654ac13
    7a03:	41 ff d7             	call   r15
    7a06:	c3                   	ret    
    7a07:	49 d1 ef             	shr    r15,1
    7a0a:	49 c1 ef 12          	shr    r15,0x12
    7a0e:	49 d1 2f             	shr    QWORD PTR [r15],1
    7a11:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    7a15:	49 f7 df             	neg    r15
    7a18:	49 f7 1f             	neg    QWORD PTR [r15]
    7a1b:	0f 05                	syscall 
    7a1d:	41 57                	push   r15
    7a1f:	41 ff 37             	push   QWORD PTR [r15]
    7a22:	68 10 32 54 76       	push   0x76543210
    7a27:	41 5f                	pop    r15
    7a29:	41 8f 07             	pop    QWORD PTR [r15]
    7a2c:	49 ff c7             	inc    r15
    7a2f:	49 ff 07             	inc    QWORD PTR [r15]
    7a32:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7a33:	f3 e2 12             	repz loop 0x7a48
    7a36:	e1 12                	loope  0x7a4a
    7a38:	e0 12                	loopne 0x7a4c
    7a3a:	f2 45 0f 10 cf       	movsd  xmm9,xmm15
    7a3f:	f2 45 0f 10 0f       	movsd  xmm9,QWORD PTR [r15]
    7a44:	f2 4d 0f 2d cf       	cvtsd2si r9,xmm15
    7a49:	f2 4d 0f 2d 0f       	cvtsd2si r9,QWORD PTR [r15]
    7a4e:	f2 4d 0f 2a cf       	cvtsi2sd xmm9,r15
    7a53:	f2 45 0f 2a 0f       	cvtsi2sd xmm9,DWORD PTR [r15]
    7a58:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7a5e:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    7a65:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    7a6c:	4c 2b d0             	sub    r10,rax
    7a6f:	4c 29 10             	sub    QWORD PTR [rax],r10
    7a72:	49 2b 02             	sub    rax,QWORD PTR [r10]
    7a75:	48 f7 e8             	imul   rax
    7a78:	48 f7 28             	imul   QWORD PTR [rax]
    7a7b:	4c 0f af d0          	imul   r10,rax
    7a7f:	4c 69 d0 10 32 54 76 	imul   r10,rax,0x76543210
    7a86:	4c 0f af 10          	imul   r10,QWORD PTR [rax]
    7a8a:	4c 69 10 10 32 54 76 	imul   r10,QWORD PTR [rax],0x76543210
    7a91:	48 f7 f8             	idiv   rax
    7a94:	48 f7 38             	idiv   QWORD PTR [rax]
    7a97:	0f 8d 10 32 54 76    	jge    0x7654acad
    7a9d:	e9 10 32 54 76       	jmp    0x7654acb2
    7aa2:	ff e0                	jmp    rax
    7aa4:	4c 8b d0             	mov    r10,rax
    7aa7:	4c 8b 10             	mov    r10,QWORD PTR [rax]
    7aaa:	49 89 02             	mov    QWORD PTR [r10],rax
    7aad:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    7ab4:	09 00 00 
    7ab7:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    7abe:	00 00 00 
    7ac1:	e8 10 32 54 76       	call   0x7654acd6
    7ac6:	ff d0                	call   rax
    7ac8:	c3                   	ret    
    7ac9:	48 d1 e8             	shr    rax,1
    7acc:	48 c1 e8 12          	shr    rax,0x12
    7ad0:	48 d1 28             	shr    QWORD PTR [rax],1
    7ad3:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    7ad7:	48 f7 d8             	neg    rax
    7ada:	48 f7 18             	neg    QWORD PTR [rax]
    7add:	0f 05                	syscall 
    7adf:	50                   	push   rax
    7ae0:	ff 30                	push   QWORD PTR [rax]
    7ae2:	68 10 32 54 76       	push   0x76543210
    7ae7:	58                   	pop    rax
    7ae8:	8f 00                	pop    QWORD PTR [rax]
    7aea:	48 ff c0             	inc    rax
    7aed:	48 ff 00             	inc    QWORD PTR [rax]
    7af0:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7af1:	f3 e2 12             	repz loop 0x7b06
    7af4:	e1 12                	loope  0x7b08
    7af6:	e0 12                	loopne 0x7b0a
    7af8:	f2 44 0f 10 d0       	movsd  xmm10,xmm0
    7afd:	f2 44 0f 10 10       	movsd  xmm10,QWORD PTR [rax]
    7b02:	f2 4c 0f 2d d0       	cvtsd2si r10,xmm0
    7b07:	f2 4c 0f 2d 10       	cvtsd2si r10,QWORD PTR [rax]
    7b0c:	f2 4c 0f 2a d0       	cvtsi2sd xmm10,rax
    7b11:	f2 44 0f 2a 10       	cvtsi2sd xmm10,DWORD PTR [rax]
    7b16:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7b1c:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    7b23:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    7b2a:	4c 2b d1             	sub    r10,rcx
    7b2d:	4c 29 11             	sub    QWORD PTR [rcx],r10
    7b30:	49 2b 0a             	sub    rcx,QWORD PTR [r10]
    7b33:	48 f7 e9             	imul   rcx
    7b36:	48 f7 29             	imul   QWORD PTR [rcx]
    7b39:	4c 0f af d1          	imul   r10,rcx
    7b3d:	4c 69 d1 10 32 54 76 	imul   r10,rcx,0x76543210
    7b44:	4c 0f af 11          	imul   r10,QWORD PTR [rcx]
    7b48:	4c 69 11 10 32 54 76 	imul   r10,QWORD PTR [rcx],0x76543210
    7b4f:	48 f7 f9             	idiv   rcx
    7b52:	48 f7 39             	idiv   QWORD PTR [rcx]
    7b55:	0f 8d 10 32 54 76    	jge    0x7654ad6b
    7b5b:	e9 10 32 54 76       	jmp    0x7654ad70
    7b60:	ff e1                	jmp    rcx
    7b62:	4c 8b d1             	mov    r10,rcx
    7b65:	4c 8b 11             	mov    r10,QWORD PTR [rcx]
    7b68:	49 89 0a             	mov    QWORD PTR [r10],rcx
    7b6b:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    7b72:	09 00 00 
    7b75:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    7b7c:	00 00 00 
    7b7f:	e8 10 32 54 76       	call   0x7654ad94
    7b84:	ff d1                	call   rcx
    7b86:	c3                   	ret    
    7b87:	48 d1 e9             	shr    rcx,1
    7b8a:	48 c1 e9 12          	shr    rcx,0x12
    7b8e:	48 d1 29             	shr    QWORD PTR [rcx],1
    7b91:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    7b95:	48 f7 d9             	neg    rcx
    7b98:	48 f7 19             	neg    QWORD PTR [rcx]
    7b9b:	0f 05                	syscall 
    7b9d:	51                   	push   rcx
    7b9e:	ff 31                	push   QWORD PTR [rcx]
    7ba0:	68 10 32 54 76       	push   0x76543210
    7ba5:	59                   	pop    rcx
    7ba6:	8f 01                	pop    QWORD PTR [rcx]
    7ba8:	48 ff c1             	inc    rcx
    7bab:	48 ff 01             	inc    QWORD PTR [rcx]
    7bae:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7baf:	f3 e2 12             	repz loop 0x7bc4
    7bb2:	e1 12                	loope  0x7bc6
    7bb4:	e0 12                	loopne 0x7bc8
    7bb6:	f2 44 0f 10 d1       	movsd  xmm10,xmm1
    7bbb:	f2 44 0f 10 11       	movsd  xmm10,QWORD PTR [rcx]
    7bc0:	f2 4c 0f 2d d1       	cvtsd2si r10,xmm1
    7bc5:	f2 4c 0f 2d 11       	cvtsd2si r10,QWORD PTR [rcx]
    7bca:	f2 4c 0f 2a d1       	cvtsi2sd xmm10,rcx
    7bcf:	f2 44 0f 2a 11       	cvtsi2sd xmm10,DWORD PTR [rcx]
    7bd4:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7bda:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    7be1:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    7be8:	4c 2b d2             	sub    r10,rdx
    7beb:	4c 29 12             	sub    QWORD PTR [rdx],r10
    7bee:	49 2b 12             	sub    rdx,QWORD PTR [r10]
    7bf1:	48 f7 ea             	imul   rdx
    7bf4:	48 f7 2a             	imul   QWORD PTR [rdx]
    7bf7:	4c 0f af d2          	imul   r10,rdx
    7bfb:	4c 69 d2 10 32 54 76 	imul   r10,rdx,0x76543210
    7c02:	4c 0f af 12          	imul   r10,QWORD PTR [rdx]
    7c06:	4c 69 12 10 32 54 76 	imul   r10,QWORD PTR [rdx],0x76543210
    7c0d:	48 f7 fa             	idiv   rdx
    7c10:	48 f7 3a             	idiv   QWORD PTR [rdx]
    7c13:	0f 8d 10 32 54 76    	jge    0x7654ae29
    7c19:	e9 10 32 54 76       	jmp    0x7654ae2e
    7c1e:	ff e2                	jmp    rdx
    7c20:	4c 8b d2             	mov    r10,rdx
    7c23:	4c 8b 12             	mov    r10,QWORD PTR [rdx]
    7c26:	49 89 12             	mov    QWORD PTR [r10],rdx
    7c29:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    7c30:	09 00 00 
    7c33:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    7c3a:	00 00 00 
    7c3d:	e8 10 32 54 76       	call   0x7654ae52
    7c42:	ff d2                	call   rdx
    7c44:	c3                   	ret    
    7c45:	48 d1 ea             	shr    rdx,1
    7c48:	48 c1 ea 12          	shr    rdx,0x12
    7c4c:	48 d1 2a             	shr    QWORD PTR [rdx],1
    7c4f:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    7c53:	48 f7 da             	neg    rdx
    7c56:	48 f7 1a             	neg    QWORD PTR [rdx]
    7c59:	0f 05                	syscall 
    7c5b:	52                   	push   rdx
    7c5c:	ff 32                	push   QWORD PTR [rdx]
    7c5e:	68 10 32 54 76       	push   0x76543210
    7c63:	5a                   	pop    rdx
    7c64:	8f 02                	pop    QWORD PTR [rdx]
    7c66:	48 ff c2             	inc    rdx
    7c69:	48 ff 02             	inc    QWORD PTR [rdx]
    7c6c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7c6d:	f3 e2 12             	repz loop 0x7c82
    7c70:	e1 12                	loope  0x7c84
    7c72:	e0 12                	loopne 0x7c86
    7c74:	f2 44 0f 10 d2       	movsd  xmm10,xmm2
    7c79:	f2 44 0f 10 12       	movsd  xmm10,QWORD PTR [rdx]
    7c7e:	f2 4c 0f 2d d2       	cvtsd2si r10,xmm2
    7c83:	f2 4c 0f 2d 12       	cvtsd2si r10,QWORD PTR [rdx]
    7c88:	f2 4c 0f 2a d2       	cvtsi2sd xmm10,rdx
    7c8d:	f2 44 0f 2a 12       	cvtsi2sd xmm10,DWORD PTR [rdx]
    7c92:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7c98:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    7c9f:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    7ca6:	4c 2b d3             	sub    r10,rbx
    7ca9:	4c 29 13             	sub    QWORD PTR [rbx],r10
    7cac:	49 2b 1a             	sub    rbx,QWORD PTR [r10]
    7caf:	48 f7 eb             	imul   rbx
    7cb2:	48 f7 2b             	imul   QWORD PTR [rbx]
    7cb5:	4c 0f af d3          	imul   r10,rbx
    7cb9:	4c 69 d3 10 32 54 76 	imul   r10,rbx,0x76543210
    7cc0:	4c 0f af 13          	imul   r10,QWORD PTR [rbx]
    7cc4:	4c 69 13 10 32 54 76 	imul   r10,QWORD PTR [rbx],0x76543210
    7ccb:	48 f7 fb             	idiv   rbx
    7cce:	48 f7 3b             	idiv   QWORD PTR [rbx]
    7cd1:	0f 8d 10 32 54 76    	jge    0x7654aee7
    7cd7:	e9 10 32 54 76       	jmp    0x7654aeec
    7cdc:	ff e3                	jmp    rbx
    7cde:	4c 8b d3             	mov    r10,rbx
    7ce1:	4c 8b 13             	mov    r10,QWORD PTR [rbx]
    7ce4:	49 89 1a             	mov    QWORD PTR [r10],rbx
    7ce7:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    7cee:	09 00 00 
    7cf1:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    7cf8:	00 00 00 
    7cfb:	e8 10 32 54 76       	call   0x7654af10
    7d00:	ff d3                	call   rbx
    7d02:	c3                   	ret    
    7d03:	48 d1 eb             	shr    rbx,1
    7d06:	48 c1 eb 12          	shr    rbx,0x12
    7d0a:	48 d1 2b             	shr    QWORD PTR [rbx],1
    7d0d:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    7d11:	48 f7 db             	neg    rbx
    7d14:	48 f7 1b             	neg    QWORD PTR [rbx]
    7d17:	0f 05                	syscall 
    7d19:	53                   	push   rbx
    7d1a:	ff 33                	push   QWORD PTR [rbx]
    7d1c:	68 10 32 54 76       	push   0x76543210
    7d21:	5b                   	pop    rbx
    7d22:	8f 03                	pop    QWORD PTR [rbx]
    7d24:	48 ff c3             	inc    rbx
    7d27:	48 ff 03             	inc    QWORD PTR [rbx]
    7d2a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7d2b:	f3 e2 12             	repz loop 0x7d40
    7d2e:	e1 12                	loope  0x7d42
    7d30:	e0 12                	loopne 0x7d44
    7d32:	f2 44 0f 10 d3       	movsd  xmm10,xmm3
    7d37:	f2 44 0f 10 13       	movsd  xmm10,QWORD PTR [rbx]
    7d3c:	f2 4c 0f 2d d3       	cvtsd2si r10,xmm3
    7d41:	f2 4c 0f 2d 13       	cvtsd2si r10,QWORD PTR [rbx]
    7d46:	f2 4c 0f 2a d3       	cvtsi2sd xmm10,rbx
    7d4b:	f2 44 0f 2a 13       	cvtsi2sd xmm10,DWORD PTR [rbx]
    7d50:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7d56:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    7d5d:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    7d64:	4c 2b d4             	sub    r10,rsp
    7d67:	4c 29 14 24          	sub    QWORD PTR [rsp],r10
    7d6b:	49 2b 22             	sub    rsp,QWORD PTR [r10]
    7d6e:	48 f7 ec             	imul   rsp
    7d71:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    7d75:	4c 0f af d4          	imul   r10,rsp
    7d79:	4c 69 d4 10 32 54 76 	imul   r10,rsp,0x76543210
    7d80:	4c 0f af 14 24       	imul   r10,QWORD PTR [rsp]
    7d85:	4c 69 14 24 10 32 54 	imul   r10,QWORD PTR [rsp],0x76543210
    7d8c:	76 
    7d8d:	48 f7 fc             	idiv   rsp
    7d90:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    7d94:	0f 8d 10 32 54 76    	jge    0x7654afaa
    7d9a:	e9 10 32 54 76       	jmp    0x7654afaf
    7d9f:	ff e4                	jmp    rsp
    7da1:	4c 8b d4             	mov    r10,rsp
    7da4:	4c 8b 14 24          	mov    r10,QWORD PTR [rsp]
    7da8:	49 89 22             	mov    QWORD PTR [r10],rsp
    7dab:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    7db2:	09 00 00 
    7db5:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    7dbc:	00 00 00 
    7dbf:	e8 10 32 54 76       	call   0x7654afd4
    7dc4:	ff d4                	call   rsp
    7dc6:	c3                   	ret    
    7dc7:	48 d1 ec             	shr    rsp,1
    7dca:	48 c1 ec 12          	shr    rsp,0x12
    7dce:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    7dd2:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    7dd7:	48 f7 dc             	neg    rsp
    7dda:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    7dde:	0f 05                	syscall 
    7de0:	54                   	push   rsp
    7de1:	ff 34 24             	push   QWORD PTR [rsp]
    7de4:	68 10 32 54 76       	push   0x76543210
    7de9:	5c                   	pop    rsp
    7dea:	8f 04 24             	pop    QWORD PTR [rsp]
    7ded:	48 ff c4             	inc    rsp
    7df0:	48 ff 04 24          	inc    QWORD PTR [rsp]
    7df4:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7df5:	f3 e2 12             	repz loop 0x7e0a
    7df8:	e1 12                	loope  0x7e0c
    7dfa:	e0 12                	loopne 0x7e0e
    7dfc:	f2 44 0f 10 d4       	movsd  xmm10,xmm4
    7e01:	f2 44 0f 10 14 24    	movsd  xmm10,QWORD PTR [rsp]
    7e07:	f2 4c 0f 2d d4       	cvtsd2si r10,xmm4
    7e0c:	f2 4c 0f 2d 14 24    	cvtsd2si r10,QWORD PTR [rsp]
    7e12:	f2 4c 0f 2a d4       	cvtsi2sd xmm10,rsp
    7e17:	f2 44 0f 2a 14 24    	cvtsi2sd xmm10,DWORD PTR [rsp]
    7e1d:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7e23:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    7e2a:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    7e31:	4c 2b d5             	sub    r10,rbp
    7e34:	4c 29 55 00          	sub    QWORD PTR [rbp+0x0],r10
    7e38:	49 2b 2a             	sub    rbp,QWORD PTR [r10]
    7e3b:	48 f7 ed             	imul   rbp
    7e3e:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    7e42:	4c 0f af d5          	imul   r10,rbp
    7e46:	4c 69 d5 10 32 54 76 	imul   r10,rbp,0x76543210
    7e4d:	4c 0f af 55 00       	imul   r10,QWORD PTR [rbp+0x0]
    7e52:	4c 69 55 00 10 32 54 	imul   r10,QWORD PTR [rbp+0x0],0x76543210
    7e59:	76 
    7e5a:	48 f7 fd             	idiv   rbp
    7e5d:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    7e61:	0f 8d 10 32 54 76    	jge    0x7654b077
    7e67:	e9 10 32 54 76       	jmp    0x7654b07c
    7e6c:	ff e5                	jmp    rbp
    7e6e:	4c 8b d5             	mov    r10,rbp
    7e71:	4c 8b 55 00          	mov    r10,QWORD PTR [rbp+0x0]
    7e75:	49 89 2a             	mov    QWORD PTR [r10],rbp
    7e78:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    7e7f:	09 00 00 
    7e82:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    7e89:	00 00 00 
    7e8c:	e8 10 32 54 76       	call   0x7654b0a1
    7e91:	ff d5                	call   rbp
    7e93:	c3                   	ret    
    7e94:	48 d1 ed             	shr    rbp,1
    7e97:	48 c1 ed 12          	shr    rbp,0x12
    7e9b:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    7e9f:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    7ea4:	48 f7 dd             	neg    rbp
    7ea7:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    7eab:	0f 05                	syscall 
    7ead:	55                   	push   rbp
    7eae:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    7eb1:	68 10 32 54 76       	push   0x76543210
    7eb6:	5d                   	pop    rbp
    7eb7:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    7eba:	48 ff c5             	inc    rbp
    7ebd:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    7ec1:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7ec2:	f3 e2 12             	repz loop 0x7ed7
    7ec5:	e1 12                	loope  0x7ed9
    7ec7:	e0 12                	loopne 0x7edb
    7ec9:	f2 44 0f 10 d5       	movsd  xmm10,xmm5
    7ece:	f2 44 0f 10 55 00    	movsd  xmm10,QWORD PTR [rbp+0x0]
    7ed4:	f2 4c 0f 2d d5       	cvtsd2si r10,xmm5
    7ed9:	f2 4c 0f 2d 55 00    	cvtsd2si r10,QWORD PTR [rbp+0x0]
    7edf:	f2 4c 0f 2a d5       	cvtsi2sd xmm10,rbp
    7ee4:	f2 44 0f 2a 55 00    	cvtsi2sd xmm10,DWORD PTR [rbp+0x0]
    7eea:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7ef0:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    7ef7:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    7efe:	4c 2b d6             	sub    r10,rsi
    7f01:	4c 29 16             	sub    QWORD PTR [rsi],r10
    7f04:	49 2b 32             	sub    rsi,QWORD PTR [r10]
    7f07:	48 f7 ee             	imul   rsi
    7f0a:	48 f7 2e             	imul   QWORD PTR [rsi]
    7f0d:	4c 0f af d6          	imul   r10,rsi
    7f11:	4c 69 d6 10 32 54 76 	imul   r10,rsi,0x76543210
    7f18:	4c 0f af 16          	imul   r10,QWORD PTR [rsi]
    7f1c:	4c 69 16 10 32 54 76 	imul   r10,QWORD PTR [rsi],0x76543210
    7f23:	48 f7 fe             	idiv   rsi
    7f26:	48 f7 3e             	idiv   QWORD PTR [rsi]
    7f29:	0f 8d 10 32 54 76    	jge    0x7654b13f
    7f2f:	e9 10 32 54 76       	jmp    0x7654b144
    7f34:	ff e6                	jmp    rsi
    7f36:	4c 8b d6             	mov    r10,rsi
    7f39:	4c 8b 16             	mov    r10,QWORD PTR [rsi]
    7f3c:	49 89 32             	mov    QWORD PTR [r10],rsi
    7f3f:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    7f46:	09 00 00 
    7f49:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    7f50:	00 00 00 
    7f53:	e8 10 32 54 76       	call   0x7654b168
    7f58:	ff d6                	call   rsi
    7f5a:	c3                   	ret    
    7f5b:	48 d1 ee             	shr    rsi,1
    7f5e:	48 c1 ee 12          	shr    rsi,0x12
    7f62:	48 d1 2e             	shr    QWORD PTR [rsi],1
    7f65:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    7f69:	48 f7 de             	neg    rsi
    7f6c:	48 f7 1e             	neg    QWORD PTR [rsi]
    7f6f:	0f 05                	syscall 
    7f71:	56                   	push   rsi
    7f72:	ff 36                	push   QWORD PTR [rsi]
    7f74:	68 10 32 54 76       	push   0x76543210
    7f79:	5e                   	pop    rsi
    7f7a:	8f 06                	pop    QWORD PTR [rsi]
    7f7c:	48 ff c6             	inc    rsi
    7f7f:	48 ff 06             	inc    QWORD PTR [rsi]
    7f82:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    7f83:	f3 e2 12             	repz loop 0x7f98
    7f86:	e1 12                	loope  0x7f9a
    7f88:	e0 12                	loopne 0x7f9c
    7f8a:	f2 44 0f 10 d6       	movsd  xmm10,xmm6
    7f8f:	f2 44 0f 10 16       	movsd  xmm10,QWORD PTR [rsi]
    7f94:	f2 4c 0f 2d d6       	cvtsd2si r10,xmm6
    7f99:	f2 4c 0f 2d 16       	cvtsd2si r10,QWORD PTR [rsi]
    7f9e:	f2 4c 0f 2a d6       	cvtsi2sd xmm10,rsi
    7fa3:	f2 44 0f 2a 16       	cvtsi2sd xmm10,DWORD PTR [rsi]
    7fa8:	48 2d 10 32 54 76    	sub    rax,0x76543210
    7fae:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    7fb5:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    7fbc:	4c 2b d7             	sub    r10,rdi
    7fbf:	4c 29 17             	sub    QWORD PTR [rdi],r10
    7fc2:	49 2b 3a             	sub    rdi,QWORD PTR [r10]
    7fc5:	48 f7 ef             	imul   rdi
    7fc8:	48 f7 2f             	imul   QWORD PTR [rdi]
    7fcb:	4c 0f af d7          	imul   r10,rdi
    7fcf:	4c 69 d7 10 32 54 76 	imul   r10,rdi,0x76543210
    7fd6:	4c 0f af 17          	imul   r10,QWORD PTR [rdi]
    7fda:	4c 69 17 10 32 54 76 	imul   r10,QWORD PTR [rdi],0x76543210
    7fe1:	48 f7 ff             	idiv   rdi
    7fe4:	48 f7 3f             	idiv   QWORD PTR [rdi]
    7fe7:	0f 8d 10 32 54 76    	jge    0x7654b1fd
    7fed:	e9 10 32 54 76       	jmp    0x7654b202
    7ff2:	ff e7                	jmp    rdi
    7ff4:	4c 8b d7             	mov    r10,rdi
    7ff7:	4c 8b 17             	mov    r10,QWORD PTR [rdi]
    7ffa:	49 89 3a             	mov    QWORD PTR [r10],rdi
    7ffd:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    8004:	09 00 00 
    8007:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    800e:	00 00 00 
    8011:	e8 10 32 54 76       	call   0x7654b226
    8016:	ff d7                	call   rdi
    8018:	c3                   	ret    
    8019:	48 d1 ef             	shr    rdi,1
    801c:	48 c1 ef 12          	shr    rdi,0x12
    8020:	48 d1 2f             	shr    QWORD PTR [rdi],1
    8023:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    8027:	48 f7 df             	neg    rdi
    802a:	48 f7 1f             	neg    QWORD PTR [rdi]
    802d:	0f 05                	syscall 
    802f:	57                   	push   rdi
    8030:	ff 37                	push   QWORD PTR [rdi]
    8032:	68 10 32 54 76       	push   0x76543210
    8037:	5f                   	pop    rdi
    8038:	8f 07                	pop    QWORD PTR [rdi]
    803a:	48 ff c7             	inc    rdi
    803d:	48 ff 07             	inc    QWORD PTR [rdi]
    8040:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8041:	f3 e2 12             	repz loop 0x8056
    8044:	e1 12                	loope  0x8058
    8046:	e0 12                	loopne 0x805a
    8048:	f2 44 0f 10 d7       	movsd  xmm10,xmm7
    804d:	f2 44 0f 10 17       	movsd  xmm10,QWORD PTR [rdi]
    8052:	f2 4c 0f 2d d7       	cvtsd2si r10,xmm7
    8057:	f2 4c 0f 2d 17       	cvtsd2si r10,QWORD PTR [rdi]
    805c:	f2 4c 0f 2a d7       	cvtsi2sd xmm10,rdi
    8061:	f2 44 0f 2a 17       	cvtsi2sd xmm10,DWORD PTR [rdi]
    8066:	48 2d 10 32 54 76    	sub    rax,0x76543210
    806c:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    8073:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    807a:	4d 2b d0             	sub    r10,r8
    807d:	4d 29 10             	sub    QWORD PTR [r8],r10
    8080:	4d 2b 02             	sub    r8,QWORD PTR [r10]
    8083:	49 f7 e8             	imul   r8
    8086:	49 f7 28             	imul   QWORD PTR [r8]
    8089:	4d 0f af d0          	imul   r10,r8
    808d:	4d 69 d0 10 32 54 76 	imul   r10,r8,0x76543210
    8094:	4d 0f af 10          	imul   r10,QWORD PTR [r8]
    8098:	4d 69 10 10 32 54 76 	imul   r10,QWORD PTR [r8],0x76543210
    809f:	49 f7 f8             	idiv   r8
    80a2:	49 f7 38             	idiv   QWORD PTR [r8]
    80a5:	0f 8d 10 32 54 76    	jge    0x7654b2bb
    80ab:	e9 10 32 54 76       	jmp    0x7654b2c0
    80b0:	41 ff e0             	jmp    r8
    80b3:	4d 8b d0             	mov    r10,r8
    80b6:	4d 8b 10             	mov    r10,QWORD PTR [r8]
    80b9:	4d 89 02             	mov    QWORD PTR [r10],r8
    80bc:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    80c3:	09 00 00 
    80c6:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    80cd:	00 00 00 
    80d0:	e8 10 32 54 76       	call   0x7654b2e5
    80d5:	41 ff d0             	call   r8
    80d8:	c3                   	ret    
    80d9:	49 d1 e8             	shr    r8,1
    80dc:	49 c1 e8 12          	shr    r8,0x12
    80e0:	49 d1 28             	shr    QWORD PTR [r8],1
    80e3:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    80e7:	49 f7 d8             	neg    r8
    80ea:	49 f7 18             	neg    QWORD PTR [r8]
    80ed:	0f 05                	syscall 
    80ef:	41 50                	push   r8
    80f1:	41 ff 30             	push   QWORD PTR [r8]
    80f4:	68 10 32 54 76       	push   0x76543210
    80f9:	41 58                	pop    r8
    80fb:	41 8f 00             	pop    QWORD PTR [r8]
    80fe:	49 ff c0             	inc    r8
    8101:	49 ff 00             	inc    QWORD PTR [r8]
    8104:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8105:	f3 e2 12             	repz loop 0x811a
    8108:	e1 12                	loope  0x811c
    810a:	e0 12                	loopne 0x811e
    810c:	f2 45 0f 10 d0       	movsd  xmm10,xmm8
    8111:	f2 45 0f 10 10       	movsd  xmm10,QWORD PTR [r8]
    8116:	f2 4d 0f 2d d0       	cvtsd2si r10,xmm8
    811b:	f2 4d 0f 2d 10       	cvtsd2si r10,QWORD PTR [r8]
    8120:	f2 4d 0f 2a d0       	cvtsi2sd xmm10,r8
    8125:	f2 45 0f 2a 10       	cvtsi2sd xmm10,DWORD PTR [r8]
    812a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8130:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    8137:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    813e:	4d 2b d1             	sub    r10,r9
    8141:	4d 29 11             	sub    QWORD PTR [r9],r10
    8144:	4d 2b 0a             	sub    r9,QWORD PTR [r10]
    8147:	49 f7 e9             	imul   r9
    814a:	49 f7 29             	imul   QWORD PTR [r9]
    814d:	4d 0f af d1          	imul   r10,r9
    8151:	4d 69 d1 10 32 54 76 	imul   r10,r9,0x76543210
    8158:	4d 0f af 11          	imul   r10,QWORD PTR [r9]
    815c:	4d 69 11 10 32 54 76 	imul   r10,QWORD PTR [r9],0x76543210
    8163:	49 f7 f9             	idiv   r9
    8166:	49 f7 39             	idiv   QWORD PTR [r9]
    8169:	0f 8d 10 32 54 76    	jge    0x7654b37f
    816f:	e9 10 32 54 76       	jmp    0x7654b384
    8174:	41 ff e1             	jmp    r9
    8177:	4d 8b d1             	mov    r10,r9
    817a:	4d 8b 11             	mov    r10,QWORD PTR [r9]
    817d:	4d 89 0a             	mov    QWORD PTR [r10],r9
    8180:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    8187:	09 00 00 
    818a:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    8191:	00 00 00 
    8194:	e8 10 32 54 76       	call   0x7654b3a9
    8199:	41 ff d1             	call   r9
    819c:	c3                   	ret    
    819d:	49 d1 e9             	shr    r9,1
    81a0:	49 c1 e9 12          	shr    r9,0x12
    81a4:	49 d1 29             	shr    QWORD PTR [r9],1
    81a7:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    81ab:	49 f7 d9             	neg    r9
    81ae:	49 f7 19             	neg    QWORD PTR [r9]
    81b1:	0f 05                	syscall 
    81b3:	41 51                	push   r9
    81b5:	41 ff 31             	push   QWORD PTR [r9]
    81b8:	68 10 32 54 76       	push   0x76543210
    81bd:	41 59                	pop    r9
    81bf:	41 8f 01             	pop    QWORD PTR [r9]
    81c2:	49 ff c1             	inc    r9
    81c5:	49 ff 01             	inc    QWORD PTR [r9]
    81c8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    81c9:	f3 e2 12             	repz loop 0x81de
    81cc:	e1 12                	loope  0x81e0
    81ce:	e0 12                	loopne 0x81e2
    81d0:	f2 45 0f 10 d1       	movsd  xmm10,xmm9
    81d5:	f2 45 0f 10 11       	movsd  xmm10,QWORD PTR [r9]
    81da:	f2 4d 0f 2d d1       	cvtsd2si r10,xmm9
    81df:	f2 4d 0f 2d 11       	cvtsd2si r10,QWORD PTR [r9]
    81e4:	f2 4d 0f 2a d1       	cvtsi2sd xmm10,r9
    81e9:	f2 45 0f 2a 11       	cvtsi2sd xmm10,DWORD PTR [r9]
    81ee:	48 2d 10 32 54 76    	sub    rax,0x76543210
    81f4:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    81fb:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    8202:	4d 2b d2             	sub    r10,r10
    8205:	4d 29 12             	sub    QWORD PTR [r10],r10
    8208:	4d 2b 12             	sub    r10,QWORD PTR [r10]
    820b:	49 f7 ea             	imul   r10
    820e:	49 f7 2a             	imul   QWORD PTR [r10]
    8211:	4d 0f af d2          	imul   r10,r10
    8215:	4d 69 d2 10 32 54 76 	imul   r10,r10,0x76543210
    821c:	4d 0f af 12          	imul   r10,QWORD PTR [r10]
    8220:	4d 69 12 10 32 54 76 	imul   r10,QWORD PTR [r10],0x76543210
    8227:	49 f7 fa             	idiv   r10
    822a:	49 f7 3a             	idiv   QWORD PTR [r10]
    822d:	0f 8d 10 32 54 76    	jge    0x7654b443
    8233:	e9 10 32 54 76       	jmp    0x7654b448
    8238:	41 ff e2             	jmp    r10
    823b:	4d 8b d2             	mov    r10,r10
    823e:	4d 8b 12             	mov    r10,QWORD PTR [r10]
    8241:	4d 89 12             	mov    QWORD PTR [r10],r10
    8244:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    824b:	09 00 00 
    824e:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    8255:	00 00 00 
    8258:	e8 10 32 54 76       	call   0x7654b46d
    825d:	41 ff d2             	call   r10
    8260:	c3                   	ret    
    8261:	49 d1 ea             	shr    r10,1
    8264:	49 c1 ea 12          	shr    r10,0x12
    8268:	49 d1 2a             	shr    QWORD PTR [r10],1
    826b:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    826f:	49 f7 da             	neg    r10
    8272:	49 f7 1a             	neg    QWORD PTR [r10]
    8275:	0f 05                	syscall 
    8277:	41 52                	push   r10
    8279:	41 ff 32             	push   QWORD PTR [r10]
    827c:	68 10 32 54 76       	push   0x76543210
    8281:	41 5a                	pop    r10
    8283:	41 8f 02             	pop    QWORD PTR [r10]
    8286:	49 ff c2             	inc    r10
    8289:	49 ff 02             	inc    QWORD PTR [r10]
    828c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    828d:	f3 e2 12             	repz loop 0x82a2
    8290:	e1 12                	loope  0x82a4
    8292:	e0 12                	loopne 0x82a6
    8294:	f2 45 0f 10 d2       	movsd  xmm10,xmm10
    8299:	f2 45 0f 10 12       	movsd  xmm10,QWORD PTR [r10]
    829e:	f2 4d 0f 2d d2       	cvtsd2si r10,xmm10
    82a3:	f2 4d 0f 2d 12       	cvtsd2si r10,QWORD PTR [r10]
    82a8:	f2 4d 0f 2a d2       	cvtsi2sd xmm10,r10
    82ad:	f2 45 0f 2a 12       	cvtsi2sd xmm10,DWORD PTR [r10]
    82b2:	48 2d 10 32 54 76    	sub    rax,0x76543210
    82b8:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    82bf:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    82c6:	4d 2b d3             	sub    r10,r11
    82c9:	4d 29 13             	sub    QWORD PTR [r11],r10
    82cc:	4d 2b 1a             	sub    r11,QWORD PTR [r10]
    82cf:	49 f7 eb             	imul   r11
    82d2:	49 f7 2b             	imul   QWORD PTR [r11]
    82d5:	4d 0f af d3          	imul   r10,r11
    82d9:	4d 69 d3 10 32 54 76 	imul   r10,r11,0x76543210
    82e0:	4d 0f af 13          	imul   r10,QWORD PTR [r11]
    82e4:	4d 69 13 10 32 54 76 	imul   r10,QWORD PTR [r11],0x76543210
    82eb:	49 f7 fb             	idiv   r11
    82ee:	49 f7 3b             	idiv   QWORD PTR [r11]
    82f1:	0f 8d 10 32 54 76    	jge    0x7654b507
    82f7:	e9 10 32 54 76       	jmp    0x7654b50c
    82fc:	41 ff e3             	jmp    r11
    82ff:	4d 8b d3             	mov    r10,r11
    8302:	4d 8b 13             	mov    r10,QWORD PTR [r11]
    8305:	4d 89 1a             	mov    QWORD PTR [r10],r11
    8308:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    830f:	09 00 00 
    8312:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    8319:	00 00 00 
    831c:	e8 10 32 54 76       	call   0x7654b531
    8321:	41 ff d3             	call   r11
    8324:	c3                   	ret    
    8325:	49 d1 eb             	shr    r11,1
    8328:	49 c1 eb 12          	shr    r11,0x12
    832c:	49 d1 2b             	shr    QWORD PTR [r11],1
    832f:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    8333:	49 f7 db             	neg    r11
    8336:	49 f7 1b             	neg    QWORD PTR [r11]
    8339:	0f 05                	syscall 
    833b:	41 53                	push   r11
    833d:	41 ff 33             	push   QWORD PTR [r11]
    8340:	68 10 32 54 76       	push   0x76543210
    8345:	41 5b                	pop    r11
    8347:	41 8f 03             	pop    QWORD PTR [r11]
    834a:	49 ff c3             	inc    r11
    834d:	49 ff 03             	inc    QWORD PTR [r11]
    8350:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8351:	f3 e2 12             	repz loop 0x8366
    8354:	e1 12                	loope  0x8368
    8356:	e0 12                	loopne 0x836a
    8358:	f2 45 0f 10 d3       	movsd  xmm10,xmm11
    835d:	f2 45 0f 10 13       	movsd  xmm10,QWORD PTR [r11]
    8362:	f2 4d 0f 2d d3       	cvtsd2si r10,xmm11
    8367:	f2 4d 0f 2d 13       	cvtsd2si r10,QWORD PTR [r11]
    836c:	f2 4d 0f 2a d3       	cvtsi2sd xmm10,r11
    8371:	f2 45 0f 2a 13       	cvtsi2sd xmm10,DWORD PTR [r11]
    8376:	48 2d 10 32 54 76    	sub    rax,0x76543210
    837c:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    8383:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    838a:	4d 2b d4             	sub    r10,r12
    838d:	4d 29 14 24          	sub    QWORD PTR [r12],r10
    8391:	4d 2b 22             	sub    r12,QWORD PTR [r10]
    8394:	49 f7 ec             	imul   r12
    8397:	49 f7 2c 24          	imul   QWORD PTR [r12]
    839b:	4d 0f af d4          	imul   r10,r12
    839f:	4d 69 d4 10 32 54 76 	imul   r10,r12,0x76543210
    83a6:	4d 0f af 14 24       	imul   r10,QWORD PTR [r12]
    83ab:	4d 69 14 24 10 32 54 	imul   r10,QWORD PTR [r12],0x76543210
    83b2:	76 
    83b3:	49 f7 fc             	idiv   r12
    83b6:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    83ba:	0f 8d 10 32 54 76    	jge    0x7654b5d0
    83c0:	e9 10 32 54 76       	jmp    0x7654b5d5
    83c5:	41 ff e4             	jmp    r12
    83c8:	4d 8b d4             	mov    r10,r12
    83cb:	4d 8b 14 24          	mov    r10,QWORD PTR [r12]
    83cf:	4d 89 22             	mov    QWORD PTR [r10],r12
    83d2:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    83d9:	09 00 00 
    83dc:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    83e3:	00 00 00 
    83e6:	e8 10 32 54 76       	call   0x7654b5fb
    83eb:	41 ff d4             	call   r12
    83ee:	c3                   	ret    
    83ef:	49 d1 ec             	shr    r12,1
    83f2:	49 c1 ec 12          	shr    r12,0x12
    83f6:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    83fa:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    83ff:	49 f7 dc             	neg    r12
    8402:	49 f7 1c 24          	neg    QWORD PTR [r12]
    8406:	0f 05                	syscall 
    8408:	41 54                	push   r12
    840a:	41 ff 34 24          	push   QWORD PTR [r12]
    840e:	68 10 32 54 76       	push   0x76543210
    8413:	41 5c                	pop    r12
    8415:	41 8f 04 24          	pop    QWORD PTR [r12]
    8419:	49 ff c4             	inc    r12
    841c:	49 ff 04 24          	inc    QWORD PTR [r12]
    8420:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8421:	f3 e2 12             	repz loop 0x8436
    8424:	e1 12                	loope  0x8438
    8426:	e0 12                	loopne 0x843a
    8428:	f2 45 0f 10 d4       	movsd  xmm10,xmm12
    842d:	f2 45 0f 10 14 24    	movsd  xmm10,QWORD PTR [r12]
    8433:	f2 4d 0f 2d d4       	cvtsd2si r10,xmm12
    8438:	f2 4d 0f 2d 14 24    	cvtsd2si r10,QWORD PTR [r12]
    843e:	f2 4d 0f 2a d4       	cvtsi2sd xmm10,r12
    8443:	f2 45 0f 2a 14 24    	cvtsi2sd xmm10,DWORD PTR [r12]
    8449:	48 2d 10 32 54 76    	sub    rax,0x76543210
    844f:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    8456:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    845d:	4d 2b d5             	sub    r10,r13
    8460:	4d 29 55 00          	sub    QWORD PTR [r13+0x0],r10
    8464:	4d 2b 2a             	sub    r13,QWORD PTR [r10]
    8467:	49 f7 ed             	imul   r13
    846a:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    846e:	4d 0f af d5          	imul   r10,r13
    8472:	4d 69 d5 10 32 54 76 	imul   r10,r13,0x76543210
    8479:	4d 0f af 55 00       	imul   r10,QWORD PTR [r13+0x0]
    847e:	4d 69 55 00 10 32 54 	imul   r10,QWORD PTR [r13+0x0],0x76543210
    8485:	76 
    8486:	49 f7 fd             	idiv   r13
    8489:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    848d:	0f 8d 10 32 54 76    	jge    0x7654b6a3
    8493:	e9 10 32 54 76       	jmp    0x7654b6a8
    8498:	41 ff e5             	jmp    r13
    849b:	4d 8b d5             	mov    r10,r13
    849e:	4d 8b 55 00          	mov    r10,QWORD PTR [r13+0x0]
    84a2:	4d 89 2a             	mov    QWORD PTR [r10],r13
    84a5:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    84ac:	09 00 00 
    84af:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    84b6:	00 00 00 
    84b9:	e8 10 32 54 76       	call   0x7654b6ce
    84be:	41 ff d5             	call   r13
    84c1:	c3                   	ret    
    84c2:	49 d1 ed             	shr    r13,1
    84c5:	49 c1 ed 12          	shr    r13,0x12
    84c9:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    84cd:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    84d2:	49 f7 dd             	neg    r13
    84d5:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    84d9:	0f 05                	syscall 
    84db:	41 55                	push   r13
    84dd:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    84e1:	68 10 32 54 76       	push   0x76543210
    84e6:	41 5d                	pop    r13
    84e8:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    84ec:	49 ff c5             	inc    r13
    84ef:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    84f3:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    84f4:	f3 e2 12             	repz loop 0x8509
    84f7:	e1 12                	loope  0x850b
    84f9:	e0 12                	loopne 0x850d
    84fb:	f2 45 0f 10 d5       	movsd  xmm10,xmm13
    8500:	f2 45 0f 10 55 00    	movsd  xmm10,QWORD PTR [r13+0x0]
    8506:	f2 4d 0f 2d d5       	cvtsd2si r10,xmm13
    850b:	f2 4d 0f 2d 55 00    	cvtsd2si r10,QWORD PTR [r13+0x0]
    8511:	f2 4d 0f 2a d5       	cvtsi2sd xmm10,r13
    8516:	f2 45 0f 2a 55 00    	cvtsi2sd xmm10,DWORD PTR [r13+0x0]
    851c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8522:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    8529:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    8530:	4d 2b d6             	sub    r10,r14
    8533:	4d 29 16             	sub    QWORD PTR [r14],r10
    8536:	4d 2b 32             	sub    r14,QWORD PTR [r10]
    8539:	49 f7 ee             	imul   r14
    853c:	49 f7 2e             	imul   QWORD PTR [r14]
    853f:	4d 0f af d6          	imul   r10,r14
    8543:	4d 69 d6 10 32 54 76 	imul   r10,r14,0x76543210
    854a:	4d 0f af 16          	imul   r10,QWORD PTR [r14]
    854e:	4d 69 16 10 32 54 76 	imul   r10,QWORD PTR [r14],0x76543210
    8555:	49 f7 fe             	idiv   r14
    8558:	49 f7 3e             	idiv   QWORD PTR [r14]
    855b:	0f 8d 10 32 54 76    	jge    0x7654b771
    8561:	e9 10 32 54 76       	jmp    0x7654b776
    8566:	41 ff e6             	jmp    r14
    8569:	4d 8b d6             	mov    r10,r14
    856c:	4d 8b 16             	mov    r10,QWORD PTR [r14]
    856f:	4d 89 32             	mov    QWORD PTR [r10],r14
    8572:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    8579:	09 00 00 
    857c:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    8583:	00 00 00 
    8586:	e8 10 32 54 76       	call   0x7654b79b
    858b:	41 ff d6             	call   r14
    858e:	c3                   	ret    
    858f:	49 d1 ee             	shr    r14,1
    8592:	49 c1 ee 12          	shr    r14,0x12
    8596:	49 d1 2e             	shr    QWORD PTR [r14],1
    8599:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    859d:	49 f7 de             	neg    r14
    85a0:	49 f7 1e             	neg    QWORD PTR [r14]
    85a3:	0f 05                	syscall 
    85a5:	41 56                	push   r14
    85a7:	41 ff 36             	push   QWORD PTR [r14]
    85aa:	68 10 32 54 76       	push   0x76543210
    85af:	41 5e                	pop    r14
    85b1:	41 8f 06             	pop    QWORD PTR [r14]
    85b4:	49 ff c6             	inc    r14
    85b7:	49 ff 06             	inc    QWORD PTR [r14]
    85ba:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    85bb:	f3 e2 12             	repz loop 0x85d0
    85be:	e1 12                	loope  0x85d2
    85c0:	e0 12                	loopne 0x85d4
    85c2:	f2 45 0f 10 d6       	movsd  xmm10,xmm14
    85c7:	f2 45 0f 10 16       	movsd  xmm10,QWORD PTR [r14]
    85cc:	f2 4d 0f 2d d6       	cvtsd2si r10,xmm14
    85d1:	f2 4d 0f 2d 16       	cvtsd2si r10,QWORD PTR [r14]
    85d6:	f2 4d 0f 2a d6       	cvtsi2sd xmm10,r14
    85db:	f2 45 0f 2a 16       	cvtsi2sd xmm10,DWORD PTR [r14]
    85e0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    85e6:	49 81 ea 10 32 54 76 	sub    r10,0x76543210
    85ed:	49 81 2a 10 32 54 76 	sub    QWORD PTR [r10],0x76543210
    85f4:	4d 2b d7             	sub    r10,r15
    85f7:	4d 29 17             	sub    QWORD PTR [r15],r10
    85fa:	4d 2b 3a             	sub    r15,QWORD PTR [r10]
    85fd:	49 f7 ef             	imul   r15
    8600:	49 f7 2f             	imul   QWORD PTR [r15]
    8603:	4d 0f af d7          	imul   r10,r15
    8607:	4d 69 d7 10 32 54 76 	imul   r10,r15,0x76543210
    860e:	4d 0f af 17          	imul   r10,QWORD PTR [r15]
    8612:	4d 69 17 10 32 54 76 	imul   r10,QWORD PTR [r15],0x76543210
    8619:	49 f7 ff             	idiv   r15
    861c:	49 f7 3f             	idiv   QWORD PTR [r15]
    861f:	0f 8d 10 32 54 76    	jge    0x7654b835
    8625:	e9 10 32 54 76       	jmp    0x7654b83a
    862a:	41 ff e7             	jmp    r15
    862d:	4d 8b d7             	mov    r10,r15
    8630:	4d 8b 17             	mov    r10,QWORD PTR [r15]
    8633:	4d 89 3a             	mov    QWORD PTR [r10],r15
    8636:	49 ba 09 21 43 65 87 	movabs r10,0x98765432109
    863d:	09 00 00 
    8640:	49 ba 10 32 54 76 00 	movabs r10,0x76543210
    8647:	00 00 00 
    864a:	e8 10 32 54 76       	call   0x7654b85f
    864f:	41 ff d7             	call   r15
    8652:	c3                   	ret    
    8653:	49 d1 ef             	shr    r15,1
    8656:	49 c1 ef 12          	shr    r15,0x12
    865a:	49 d1 2f             	shr    QWORD PTR [r15],1
    865d:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    8661:	49 f7 df             	neg    r15
    8664:	49 f7 1f             	neg    QWORD PTR [r15]
    8667:	0f 05                	syscall 
    8669:	41 57                	push   r15
    866b:	41 ff 37             	push   QWORD PTR [r15]
    866e:	68 10 32 54 76       	push   0x76543210
    8673:	41 5f                	pop    r15
    8675:	41 8f 07             	pop    QWORD PTR [r15]
    8678:	49 ff c7             	inc    r15
    867b:	49 ff 07             	inc    QWORD PTR [r15]
    867e:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    867f:	f3 e2 12             	repz loop 0x8694
    8682:	e1 12                	loope  0x8696
    8684:	e0 12                	loopne 0x8698
    8686:	f2 45 0f 10 d7       	movsd  xmm10,xmm15
    868b:	f2 45 0f 10 17       	movsd  xmm10,QWORD PTR [r15]
    8690:	f2 4d 0f 2d d7       	cvtsd2si r10,xmm15
    8695:	f2 4d 0f 2d 17       	cvtsd2si r10,QWORD PTR [r15]
    869a:	f2 4d 0f 2a d7       	cvtsi2sd xmm10,r15
    869f:	f2 45 0f 2a 17       	cvtsi2sd xmm10,DWORD PTR [r15]
    86a4:	48 2d 10 32 54 76    	sub    rax,0x76543210
    86aa:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    86b1:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    86b8:	4c 2b d8             	sub    r11,rax
    86bb:	4c 29 18             	sub    QWORD PTR [rax],r11
    86be:	49 2b 03             	sub    rax,QWORD PTR [r11]
    86c1:	48 f7 e8             	imul   rax
    86c4:	48 f7 28             	imul   QWORD PTR [rax]
    86c7:	4c 0f af d8          	imul   r11,rax
    86cb:	4c 69 d8 10 32 54 76 	imul   r11,rax,0x76543210
    86d2:	4c 0f af 18          	imul   r11,QWORD PTR [rax]
    86d6:	4c 69 18 10 32 54 76 	imul   r11,QWORD PTR [rax],0x76543210
    86dd:	48 f7 f8             	idiv   rax
    86e0:	48 f7 38             	idiv   QWORD PTR [rax]
    86e3:	0f 8d 10 32 54 76    	jge    0x7654b8f9
    86e9:	e9 10 32 54 76       	jmp    0x7654b8fe
    86ee:	ff e0                	jmp    rax
    86f0:	4c 8b d8             	mov    r11,rax
    86f3:	4c 8b 18             	mov    r11,QWORD PTR [rax]
    86f6:	49 89 03             	mov    QWORD PTR [r11],rax
    86f9:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    8700:	09 00 00 
    8703:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    870a:	00 00 00 
    870d:	e8 10 32 54 76       	call   0x7654b922
    8712:	ff d0                	call   rax
    8714:	c3                   	ret    
    8715:	48 d1 e8             	shr    rax,1
    8718:	48 c1 e8 12          	shr    rax,0x12
    871c:	48 d1 28             	shr    QWORD PTR [rax],1
    871f:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    8723:	48 f7 d8             	neg    rax
    8726:	48 f7 18             	neg    QWORD PTR [rax]
    8729:	0f 05                	syscall 
    872b:	50                   	push   rax
    872c:	ff 30                	push   QWORD PTR [rax]
    872e:	68 10 32 54 76       	push   0x76543210
    8733:	58                   	pop    rax
    8734:	8f 00                	pop    QWORD PTR [rax]
    8736:	48 ff c0             	inc    rax
    8739:	48 ff 00             	inc    QWORD PTR [rax]
    873c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    873d:	f3 e2 12             	repz loop 0x8752
    8740:	e1 12                	loope  0x8754
    8742:	e0 12                	loopne 0x8756
    8744:	f2 44 0f 10 d8       	movsd  xmm11,xmm0
    8749:	f2 44 0f 10 18       	movsd  xmm11,QWORD PTR [rax]
    874e:	f2 4c 0f 2d d8       	cvtsd2si r11,xmm0
    8753:	f2 4c 0f 2d 18       	cvtsd2si r11,QWORD PTR [rax]
    8758:	f2 4c 0f 2a d8       	cvtsi2sd xmm11,rax
    875d:	f2 44 0f 2a 18       	cvtsi2sd xmm11,DWORD PTR [rax]
    8762:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8768:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    876f:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    8776:	4c 2b d9             	sub    r11,rcx
    8779:	4c 29 19             	sub    QWORD PTR [rcx],r11
    877c:	49 2b 0b             	sub    rcx,QWORD PTR [r11]
    877f:	48 f7 e9             	imul   rcx
    8782:	48 f7 29             	imul   QWORD PTR [rcx]
    8785:	4c 0f af d9          	imul   r11,rcx
    8789:	4c 69 d9 10 32 54 76 	imul   r11,rcx,0x76543210
    8790:	4c 0f af 19          	imul   r11,QWORD PTR [rcx]
    8794:	4c 69 19 10 32 54 76 	imul   r11,QWORD PTR [rcx],0x76543210
    879b:	48 f7 f9             	idiv   rcx
    879e:	48 f7 39             	idiv   QWORD PTR [rcx]
    87a1:	0f 8d 10 32 54 76    	jge    0x7654b9b7
    87a7:	e9 10 32 54 76       	jmp    0x7654b9bc
    87ac:	ff e1                	jmp    rcx
    87ae:	4c 8b d9             	mov    r11,rcx
    87b1:	4c 8b 19             	mov    r11,QWORD PTR [rcx]
    87b4:	49 89 0b             	mov    QWORD PTR [r11],rcx
    87b7:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    87be:	09 00 00 
    87c1:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    87c8:	00 00 00 
    87cb:	e8 10 32 54 76       	call   0x7654b9e0
    87d0:	ff d1                	call   rcx
    87d2:	c3                   	ret    
    87d3:	48 d1 e9             	shr    rcx,1
    87d6:	48 c1 e9 12          	shr    rcx,0x12
    87da:	48 d1 29             	shr    QWORD PTR [rcx],1
    87dd:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    87e1:	48 f7 d9             	neg    rcx
    87e4:	48 f7 19             	neg    QWORD PTR [rcx]
    87e7:	0f 05                	syscall 
    87e9:	51                   	push   rcx
    87ea:	ff 31                	push   QWORD PTR [rcx]
    87ec:	68 10 32 54 76       	push   0x76543210
    87f1:	59                   	pop    rcx
    87f2:	8f 01                	pop    QWORD PTR [rcx]
    87f4:	48 ff c1             	inc    rcx
    87f7:	48 ff 01             	inc    QWORD PTR [rcx]
    87fa:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    87fb:	f3 e2 12             	repz loop 0x8810
    87fe:	e1 12                	loope  0x8812
    8800:	e0 12                	loopne 0x8814
    8802:	f2 44 0f 10 d9       	movsd  xmm11,xmm1
    8807:	f2 44 0f 10 19       	movsd  xmm11,QWORD PTR [rcx]
    880c:	f2 4c 0f 2d d9       	cvtsd2si r11,xmm1
    8811:	f2 4c 0f 2d 19       	cvtsd2si r11,QWORD PTR [rcx]
    8816:	f2 4c 0f 2a d9       	cvtsi2sd xmm11,rcx
    881b:	f2 44 0f 2a 19       	cvtsi2sd xmm11,DWORD PTR [rcx]
    8820:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8826:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    882d:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    8834:	4c 2b da             	sub    r11,rdx
    8837:	4c 29 1a             	sub    QWORD PTR [rdx],r11
    883a:	49 2b 13             	sub    rdx,QWORD PTR [r11]
    883d:	48 f7 ea             	imul   rdx
    8840:	48 f7 2a             	imul   QWORD PTR [rdx]
    8843:	4c 0f af da          	imul   r11,rdx
    8847:	4c 69 da 10 32 54 76 	imul   r11,rdx,0x76543210
    884e:	4c 0f af 1a          	imul   r11,QWORD PTR [rdx]
    8852:	4c 69 1a 10 32 54 76 	imul   r11,QWORD PTR [rdx],0x76543210
    8859:	48 f7 fa             	idiv   rdx
    885c:	48 f7 3a             	idiv   QWORD PTR [rdx]
    885f:	0f 8d 10 32 54 76    	jge    0x7654ba75
    8865:	e9 10 32 54 76       	jmp    0x7654ba7a
    886a:	ff e2                	jmp    rdx
    886c:	4c 8b da             	mov    r11,rdx
    886f:	4c 8b 1a             	mov    r11,QWORD PTR [rdx]
    8872:	49 89 13             	mov    QWORD PTR [r11],rdx
    8875:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    887c:	09 00 00 
    887f:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    8886:	00 00 00 
    8889:	e8 10 32 54 76       	call   0x7654ba9e
    888e:	ff d2                	call   rdx
    8890:	c3                   	ret    
    8891:	48 d1 ea             	shr    rdx,1
    8894:	48 c1 ea 12          	shr    rdx,0x12
    8898:	48 d1 2a             	shr    QWORD PTR [rdx],1
    889b:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    889f:	48 f7 da             	neg    rdx
    88a2:	48 f7 1a             	neg    QWORD PTR [rdx]
    88a5:	0f 05                	syscall 
    88a7:	52                   	push   rdx
    88a8:	ff 32                	push   QWORD PTR [rdx]
    88aa:	68 10 32 54 76       	push   0x76543210
    88af:	5a                   	pop    rdx
    88b0:	8f 02                	pop    QWORD PTR [rdx]
    88b2:	48 ff c2             	inc    rdx
    88b5:	48 ff 02             	inc    QWORD PTR [rdx]
    88b8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    88b9:	f3 e2 12             	repz loop 0x88ce
    88bc:	e1 12                	loope  0x88d0
    88be:	e0 12                	loopne 0x88d2
    88c0:	f2 44 0f 10 da       	movsd  xmm11,xmm2
    88c5:	f2 44 0f 10 1a       	movsd  xmm11,QWORD PTR [rdx]
    88ca:	f2 4c 0f 2d da       	cvtsd2si r11,xmm2
    88cf:	f2 4c 0f 2d 1a       	cvtsd2si r11,QWORD PTR [rdx]
    88d4:	f2 4c 0f 2a da       	cvtsi2sd xmm11,rdx
    88d9:	f2 44 0f 2a 1a       	cvtsi2sd xmm11,DWORD PTR [rdx]
    88de:	48 2d 10 32 54 76    	sub    rax,0x76543210
    88e4:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    88eb:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    88f2:	4c 2b db             	sub    r11,rbx
    88f5:	4c 29 1b             	sub    QWORD PTR [rbx],r11
    88f8:	49 2b 1b             	sub    rbx,QWORD PTR [r11]
    88fb:	48 f7 eb             	imul   rbx
    88fe:	48 f7 2b             	imul   QWORD PTR [rbx]
    8901:	4c 0f af db          	imul   r11,rbx
    8905:	4c 69 db 10 32 54 76 	imul   r11,rbx,0x76543210
    890c:	4c 0f af 1b          	imul   r11,QWORD PTR [rbx]
    8910:	4c 69 1b 10 32 54 76 	imul   r11,QWORD PTR [rbx],0x76543210
    8917:	48 f7 fb             	idiv   rbx
    891a:	48 f7 3b             	idiv   QWORD PTR [rbx]
    891d:	0f 8d 10 32 54 76    	jge    0x7654bb33
    8923:	e9 10 32 54 76       	jmp    0x7654bb38
    8928:	ff e3                	jmp    rbx
    892a:	4c 8b db             	mov    r11,rbx
    892d:	4c 8b 1b             	mov    r11,QWORD PTR [rbx]
    8930:	49 89 1b             	mov    QWORD PTR [r11],rbx
    8933:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    893a:	09 00 00 
    893d:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    8944:	00 00 00 
    8947:	e8 10 32 54 76       	call   0x7654bb5c
    894c:	ff d3                	call   rbx
    894e:	c3                   	ret    
    894f:	48 d1 eb             	shr    rbx,1
    8952:	48 c1 eb 12          	shr    rbx,0x12
    8956:	48 d1 2b             	shr    QWORD PTR [rbx],1
    8959:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    895d:	48 f7 db             	neg    rbx
    8960:	48 f7 1b             	neg    QWORD PTR [rbx]
    8963:	0f 05                	syscall 
    8965:	53                   	push   rbx
    8966:	ff 33                	push   QWORD PTR [rbx]
    8968:	68 10 32 54 76       	push   0x76543210
    896d:	5b                   	pop    rbx
    896e:	8f 03                	pop    QWORD PTR [rbx]
    8970:	48 ff c3             	inc    rbx
    8973:	48 ff 03             	inc    QWORD PTR [rbx]
    8976:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8977:	f3 e2 12             	repz loop 0x898c
    897a:	e1 12                	loope  0x898e
    897c:	e0 12                	loopne 0x8990
    897e:	f2 44 0f 10 db       	movsd  xmm11,xmm3
    8983:	f2 44 0f 10 1b       	movsd  xmm11,QWORD PTR [rbx]
    8988:	f2 4c 0f 2d db       	cvtsd2si r11,xmm3
    898d:	f2 4c 0f 2d 1b       	cvtsd2si r11,QWORD PTR [rbx]
    8992:	f2 4c 0f 2a db       	cvtsi2sd xmm11,rbx
    8997:	f2 44 0f 2a 1b       	cvtsi2sd xmm11,DWORD PTR [rbx]
    899c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    89a2:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    89a9:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    89b0:	4c 2b dc             	sub    r11,rsp
    89b3:	4c 29 1c 24          	sub    QWORD PTR [rsp],r11
    89b7:	49 2b 23             	sub    rsp,QWORD PTR [r11]
    89ba:	48 f7 ec             	imul   rsp
    89bd:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    89c1:	4c 0f af dc          	imul   r11,rsp
    89c5:	4c 69 dc 10 32 54 76 	imul   r11,rsp,0x76543210
    89cc:	4c 0f af 1c 24       	imul   r11,QWORD PTR [rsp]
    89d1:	4c 69 1c 24 10 32 54 	imul   r11,QWORD PTR [rsp],0x76543210
    89d8:	76 
    89d9:	48 f7 fc             	idiv   rsp
    89dc:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    89e0:	0f 8d 10 32 54 76    	jge    0x7654bbf6
    89e6:	e9 10 32 54 76       	jmp    0x7654bbfb
    89eb:	ff e4                	jmp    rsp
    89ed:	4c 8b dc             	mov    r11,rsp
    89f0:	4c 8b 1c 24          	mov    r11,QWORD PTR [rsp]
    89f4:	49 89 23             	mov    QWORD PTR [r11],rsp
    89f7:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    89fe:	09 00 00 
    8a01:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    8a08:	00 00 00 
    8a0b:	e8 10 32 54 76       	call   0x7654bc20
    8a10:	ff d4                	call   rsp
    8a12:	c3                   	ret    
    8a13:	48 d1 ec             	shr    rsp,1
    8a16:	48 c1 ec 12          	shr    rsp,0x12
    8a1a:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    8a1e:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    8a23:	48 f7 dc             	neg    rsp
    8a26:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    8a2a:	0f 05                	syscall 
    8a2c:	54                   	push   rsp
    8a2d:	ff 34 24             	push   QWORD PTR [rsp]
    8a30:	68 10 32 54 76       	push   0x76543210
    8a35:	5c                   	pop    rsp
    8a36:	8f 04 24             	pop    QWORD PTR [rsp]
    8a39:	48 ff c4             	inc    rsp
    8a3c:	48 ff 04 24          	inc    QWORD PTR [rsp]
    8a40:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8a41:	f3 e2 12             	repz loop 0x8a56
    8a44:	e1 12                	loope  0x8a58
    8a46:	e0 12                	loopne 0x8a5a
    8a48:	f2 44 0f 10 dc       	movsd  xmm11,xmm4
    8a4d:	f2 44 0f 10 1c 24    	movsd  xmm11,QWORD PTR [rsp]
    8a53:	f2 4c 0f 2d dc       	cvtsd2si r11,xmm4
    8a58:	f2 4c 0f 2d 1c 24    	cvtsd2si r11,QWORD PTR [rsp]
    8a5e:	f2 4c 0f 2a dc       	cvtsi2sd xmm11,rsp
    8a63:	f2 44 0f 2a 1c 24    	cvtsi2sd xmm11,DWORD PTR [rsp]
    8a69:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8a6f:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    8a76:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    8a7d:	4c 2b dd             	sub    r11,rbp
    8a80:	4c 29 5d 00          	sub    QWORD PTR [rbp+0x0],r11
    8a84:	49 2b 2b             	sub    rbp,QWORD PTR [r11]
    8a87:	48 f7 ed             	imul   rbp
    8a8a:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    8a8e:	4c 0f af dd          	imul   r11,rbp
    8a92:	4c 69 dd 10 32 54 76 	imul   r11,rbp,0x76543210
    8a99:	4c 0f af 5d 00       	imul   r11,QWORD PTR [rbp+0x0]
    8a9e:	4c 69 5d 00 10 32 54 	imul   r11,QWORD PTR [rbp+0x0],0x76543210
    8aa5:	76 
    8aa6:	48 f7 fd             	idiv   rbp
    8aa9:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    8aad:	0f 8d 10 32 54 76    	jge    0x7654bcc3
    8ab3:	e9 10 32 54 76       	jmp    0x7654bcc8
    8ab8:	ff e5                	jmp    rbp
    8aba:	4c 8b dd             	mov    r11,rbp
    8abd:	4c 8b 5d 00          	mov    r11,QWORD PTR [rbp+0x0]
    8ac1:	49 89 2b             	mov    QWORD PTR [r11],rbp
    8ac4:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    8acb:	09 00 00 
    8ace:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    8ad5:	00 00 00 
    8ad8:	e8 10 32 54 76       	call   0x7654bced
    8add:	ff d5                	call   rbp
    8adf:	c3                   	ret    
    8ae0:	48 d1 ed             	shr    rbp,1
    8ae3:	48 c1 ed 12          	shr    rbp,0x12
    8ae7:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    8aeb:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    8af0:	48 f7 dd             	neg    rbp
    8af3:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    8af7:	0f 05                	syscall 
    8af9:	55                   	push   rbp
    8afa:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    8afd:	68 10 32 54 76       	push   0x76543210
    8b02:	5d                   	pop    rbp
    8b03:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    8b06:	48 ff c5             	inc    rbp
    8b09:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    8b0d:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8b0e:	f3 e2 12             	repz loop 0x8b23
    8b11:	e1 12                	loope  0x8b25
    8b13:	e0 12                	loopne 0x8b27
    8b15:	f2 44 0f 10 dd       	movsd  xmm11,xmm5
    8b1a:	f2 44 0f 10 5d 00    	movsd  xmm11,QWORD PTR [rbp+0x0]
    8b20:	f2 4c 0f 2d dd       	cvtsd2si r11,xmm5
    8b25:	f2 4c 0f 2d 5d 00    	cvtsd2si r11,QWORD PTR [rbp+0x0]
    8b2b:	f2 4c 0f 2a dd       	cvtsi2sd xmm11,rbp
    8b30:	f2 44 0f 2a 5d 00    	cvtsi2sd xmm11,DWORD PTR [rbp+0x0]
    8b36:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8b3c:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    8b43:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    8b4a:	4c 2b de             	sub    r11,rsi
    8b4d:	4c 29 1e             	sub    QWORD PTR [rsi],r11
    8b50:	49 2b 33             	sub    rsi,QWORD PTR [r11]
    8b53:	48 f7 ee             	imul   rsi
    8b56:	48 f7 2e             	imul   QWORD PTR [rsi]
    8b59:	4c 0f af de          	imul   r11,rsi
    8b5d:	4c 69 de 10 32 54 76 	imul   r11,rsi,0x76543210
    8b64:	4c 0f af 1e          	imul   r11,QWORD PTR [rsi]
    8b68:	4c 69 1e 10 32 54 76 	imul   r11,QWORD PTR [rsi],0x76543210
    8b6f:	48 f7 fe             	idiv   rsi
    8b72:	48 f7 3e             	idiv   QWORD PTR [rsi]
    8b75:	0f 8d 10 32 54 76    	jge    0x7654bd8b
    8b7b:	e9 10 32 54 76       	jmp    0x7654bd90
    8b80:	ff e6                	jmp    rsi
    8b82:	4c 8b de             	mov    r11,rsi
    8b85:	4c 8b 1e             	mov    r11,QWORD PTR [rsi]
    8b88:	49 89 33             	mov    QWORD PTR [r11],rsi
    8b8b:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    8b92:	09 00 00 
    8b95:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    8b9c:	00 00 00 
    8b9f:	e8 10 32 54 76       	call   0x7654bdb4
    8ba4:	ff d6                	call   rsi
    8ba6:	c3                   	ret    
    8ba7:	48 d1 ee             	shr    rsi,1
    8baa:	48 c1 ee 12          	shr    rsi,0x12
    8bae:	48 d1 2e             	shr    QWORD PTR [rsi],1
    8bb1:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    8bb5:	48 f7 de             	neg    rsi
    8bb8:	48 f7 1e             	neg    QWORD PTR [rsi]
    8bbb:	0f 05                	syscall 
    8bbd:	56                   	push   rsi
    8bbe:	ff 36                	push   QWORD PTR [rsi]
    8bc0:	68 10 32 54 76       	push   0x76543210
    8bc5:	5e                   	pop    rsi
    8bc6:	8f 06                	pop    QWORD PTR [rsi]
    8bc8:	48 ff c6             	inc    rsi
    8bcb:	48 ff 06             	inc    QWORD PTR [rsi]
    8bce:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8bcf:	f3 e2 12             	repz loop 0x8be4
    8bd2:	e1 12                	loope  0x8be6
    8bd4:	e0 12                	loopne 0x8be8
    8bd6:	f2 44 0f 10 de       	movsd  xmm11,xmm6
    8bdb:	f2 44 0f 10 1e       	movsd  xmm11,QWORD PTR [rsi]
    8be0:	f2 4c 0f 2d de       	cvtsd2si r11,xmm6
    8be5:	f2 4c 0f 2d 1e       	cvtsd2si r11,QWORD PTR [rsi]
    8bea:	f2 4c 0f 2a de       	cvtsi2sd xmm11,rsi
    8bef:	f2 44 0f 2a 1e       	cvtsi2sd xmm11,DWORD PTR [rsi]
    8bf4:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8bfa:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    8c01:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    8c08:	4c 2b df             	sub    r11,rdi
    8c0b:	4c 29 1f             	sub    QWORD PTR [rdi],r11
    8c0e:	49 2b 3b             	sub    rdi,QWORD PTR [r11]
    8c11:	48 f7 ef             	imul   rdi
    8c14:	48 f7 2f             	imul   QWORD PTR [rdi]
    8c17:	4c 0f af df          	imul   r11,rdi
    8c1b:	4c 69 df 10 32 54 76 	imul   r11,rdi,0x76543210
    8c22:	4c 0f af 1f          	imul   r11,QWORD PTR [rdi]
    8c26:	4c 69 1f 10 32 54 76 	imul   r11,QWORD PTR [rdi],0x76543210
    8c2d:	48 f7 ff             	idiv   rdi
    8c30:	48 f7 3f             	idiv   QWORD PTR [rdi]
    8c33:	0f 8d 10 32 54 76    	jge    0x7654be49
    8c39:	e9 10 32 54 76       	jmp    0x7654be4e
    8c3e:	ff e7                	jmp    rdi
    8c40:	4c 8b df             	mov    r11,rdi
    8c43:	4c 8b 1f             	mov    r11,QWORD PTR [rdi]
    8c46:	49 89 3b             	mov    QWORD PTR [r11],rdi
    8c49:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    8c50:	09 00 00 
    8c53:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    8c5a:	00 00 00 
    8c5d:	e8 10 32 54 76       	call   0x7654be72
    8c62:	ff d7                	call   rdi
    8c64:	c3                   	ret    
    8c65:	48 d1 ef             	shr    rdi,1
    8c68:	48 c1 ef 12          	shr    rdi,0x12
    8c6c:	48 d1 2f             	shr    QWORD PTR [rdi],1
    8c6f:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    8c73:	48 f7 df             	neg    rdi
    8c76:	48 f7 1f             	neg    QWORD PTR [rdi]
    8c79:	0f 05                	syscall 
    8c7b:	57                   	push   rdi
    8c7c:	ff 37                	push   QWORD PTR [rdi]
    8c7e:	68 10 32 54 76       	push   0x76543210
    8c83:	5f                   	pop    rdi
    8c84:	8f 07                	pop    QWORD PTR [rdi]
    8c86:	48 ff c7             	inc    rdi
    8c89:	48 ff 07             	inc    QWORD PTR [rdi]
    8c8c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8c8d:	f3 e2 12             	repz loop 0x8ca2
    8c90:	e1 12                	loope  0x8ca4
    8c92:	e0 12                	loopne 0x8ca6
    8c94:	f2 44 0f 10 df       	movsd  xmm11,xmm7
    8c99:	f2 44 0f 10 1f       	movsd  xmm11,QWORD PTR [rdi]
    8c9e:	f2 4c 0f 2d df       	cvtsd2si r11,xmm7
    8ca3:	f2 4c 0f 2d 1f       	cvtsd2si r11,QWORD PTR [rdi]
    8ca8:	f2 4c 0f 2a df       	cvtsi2sd xmm11,rdi
    8cad:	f2 44 0f 2a 1f       	cvtsi2sd xmm11,DWORD PTR [rdi]
    8cb2:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8cb8:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    8cbf:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    8cc6:	4d 2b d8             	sub    r11,r8
    8cc9:	4d 29 18             	sub    QWORD PTR [r8],r11
    8ccc:	4d 2b 03             	sub    r8,QWORD PTR [r11]
    8ccf:	49 f7 e8             	imul   r8
    8cd2:	49 f7 28             	imul   QWORD PTR [r8]
    8cd5:	4d 0f af d8          	imul   r11,r8
    8cd9:	4d 69 d8 10 32 54 76 	imul   r11,r8,0x76543210
    8ce0:	4d 0f af 18          	imul   r11,QWORD PTR [r8]
    8ce4:	4d 69 18 10 32 54 76 	imul   r11,QWORD PTR [r8],0x76543210
    8ceb:	49 f7 f8             	idiv   r8
    8cee:	49 f7 38             	idiv   QWORD PTR [r8]
    8cf1:	0f 8d 10 32 54 76    	jge    0x7654bf07
    8cf7:	e9 10 32 54 76       	jmp    0x7654bf0c
    8cfc:	41 ff e0             	jmp    r8
    8cff:	4d 8b d8             	mov    r11,r8
    8d02:	4d 8b 18             	mov    r11,QWORD PTR [r8]
    8d05:	4d 89 03             	mov    QWORD PTR [r11],r8
    8d08:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    8d0f:	09 00 00 
    8d12:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    8d19:	00 00 00 
    8d1c:	e8 10 32 54 76       	call   0x7654bf31
    8d21:	41 ff d0             	call   r8
    8d24:	c3                   	ret    
    8d25:	49 d1 e8             	shr    r8,1
    8d28:	49 c1 e8 12          	shr    r8,0x12
    8d2c:	49 d1 28             	shr    QWORD PTR [r8],1
    8d2f:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    8d33:	49 f7 d8             	neg    r8
    8d36:	49 f7 18             	neg    QWORD PTR [r8]
    8d39:	0f 05                	syscall 
    8d3b:	41 50                	push   r8
    8d3d:	41 ff 30             	push   QWORD PTR [r8]
    8d40:	68 10 32 54 76       	push   0x76543210
    8d45:	41 58                	pop    r8
    8d47:	41 8f 00             	pop    QWORD PTR [r8]
    8d4a:	49 ff c0             	inc    r8
    8d4d:	49 ff 00             	inc    QWORD PTR [r8]
    8d50:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8d51:	f3 e2 12             	repz loop 0x8d66
    8d54:	e1 12                	loope  0x8d68
    8d56:	e0 12                	loopne 0x8d6a
    8d58:	f2 45 0f 10 d8       	movsd  xmm11,xmm8
    8d5d:	f2 45 0f 10 18       	movsd  xmm11,QWORD PTR [r8]
    8d62:	f2 4d 0f 2d d8       	cvtsd2si r11,xmm8
    8d67:	f2 4d 0f 2d 18       	cvtsd2si r11,QWORD PTR [r8]
    8d6c:	f2 4d 0f 2a d8       	cvtsi2sd xmm11,r8
    8d71:	f2 45 0f 2a 18       	cvtsi2sd xmm11,DWORD PTR [r8]
    8d76:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8d7c:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    8d83:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    8d8a:	4d 2b d9             	sub    r11,r9
    8d8d:	4d 29 19             	sub    QWORD PTR [r9],r11
    8d90:	4d 2b 0b             	sub    r9,QWORD PTR [r11]
    8d93:	49 f7 e9             	imul   r9
    8d96:	49 f7 29             	imul   QWORD PTR [r9]
    8d99:	4d 0f af d9          	imul   r11,r9
    8d9d:	4d 69 d9 10 32 54 76 	imul   r11,r9,0x76543210
    8da4:	4d 0f af 19          	imul   r11,QWORD PTR [r9]
    8da8:	4d 69 19 10 32 54 76 	imul   r11,QWORD PTR [r9],0x76543210
    8daf:	49 f7 f9             	idiv   r9
    8db2:	49 f7 39             	idiv   QWORD PTR [r9]
    8db5:	0f 8d 10 32 54 76    	jge    0x7654bfcb
    8dbb:	e9 10 32 54 76       	jmp    0x7654bfd0
    8dc0:	41 ff e1             	jmp    r9
    8dc3:	4d 8b d9             	mov    r11,r9
    8dc6:	4d 8b 19             	mov    r11,QWORD PTR [r9]
    8dc9:	4d 89 0b             	mov    QWORD PTR [r11],r9
    8dcc:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    8dd3:	09 00 00 
    8dd6:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    8ddd:	00 00 00 
    8de0:	e8 10 32 54 76       	call   0x7654bff5
    8de5:	41 ff d1             	call   r9
    8de8:	c3                   	ret    
    8de9:	49 d1 e9             	shr    r9,1
    8dec:	49 c1 e9 12          	shr    r9,0x12
    8df0:	49 d1 29             	shr    QWORD PTR [r9],1
    8df3:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    8df7:	49 f7 d9             	neg    r9
    8dfa:	49 f7 19             	neg    QWORD PTR [r9]
    8dfd:	0f 05                	syscall 
    8dff:	41 51                	push   r9
    8e01:	41 ff 31             	push   QWORD PTR [r9]
    8e04:	68 10 32 54 76       	push   0x76543210
    8e09:	41 59                	pop    r9
    8e0b:	41 8f 01             	pop    QWORD PTR [r9]
    8e0e:	49 ff c1             	inc    r9
    8e11:	49 ff 01             	inc    QWORD PTR [r9]
    8e14:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8e15:	f3 e2 12             	repz loop 0x8e2a
    8e18:	e1 12                	loope  0x8e2c
    8e1a:	e0 12                	loopne 0x8e2e
    8e1c:	f2 45 0f 10 d9       	movsd  xmm11,xmm9
    8e21:	f2 45 0f 10 19       	movsd  xmm11,QWORD PTR [r9]
    8e26:	f2 4d 0f 2d d9       	cvtsd2si r11,xmm9
    8e2b:	f2 4d 0f 2d 19       	cvtsd2si r11,QWORD PTR [r9]
    8e30:	f2 4d 0f 2a d9       	cvtsi2sd xmm11,r9
    8e35:	f2 45 0f 2a 19       	cvtsi2sd xmm11,DWORD PTR [r9]
    8e3a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8e40:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    8e47:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    8e4e:	4d 2b da             	sub    r11,r10
    8e51:	4d 29 1a             	sub    QWORD PTR [r10],r11
    8e54:	4d 2b 13             	sub    r10,QWORD PTR [r11]
    8e57:	49 f7 ea             	imul   r10
    8e5a:	49 f7 2a             	imul   QWORD PTR [r10]
    8e5d:	4d 0f af da          	imul   r11,r10
    8e61:	4d 69 da 10 32 54 76 	imul   r11,r10,0x76543210
    8e68:	4d 0f af 1a          	imul   r11,QWORD PTR [r10]
    8e6c:	4d 69 1a 10 32 54 76 	imul   r11,QWORD PTR [r10],0x76543210
    8e73:	49 f7 fa             	idiv   r10
    8e76:	49 f7 3a             	idiv   QWORD PTR [r10]
    8e79:	0f 8d 10 32 54 76    	jge    0x7654c08f
    8e7f:	e9 10 32 54 76       	jmp    0x7654c094
    8e84:	41 ff e2             	jmp    r10
    8e87:	4d 8b da             	mov    r11,r10
    8e8a:	4d 8b 1a             	mov    r11,QWORD PTR [r10]
    8e8d:	4d 89 13             	mov    QWORD PTR [r11],r10
    8e90:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    8e97:	09 00 00 
    8e9a:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    8ea1:	00 00 00 
    8ea4:	e8 10 32 54 76       	call   0x7654c0b9
    8ea9:	41 ff d2             	call   r10
    8eac:	c3                   	ret    
    8ead:	49 d1 ea             	shr    r10,1
    8eb0:	49 c1 ea 12          	shr    r10,0x12
    8eb4:	49 d1 2a             	shr    QWORD PTR [r10],1
    8eb7:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    8ebb:	49 f7 da             	neg    r10
    8ebe:	49 f7 1a             	neg    QWORD PTR [r10]
    8ec1:	0f 05                	syscall 
    8ec3:	41 52                	push   r10
    8ec5:	41 ff 32             	push   QWORD PTR [r10]
    8ec8:	68 10 32 54 76       	push   0x76543210
    8ecd:	41 5a                	pop    r10
    8ecf:	41 8f 02             	pop    QWORD PTR [r10]
    8ed2:	49 ff c2             	inc    r10
    8ed5:	49 ff 02             	inc    QWORD PTR [r10]
    8ed8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8ed9:	f3 e2 12             	repz loop 0x8eee
    8edc:	e1 12                	loope  0x8ef0
    8ede:	e0 12                	loopne 0x8ef2
    8ee0:	f2 45 0f 10 da       	movsd  xmm11,xmm10
    8ee5:	f2 45 0f 10 1a       	movsd  xmm11,QWORD PTR [r10]
    8eea:	f2 4d 0f 2d da       	cvtsd2si r11,xmm10
    8eef:	f2 4d 0f 2d 1a       	cvtsd2si r11,QWORD PTR [r10]
    8ef4:	f2 4d 0f 2a da       	cvtsi2sd xmm11,r10
    8ef9:	f2 45 0f 2a 1a       	cvtsi2sd xmm11,DWORD PTR [r10]
    8efe:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8f04:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    8f0b:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    8f12:	4d 2b db             	sub    r11,r11
    8f15:	4d 29 1b             	sub    QWORD PTR [r11],r11
    8f18:	4d 2b 1b             	sub    r11,QWORD PTR [r11]
    8f1b:	49 f7 eb             	imul   r11
    8f1e:	49 f7 2b             	imul   QWORD PTR [r11]
    8f21:	4d 0f af db          	imul   r11,r11
    8f25:	4d 69 db 10 32 54 76 	imul   r11,r11,0x76543210
    8f2c:	4d 0f af 1b          	imul   r11,QWORD PTR [r11]
    8f30:	4d 69 1b 10 32 54 76 	imul   r11,QWORD PTR [r11],0x76543210
    8f37:	49 f7 fb             	idiv   r11
    8f3a:	49 f7 3b             	idiv   QWORD PTR [r11]
    8f3d:	0f 8d 10 32 54 76    	jge    0x7654c153
    8f43:	e9 10 32 54 76       	jmp    0x7654c158
    8f48:	41 ff e3             	jmp    r11
    8f4b:	4d 8b db             	mov    r11,r11
    8f4e:	4d 8b 1b             	mov    r11,QWORD PTR [r11]
    8f51:	4d 89 1b             	mov    QWORD PTR [r11],r11
    8f54:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    8f5b:	09 00 00 
    8f5e:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    8f65:	00 00 00 
    8f68:	e8 10 32 54 76       	call   0x7654c17d
    8f6d:	41 ff d3             	call   r11
    8f70:	c3                   	ret    
    8f71:	49 d1 eb             	shr    r11,1
    8f74:	49 c1 eb 12          	shr    r11,0x12
    8f78:	49 d1 2b             	shr    QWORD PTR [r11],1
    8f7b:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    8f7f:	49 f7 db             	neg    r11
    8f82:	49 f7 1b             	neg    QWORD PTR [r11]
    8f85:	0f 05                	syscall 
    8f87:	41 53                	push   r11
    8f89:	41 ff 33             	push   QWORD PTR [r11]
    8f8c:	68 10 32 54 76       	push   0x76543210
    8f91:	41 5b                	pop    r11
    8f93:	41 8f 03             	pop    QWORD PTR [r11]
    8f96:	49 ff c3             	inc    r11
    8f99:	49 ff 03             	inc    QWORD PTR [r11]
    8f9c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    8f9d:	f3 e2 12             	repz loop 0x8fb2
    8fa0:	e1 12                	loope  0x8fb4
    8fa2:	e0 12                	loopne 0x8fb6
    8fa4:	f2 45 0f 10 db       	movsd  xmm11,xmm11
    8fa9:	f2 45 0f 10 1b       	movsd  xmm11,QWORD PTR [r11]
    8fae:	f2 4d 0f 2d db       	cvtsd2si r11,xmm11
    8fb3:	f2 4d 0f 2d 1b       	cvtsd2si r11,QWORD PTR [r11]
    8fb8:	f2 4d 0f 2a db       	cvtsi2sd xmm11,r11
    8fbd:	f2 45 0f 2a 1b       	cvtsi2sd xmm11,DWORD PTR [r11]
    8fc2:	48 2d 10 32 54 76    	sub    rax,0x76543210
    8fc8:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    8fcf:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    8fd6:	4d 2b dc             	sub    r11,r12
    8fd9:	4d 29 1c 24          	sub    QWORD PTR [r12],r11
    8fdd:	4d 2b 23             	sub    r12,QWORD PTR [r11]
    8fe0:	49 f7 ec             	imul   r12
    8fe3:	49 f7 2c 24          	imul   QWORD PTR [r12]
    8fe7:	4d 0f af dc          	imul   r11,r12
    8feb:	4d 69 dc 10 32 54 76 	imul   r11,r12,0x76543210
    8ff2:	4d 0f af 1c 24       	imul   r11,QWORD PTR [r12]
    8ff7:	4d 69 1c 24 10 32 54 	imul   r11,QWORD PTR [r12],0x76543210
    8ffe:	76 
    8fff:	49 f7 fc             	idiv   r12
    9002:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    9006:	0f 8d 10 32 54 76    	jge    0x7654c21c
    900c:	e9 10 32 54 76       	jmp    0x7654c221
    9011:	41 ff e4             	jmp    r12
    9014:	4d 8b dc             	mov    r11,r12
    9017:	4d 8b 1c 24          	mov    r11,QWORD PTR [r12]
    901b:	4d 89 23             	mov    QWORD PTR [r11],r12
    901e:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    9025:	09 00 00 
    9028:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    902f:	00 00 00 
    9032:	e8 10 32 54 76       	call   0x7654c247
    9037:	41 ff d4             	call   r12
    903a:	c3                   	ret    
    903b:	49 d1 ec             	shr    r12,1
    903e:	49 c1 ec 12          	shr    r12,0x12
    9042:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    9046:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    904b:	49 f7 dc             	neg    r12
    904e:	49 f7 1c 24          	neg    QWORD PTR [r12]
    9052:	0f 05                	syscall 
    9054:	41 54                	push   r12
    9056:	41 ff 34 24          	push   QWORD PTR [r12]
    905a:	68 10 32 54 76       	push   0x76543210
    905f:	41 5c                	pop    r12
    9061:	41 8f 04 24          	pop    QWORD PTR [r12]
    9065:	49 ff c4             	inc    r12
    9068:	49 ff 04 24          	inc    QWORD PTR [r12]
    906c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    906d:	f3 e2 12             	repz loop 0x9082
    9070:	e1 12                	loope  0x9084
    9072:	e0 12                	loopne 0x9086
    9074:	f2 45 0f 10 dc       	movsd  xmm11,xmm12
    9079:	f2 45 0f 10 1c 24    	movsd  xmm11,QWORD PTR [r12]
    907f:	f2 4d 0f 2d dc       	cvtsd2si r11,xmm12
    9084:	f2 4d 0f 2d 1c 24    	cvtsd2si r11,QWORD PTR [r12]
    908a:	f2 4d 0f 2a dc       	cvtsi2sd xmm11,r12
    908f:	f2 45 0f 2a 1c 24    	cvtsi2sd xmm11,DWORD PTR [r12]
    9095:	48 2d 10 32 54 76    	sub    rax,0x76543210
    909b:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    90a2:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    90a9:	4d 2b dd             	sub    r11,r13
    90ac:	4d 29 5d 00          	sub    QWORD PTR [r13+0x0],r11
    90b0:	4d 2b 2b             	sub    r13,QWORD PTR [r11]
    90b3:	49 f7 ed             	imul   r13
    90b6:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    90ba:	4d 0f af dd          	imul   r11,r13
    90be:	4d 69 dd 10 32 54 76 	imul   r11,r13,0x76543210
    90c5:	4d 0f af 5d 00       	imul   r11,QWORD PTR [r13+0x0]
    90ca:	4d 69 5d 00 10 32 54 	imul   r11,QWORD PTR [r13+0x0],0x76543210
    90d1:	76 
    90d2:	49 f7 fd             	idiv   r13
    90d5:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    90d9:	0f 8d 10 32 54 76    	jge    0x7654c2ef
    90df:	e9 10 32 54 76       	jmp    0x7654c2f4
    90e4:	41 ff e5             	jmp    r13
    90e7:	4d 8b dd             	mov    r11,r13
    90ea:	4d 8b 5d 00          	mov    r11,QWORD PTR [r13+0x0]
    90ee:	4d 89 2b             	mov    QWORD PTR [r11],r13
    90f1:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    90f8:	09 00 00 
    90fb:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    9102:	00 00 00 
    9105:	e8 10 32 54 76       	call   0x7654c31a
    910a:	41 ff d5             	call   r13
    910d:	c3                   	ret    
    910e:	49 d1 ed             	shr    r13,1
    9111:	49 c1 ed 12          	shr    r13,0x12
    9115:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    9119:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    911e:	49 f7 dd             	neg    r13
    9121:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    9125:	0f 05                	syscall 
    9127:	41 55                	push   r13
    9129:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    912d:	68 10 32 54 76       	push   0x76543210
    9132:	41 5d                	pop    r13
    9134:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    9138:	49 ff c5             	inc    r13
    913b:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    913f:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9140:	f3 e2 12             	repz loop 0x9155
    9143:	e1 12                	loope  0x9157
    9145:	e0 12                	loopne 0x9159
    9147:	f2 45 0f 10 dd       	movsd  xmm11,xmm13
    914c:	f2 45 0f 10 5d 00    	movsd  xmm11,QWORD PTR [r13+0x0]
    9152:	f2 4d 0f 2d dd       	cvtsd2si r11,xmm13
    9157:	f2 4d 0f 2d 5d 00    	cvtsd2si r11,QWORD PTR [r13+0x0]
    915d:	f2 4d 0f 2a dd       	cvtsi2sd xmm11,r13
    9162:	f2 45 0f 2a 5d 00    	cvtsi2sd xmm11,DWORD PTR [r13+0x0]
    9168:	48 2d 10 32 54 76    	sub    rax,0x76543210
    916e:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    9175:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    917c:	4d 2b de             	sub    r11,r14
    917f:	4d 29 1e             	sub    QWORD PTR [r14],r11
    9182:	4d 2b 33             	sub    r14,QWORD PTR [r11]
    9185:	49 f7 ee             	imul   r14
    9188:	49 f7 2e             	imul   QWORD PTR [r14]
    918b:	4d 0f af de          	imul   r11,r14
    918f:	4d 69 de 10 32 54 76 	imul   r11,r14,0x76543210
    9196:	4d 0f af 1e          	imul   r11,QWORD PTR [r14]
    919a:	4d 69 1e 10 32 54 76 	imul   r11,QWORD PTR [r14],0x76543210
    91a1:	49 f7 fe             	idiv   r14
    91a4:	49 f7 3e             	idiv   QWORD PTR [r14]
    91a7:	0f 8d 10 32 54 76    	jge    0x7654c3bd
    91ad:	e9 10 32 54 76       	jmp    0x7654c3c2
    91b2:	41 ff e6             	jmp    r14
    91b5:	4d 8b de             	mov    r11,r14
    91b8:	4d 8b 1e             	mov    r11,QWORD PTR [r14]
    91bb:	4d 89 33             	mov    QWORD PTR [r11],r14
    91be:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    91c5:	09 00 00 
    91c8:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    91cf:	00 00 00 
    91d2:	e8 10 32 54 76       	call   0x7654c3e7
    91d7:	41 ff d6             	call   r14
    91da:	c3                   	ret    
    91db:	49 d1 ee             	shr    r14,1
    91de:	49 c1 ee 12          	shr    r14,0x12
    91e2:	49 d1 2e             	shr    QWORD PTR [r14],1
    91e5:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    91e9:	49 f7 de             	neg    r14
    91ec:	49 f7 1e             	neg    QWORD PTR [r14]
    91ef:	0f 05                	syscall 
    91f1:	41 56                	push   r14
    91f3:	41 ff 36             	push   QWORD PTR [r14]
    91f6:	68 10 32 54 76       	push   0x76543210
    91fb:	41 5e                	pop    r14
    91fd:	41 8f 06             	pop    QWORD PTR [r14]
    9200:	49 ff c6             	inc    r14
    9203:	49 ff 06             	inc    QWORD PTR [r14]
    9206:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9207:	f3 e2 12             	repz loop 0x921c
    920a:	e1 12                	loope  0x921e
    920c:	e0 12                	loopne 0x9220
    920e:	f2 45 0f 10 de       	movsd  xmm11,xmm14
    9213:	f2 45 0f 10 1e       	movsd  xmm11,QWORD PTR [r14]
    9218:	f2 4d 0f 2d de       	cvtsd2si r11,xmm14
    921d:	f2 4d 0f 2d 1e       	cvtsd2si r11,QWORD PTR [r14]
    9222:	f2 4d 0f 2a de       	cvtsi2sd xmm11,r14
    9227:	f2 45 0f 2a 1e       	cvtsi2sd xmm11,DWORD PTR [r14]
    922c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9232:	49 81 eb 10 32 54 76 	sub    r11,0x76543210
    9239:	49 81 2b 10 32 54 76 	sub    QWORD PTR [r11],0x76543210
    9240:	4d 2b df             	sub    r11,r15
    9243:	4d 29 1f             	sub    QWORD PTR [r15],r11
    9246:	4d 2b 3b             	sub    r15,QWORD PTR [r11]
    9249:	49 f7 ef             	imul   r15
    924c:	49 f7 2f             	imul   QWORD PTR [r15]
    924f:	4d 0f af df          	imul   r11,r15
    9253:	4d 69 df 10 32 54 76 	imul   r11,r15,0x76543210
    925a:	4d 0f af 1f          	imul   r11,QWORD PTR [r15]
    925e:	4d 69 1f 10 32 54 76 	imul   r11,QWORD PTR [r15],0x76543210
    9265:	49 f7 ff             	idiv   r15
    9268:	49 f7 3f             	idiv   QWORD PTR [r15]
    926b:	0f 8d 10 32 54 76    	jge    0x7654c481
    9271:	e9 10 32 54 76       	jmp    0x7654c486
    9276:	41 ff e7             	jmp    r15
    9279:	4d 8b df             	mov    r11,r15
    927c:	4d 8b 1f             	mov    r11,QWORD PTR [r15]
    927f:	4d 89 3b             	mov    QWORD PTR [r11],r15
    9282:	49 bb 09 21 43 65 87 	movabs r11,0x98765432109
    9289:	09 00 00 
    928c:	49 bb 10 32 54 76 00 	movabs r11,0x76543210
    9293:	00 00 00 
    9296:	e8 10 32 54 76       	call   0x7654c4ab
    929b:	41 ff d7             	call   r15
    929e:	c3                   	ret    
    929f:	49 d1 ef             	shr    r15,1
    92a2:	49 c1 ef 12          	shr    r15,0x12
    92a6:	49 d1 2f             	shr    QWORD PTR [r15],1
    92a9:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    92ad:	49 f7 df             	neg    r15
    92b0:	49 f7 1f             	neg    QWORD PTR [r15]
    92b3:	0f 05                	syscall 
    92b5:	41 57                	push   r15
    92b7:	41 ff 37             	push   QWORD PTR [r15]
    92ba:	68 10 32 54 76       	push   0x76543210
    92bf:	41 5f                	pop    r15
    92c1:	41 8f 07             	pop    QWORD PTR [r15]
    92c4:	49 ff c7             	inc    r15
    92c7:	49 ff 07             	inc    QWORD PTR [r15]
    92ca:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    92cb:	f3 e2 12             	repz loop 0x92e0
    92ce:	e1 12                	loope  0x92e2
    92d0:	e0 12                	loopne 0x92e4
    92d2:	f2 45 0f 10 df       	movsd  xmm11,xmm15
    92d7:	f2 45 0f 10 1f       	movsd  xmm11,QWORD PTR [r15]
    92dc:	f2 4d 0f 2d df       	cvtsd2si r11,xmm15
    92e1:	f2 4d 0f 2d 1f       	cvtsd2si r11,QWORD PTR [r15]
    92e6:	f2 4d 0f 2a df       	cvtsi2sd xmm11,r15
    92eb:	f2 45 0f 2a 1f       	cvtsi2sd xmm11,DWORD PTR [r15]
    92f0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    92f6:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    92fd:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9304:	76 
    9305:	4c 2b e0             	sub    r12,rax
    9308:	4c 29 20             	sub    QWORD PTR [rax],r12
    930b:	49 2b 04 48          	sub    rax,QWORD PTR [r8+rcx*2]
    930f:	f7 e8                	imul   eax
    9311:	48 f7 28             	imul   QWORD PTR [rax]
    9314:	4c 0f af e0          	imul   r12,rax
    9318:	4c 69 e0 10 32 54 76 	imul   r12,rax,0x76543210
    931f:	4c 0f af 20          	imul   r12,QWORD PTR [rax]
    9323:	4c 69 20 10 32 54 76 	imul   r12,QWORD PTR [rax],0x76543210
    932a:	48 f7 f8             	idiv   rax
    932d:	48 f7 38             	idiv   QWORD PTR [rax]
    9330:	0f 8d 10 32 54 76    	jge    0x7654c546
    9336:	e9 10 32 54 76       	jmp    0x7654c54b
    933b:	ff e0                	jmp    rax
    933d:	4c 8b e0             	mov    r12,rax
    9340:	4c 8b 20             	mov    r12,QWORD PTR [rax]
    9343:	49 89 04 24          	mov    QWORD PTR [r12],rax
    9347:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    934e:	09 00 00 
    9351:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9358:	00 00 00 
    935b:	e8 10 32 54 76       	call   0x7654c570
    9360:	ff d0                	call   rax
    9362:	c3                   	ret    
    9363:	48 d1 e8             	shr    rax,1
    9366:	48 c1 e8 12          	shr    rax,0x12
    936a:	48 d1 28             	shr    QWORD PTR [rax],1
    936d:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    9371:	48 f7 d8             	neg    rax
    9374:	48 f7 18             	neg    QWORD PTR [rax]
    9377:	0f 05                	syscall 
    9379:	50                   	push   rax
    937a:	ff 30                	push   QWORD PTR [rax]
    937c:	68 10 32 54 76       	push   0x76543210
    9381:	58                   	pop    rax
    9382:	8f 00                	pop    QWORD PTR [rax]
    9384:	48 ff c0             	inc    rax
    9387:	48 ff 00             	inc    QWORD PTR [rax]
    938a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    938b:	f3 e2 12             	repz loop 0x93a0
    938e:	e1 12                	loope  0x93a2
    9390:	e0 12                	loopne 0x93a4
    9392:	f2 44 0f 10 e0       	movsd  xmm12,xmm0
    9397:	f2 44 0f 10 20       	movsd  xmm12,QWORD PTR [rax]
    939c:	f2 4c 0f 2d e0       	cvtsd2si r12,xmm0
    93a1:	f2 4c 0f 2d 20       	cvtsd2si r12,QWORD PTR [rax]
    93a6:	f2 4c 0f 2a e0       	cvtsi2sd xmm12,rax
    93ab:	f2 44 0f 2a 20       	cvtsi2sd xmm12,DWORD PTR [rax]
    93b0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    93b6:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    93bd:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    93c4:	76 
    93c5:	4c 2b e1             	sub    r12,rcx
    93c8:	4c 29 21             	sub    QWORD PTR [rcx],r12
    93cb:	49 2b 0c 48          	sub    rcx,QWORD PTR [r8+rcx*2]
    93cf:	f7 e9                	imul   ecx
    93d1:	48 f7 29             	imul   QWORD PTR [rcx]
    93d4:	4c 0f af e1          	imul   r12,rcx
    93d8:	4c 69 e1 10 32 54 76 	imul   r12,rcx,0x76543210
    93df:	4c 0f af 21          	imul   r12,QWORD PTR [rcx]
    93e3:	4c 69 21 10 32 54 76 	imul   r12,QWORD PTR [rcx],0x76543210
    93ea:	48 f7 f9             	idiv   rcx
    93ed:	48 f7 39             	idiv   QWORD PTR [rcx]
    93f0:	0f 8d 10 32 54 76    	jge    0x7654c606
    93f6:	e9 10 32 54 76       	jmp    0x7654c60b
    93fb:	ff e1                	jmp    rcx
    93fd:	4c 8b e1             	mov    r12,rcx
    9400:	4c 8b 21             	mov    r12,QWORD PTR [rcx]
    9403:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
    9407:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    940e:	09 00 00 
    9411:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9418:	00 00 00 
    941b:	e8 10 32 54 76       	call   0x7654c630
    9420:	ff d1                	call   rcx
    9422:	c3                   	ret    
    9423:	48 d1 e9             	shr    rcx,1
    9426:	48 c1 e9 12          	shr    rcx,0x12
    942a:	48 d1 29             	shr    QWORD PTR [rcx],1
    942d:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    9431:	48 f7 d9             	neg    rcx
    9434:	48 f7 19             	neg    QWORD PTR [rcx]
    9437:	0f 05                	syscall 
    9439:	51                   	push   rcx
    943a:	ff 31                	push   QWORD PTR [rcx]
    943c:	68 10 32 54 76       	push   0x76543210
    9441:	59                   	pop    rcx
    9442:	8f 01                	pop    QWORD PTR [rcx]
    9444:	48 ff c1             	inc    rcx
    9447:	48 ff 01             	inc    QWORD PTR [rcx]
    944a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    944b:	f3 e2 12             	repz loop 0x9460
    944e:	e1 12                	loope  0x9462
    9450:	e0 12                	loopne 0x9464
    9452:	f2 44 0f 10 e1       	movsd  xmm12,xmm1
    9457:	f2 44 0f 10 21       	movsd  xmm12,QWORD PTR [rcx]
    945c:	f2 4c 0f 2d e1       	cvtsd2si r12,xmm1
    9461:	f2 4c 0f 2d 21       	cvtsd2si r12,QWORD PTR [rcx]
    9466:	f2 4c 0f 2a e1       	cvtsi2sd xmm12,rcx
    946b:	f2 44 0f 2a 21       	cvtsi2sd xmm12,DWORD PTR [rcx]
    9470:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9476:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    947d:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9484:	76 
    9485:	4c 2b e2             	sub    r12,rdx
    9488:	4c 29 22             	sub    QWORD PTR [rdx],r12
    948b:	49 2b 14 48          	sub    rdx,QWORD PTR [r8+rcx*2]
    948f:	f7 ea                	imul   edx
    9491:	48 f7 2a             	imul   QWORD PTR [rdx]
    9494:	4c 0f af e2          	imul   r12,rdx
    9498:	4c 69 e2 10 32 54 76 	imul   r12,rdx,0x76543210
    949f:	4c 0f af 22          	imul   r12,QWORD PTR [rdx]
    94a3:	4c 69 22 10 32 54 76 	imul   r12,QWORD PTR [rdx],0x76543210
    94aa:	48 f7 fa             	idiv   rdx
    94ad:	48 f7 3a             	idiv   QWORD PTR [rdx]
    94b0:	0f 8d 10 32 54 76    	jge    0x7654c6c6
    94b6:	e9 10 32 54 76       	jmp    0x7654c6cb
    94bb:	ff e2                	jmp    rdx
    94bd:	4c 8b e2             	mov    r12,rdx
    94c0:	4c 8b 22             	mov    r12,QWORD PTR [rdx]
    94c3:	49 89 14 24          	mov    QWORD PTR [r12],rdx
    94c7:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    94ce:	09 00 00 
    94d1:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    94d8:	00 00 00 
    94db:	e8 10 32 54 76       	call   0x7654c6f0
    94e0:	ff d2                	call   rdx
    94e2:	c3                   	ret    
    94e3:	48 d1 ea             	shr    rdx,1
    94e6:	48 c1 ea 12          	shr    rdx,0x12
    94ea:	48 d1 2a             	shr    QWORD PTR [rdx],1
    94ed:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    94f1:	48 f7 da             	neg    rdx
    94f4:	48 f7 1a             	neg    QWORD PTR [rdx]
    94f7:	0f 05                	syscall 
    94f9:	52                   	push   rdx
    94fa:	ff 32                	push   QWORD PTR [rdx]
    94fc:	68 10 32 54 76       	push   0x76543210
    9501:	5a                   	pop    rdx
    9502:	8f 02                	pop    QWORD PTR [rdx]
    9504:	48 ff c2             	inc    rdx
    9507:	48 ff 02             	inc    QWORD PTR [rdx]
    950a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    950b:	f3 e2 12             	repz loop 0x9520
    950e:	e1 12                	loope  0x9522
    9510:	e0 12                	loopne 0x9524
    9512:	f2 44 0f 10 e2       	movsd  xmm12,xmm2
    9517:	f2 44 0f 10 22       	movsd  xmm12,QWORD PTR [rdx]
    951c:	f2 4c 0f 2d e2       	cvtsd2si r12,xmm2
    9521:	f2 4c 0f 2d 22       	cvtsd2si r12,QWORD PTR [rdx]
    9526:	f2 4c 0f 2a e2       	cvtsi2sd xmm12,rdx
    952b:	f2 44 0f 2a 22       	cvtsi2sd xmm12,DWORD PTR [rdx]
    9530:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9536:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    953d:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9544:	76 
    9545:	4c 2b e3             	sub    r12,rbx
    9548:	4c 29 23             	sub    QWORD PTR [rbx],r12
    954b:	49 2b 1c 48          	sub    rbx,QWORD PTR [r8+rcx*2]
    954f:	f7 eb                	imul   ebx
    9551:	48 f7 2b             	imul   QWORD PTR [rbx]
    9554:	4c 0f af e3          	imul   r12,rbx
    9558:	4c 69 e3 10 32 54 76 	imul   r12,rbx,0x76543210
    955f:	4c 0f af 23          	imul   r12,QWORD PTR [rbx]
    9563:	4c 69 23 10 32 54 76 	imul   r12,QWORD PTR [rbx],0x76543210
    956a:	48 f7 fb             	idiv   rbx
    956d:	48 f7 3b             	idiv   QWORD PTR [rbx]
    9570:	0f 8d 10 32 54 76    	jge    0x7654c786
    9576:	e9 10 32 54 76       	jmp    0x7654c78b
    957b:	ff e3                	jmp    rbx
    957d:	4c 8b e3             	mov    r12,rbx
    9580:	4c 8b 23             	mov    r12,QWORD PTR [rbx]
    9583:	49 89 1c 24          	mov    QWORD PTR [r12],rbx
    9587:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    958e:	09 00 00 
    9591:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9598:	00 00 00 
    959b:	e8 10 32 54 76       	call   0x7654c7b0
    95a0:	ff d3                	call   rbx
    95a2:	c3                   	ret    
    95a3:	48 d1 eb             	shr    rbx,1
    95a6:	48 c1 eb 12          	shr    rbx,0x12
    95aa:	48 d1 2b             	shr    QWORD PTR [rbx],1
    95ad:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    95b1:	48 f7 db             	neg    rbx
    95b4:	48 f7 1b             	neg    QWORD PTR [rbx]
    95b7:	0f 05                	syscall 
    95b9:	53                   	push   rbx
    95ba:	ff 33                	push   QWORD PTR [rbx]
    95bc:	68 10 32 54 76       	push   0x76543210
    95c1:	5b                   	pop    rbx
    95c2:	8f 03                	pop    QWORD PTR [rbx]
    95c4:	48 ff c3             	inc    rbx
    95c7:	48 ff 03             	inc    QWORD PTR [rbx]
    95ca:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    95cb:	f3 e2 12             	repz loop 0x95e0
    95ce:	e1 12                	loope  0x95e2
    95d0:	e0 12                	loopne 0x95e4
    95d2:	f2 44 0f 10 e3       	movsd  xmm12,xmm3
    95d7:	f2 44 0f 10 23       	movsd  xmm12,QWORD PTR [rbx]
    95dc:	f2 4c 0f 2d e3       	cvtsd2si r12,xmm3
    95e1:	f2 4c 0f 2d 23       	cvtsd2si r12,QWORD PTR [rbx]
    95e6:	f2 4c 0f 2a e3       	cvtsi2sd xmm12,rbx
    95eb:	f2 44 0f 2a 23       	cvtsi2sd xmm12,DWORD PTR [rbx]
    95f0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    95f6:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    95fd:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9604:	76 
    9605:	4c 2b e4             	sub    r12,rsp
    9608:	4c 29 24 24          	sub    QWORD PTR [rsp],r12
    960c:	49 2b 24 48          	sub    rsp,QWORD PTR [r8+rcx*2]
    9610:	f7 ec                	imul   esp
    9612:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    9616:	4c 0f af e4          	imul   r12,rsp
    961a:	4c 69 e4 10 32 54 76 	imul   r12,rsp,0x76543210
    9621:	4c 0f af 24 24       	imul   r12,QWORD PTR [rsp]
    9626:	4c 69 24 24 10 32 54 	imul   r12,QWORD PTR [rsp],0x76543210
    962d:	76 
    962e:	48 f7 fc             	idiv   rsp
    9631:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    9635:	0f 8d 10 32 54 76    	jge    0x7654c84b
    963b:	e9 10 32 54 76       	jmp    0x7654c850
    9640:	ff e4                	jmp    rsp
    9642:	4c 8b e4             	mov    r12,rsp
    9645:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
    9649:	49 89 24 24          	mov    QWORD PTR [r12],rsp
    964d:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    9654:	09 00 00 
    9657:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    965e:	00 00 00 
    9661:	e8 10 32 54 76       	call   0x7654c876
    9666:	ff d4                	call   rsp
    9668:	c3                   	ret    
    9669:	48 d1 ec             	shr    rsp,1
    966c:	48 c1 ec 12          	shr    rsp,0x12
    9670:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    9674:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    9679:	48 f7 dc             	neg    rsp
    967c:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    9680:	0f 05                	syscall 
    9682:	54                   	push   rsp
    9683:	ff 34 24             	push   QWORD PTR [rsp]
    9686:	68 10 32 54 76       	push   0x76543210
    968b:	5c                   	pop    rsp
    968c:	8f 04 24             	pop    QWORD PTR [rsp]
    968f:	48 ff c4             	inc    rsp
    9692:	48 ff 04 24          	inc    QWORD PTR [rsp]
    9696:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9697:	f3 e2 12             	repz loop 0x96ac
    969a:	e1 12                	loope  0x96ae
    969c:	e0 12                	loopne 0x96b0
    969e:	f2 44 0f 10 e4       	movsd  xmm12,xmm4
    96a3:	f2 44 0f 10 24 24    	movsd  xmm12,QWORD PTR [rsp]
    96a9:	f2 4c 0f 2d e4       	cvtsd2si r12,xmm4
    96ae:	f2 4c 0f 2d 24 24    	cvtsd2si r12,QWORD PTR [rsp]
    96b4:	f2 4c 0f 2a e4       	cvtsi2sd xmm12,rsp
    96b9:	f2 44 0f 2a 24 24    	cvtsi2sd xmm12,DWORD PTR [rsp]
    96bf:	48 2d 10 32 54 76    	sub    rax,0x76543210
    96c5:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    96cc:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    96d3:	76 
    96d4:	4c 2b e5             	sub    r12,rbp
    96d7:	4c 29 65 00          	sub    QWORD PTR [rbp+0x0],r12
    96db:	49 2b 2c 48          	sub    rbp,QWORD PTR [r8+rcx*2]
    96df:	f7 ed                	imul   ebp
    96e1:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    96e5:	4c 0f af e5          	imul   r12,rbp
    96e9:	4c 69 e5 10 32 54 76 	imul   r12,rbp,0x76543210
    96f0:	4c 0f af 65 00       	imul   r12,QWORD PTR [rbp+0x0]
    96f5:	4c 69 65 00 10 32 54 	imul   r12,QWORD PTR [rbp+0x0],0x76543210
    96fc:	76 
    96fd:	48 f7 fd             	idiv   rbp
    9700:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    9704:	0f 8d 10 32 54 76    	jge    0x7654c91a
    970a:	e9 10 32 54 76       	jmp    0x7654c91f
    970f:	ff e5                	jmp    rbp
    9711:	4c 8b e5             	mov    r12,rbp
    9714:	4c 8b 65 00          	mov    r12,QWORD PTR [rbp+0x0]
    9718:	49 89 2c 24          	mov    QWORD PTR [r12],rbp
    971c:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    9723:	09 00 00 
    9726:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    972d:	00 00 00 
    9730:	e8 10 32 54 76       	call   0x7654c945
    9735:	ff d5                	call   rbp
    9737:	c3                   	ret    
    9738:	48 d1 ed             	shr    rbp,1
    973b:	48 c1 ed 12          	shr    rbp,0x12
    973f:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    9743:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    9748:	48 f7 dd             	neg    rbp
    974b:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    974f:	0f 05                	syscall 
    9751:	55                   	push   rbp
    9752:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    9755:	68 10 32 54 76       	push   0x76543210
    975a:	5d                   	pop    rbp
    975b:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    975e:	48 ff c5             	inc    rbp
    9761:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    9765:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9766:	f3 e2 12             	repz loop 0x977b
    9769:	e1 12                	loope  0x977d
    976b:	e0 12                	loopne 0x977f
    976d:	f2 44 0f 10 e5       	movsd  xmm12,xmm5
    9772:	f2 44 0f 10 65 00    	movsd  xmm12,QWORD PTR [rbp+0x0]
    9778:	f2 4c 0f 2d e5       	cvtsd2si r12,xmm5
    977d:	f2 4c 0f 2d 65 00    	cvtsd2si r12,QWORD PTR [rbp+0x0]
    9783:	f2 4c 0f 2a e5       	cvtsi2sd xmm12,rbp
    9788:	f2 44 0f 2a 65 00    	cvtsi2sd xmm12,DWORD PTR [rbp+0x0]
    978e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9794:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    979b:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    97a2:	76 
    97a3:	4c 2b e6             	sub    r12,rsi
    97a6:	4c 29 26             	sub    QWORD PTR [rsi],r12
    97a9:	49 2b 34 48          	sub    rsi,QWORD PTR [r8+rcx*2]
    97ad:	f7 ee                	imul   esi
    97af:	48 f7 2e             	imul   QWORD PTR [rsi]
    97b2:	4c 0f af e6          	imul   r12,rsi
    97b6:	4c 69 e6 10 32 54 76 	imul   r12,rsi,0x76543210
    97bd:	4c 0f af 26          	imul   r12,QWORD PTR [rsi]
    97c1:	4c 69 26 10 32 54 76 	imul   r12,QWORD PTR [rsi],0x76543210
    97c8:	48 f7 fe             	idiv   rsi
    97cb:	48 f7 3e             	idiv   QWORD PTR [rsi]
    97ce:	0f 8d 10 32 54 76    	jge    0x7654c9e4
    97d4:	e9 10 32 54 76       	jmp    0x7654c9e9
    97d9:	ff e6                	jmp    rsi
    97db:	4c 8b e6             	mov    r12,rsi
    97de:	4c 8b 26             	mov    r12,QWORD PTR [rsi]
    97e1:	49 89 34 24          	mov    QWORD PTR [r12],rsi
    97e5:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    97ec:	09 00 00 
    97ef:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    97f6:	00 00 00 
    97f9:	e8 10 32 54 76       	call   0x7654ca0e
    97fe:	ff d6                	call   rsi
    9800:	c3                   	ret    
    9801:	48 d1 ee             	shr    rsi,1
    9804:	48 c1 ee 12          	shr    rsi,0x12
    9808:	48 d1 2e             	shr    QWORD PTR [rsi],1
    980b:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    980f:	48 f7 de             	neg    rsi
    9812:	48 f7 1e             	neg    QWORD PTR [rsi]
    9815:	0f 05                	syscall 
    9817:	56                   	push   rsi
    9818:	ff 36                	push   QWORD PTR [rsi]
    981a:	68 10 32 54 76       	push   0x76543210
    981f:	5e                   	pop    rsi
    9820:	8f 06                	pop    QWORD PTR [rsi]
    9822:	48 ff c6             	inc    rsi
    9825:	48 ff 06             	inc    QWORD PTR [rsi]
    9828:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9829:	f3 e2 12             	repz loop 0x983e
    982c:	e1 12                	loope  0x9840
    982e:	e0 12                	loopne 0x9842
    9830:	f2 44 0f 10 e6       	movsd  xmm12,xmm6
    9835:	f2 44 0f 10 26       	movsd  xmm12,QWORD PTR [rsi]
    983a:	f2 4c 0f 2d e6       	cvtsd2si r12,xmm6
    983f:	f2 4c 0f 2d 26       	cvtsd2si r12,QWORD PTR [rsi]
    9844:	f2 4c 0f 2a e6       	cvtsi2sd xmm12,rsi
    9849:	f2 44 0f 2a 26       	cvtsi2sd xmm12,DWORD PTR [rsi]
    984e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9854:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    985b:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9862:	76 
    9863:	4c 2b e7             	sub    r12,rdi
    9866:	4c 29 27             	sub    QWORD PTR [rdi],r12
    9869:	49 2b 3c 48          	sub    rdi,QWORD PTR [r8+rcx*2]
    986d:	f7 ef                	imul   edi
    986f:	48 f7 2f             	imul   QWORD PTR [rdi]
    9872:	4c 0f af e7          	imul   r12,rdi
    9876:	4c 69 e7 10 32 54 76 	imul   r12,rdi,0x76543210
    987d:	4c 0f af 27          	imul   r12,QWORD PTR [rdi]
    9881:	4c 69 27 10 32 54 76 	imul   r12,QWORD PTR [rdi],0x76543210
    9888:	48 f7 ff             	idiv   rdi
    988b:	48 f7 3f             	idiv   QWORD PTR [rdi]
    988e:	0f 8d 10 32 54 76    	jge    0x7654caa4
    9894:	e9 10 32 54 76       	jmp    0x7654caa9
    9899:	ff e7                	jmp    rdi
    989b:	4c 8b e7             	mov    r12,rdi
    989e:	4c 8b 27             	mov    r12,QWORD PTR [rdi]
    98a1:	49 89 3c 24          	mov    QWORD PTR [r12],rdi
    98a5:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    98ac:	09 00 00 
    98af:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    98b6:	00 00 00 
    98b9:	e8 10 32 54 76       	call   0x7654cace
    98be:	ff d7                	call   rdi
    98c0:	c3                   	ret    
    98c1:	48 d1 ef             	shr    rdi,1
    98c4:	48 c1 ef 12          	shr    rdi,0x12
    98c8:	48 d1 2f             	shr    QWORD PTR [rdi],1
    98cb:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    98cf:	48 f7 df             	neg    rdi
    98d2:	48 f7 1f             	neg    QWORD PTR [rdi]
    98d5:	0f 05                	syscall 
    98d7:	57                   	push   rdi
    98d8:	ff 37                	push   QWORD PTR [rdi]
    98da:	68 10 32 54 76       	push   0x76543210
    98df:	5f                   	pop    rdi
    98e0:	8f 07                	pop    QWORD PTR [rdi]
    98e2:	48 ff c7             	inc    rdi
    98e5:	48 ff 07             	inc    QWORD PTR [rdi]
    98e8:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    98e9:	f3 e2 12             	repz loop 0x98fe
    98ec:	e1 12                	loope  0x9900
    98ee:	e0 12                	loopne 0x9902
    98f0:	f2 44 0f 10 e7       	movsd  xmm12,xmm7
    98f5:	f2 44 0f 10 27       	movsd  xmm12,QWORD PTR [rdi]
    98fa:	f2 4c 0f 2d e7       	cvtsd2si r12,xmm7
    98ff:	f2 4c 0f 2d 27       	cvtsd2si r12,QWORD PTR [rdi]
    9904:	f2 4c 0f 2a e7       	cvtsi2sd xmm12,rdi
    9909:	f2 44 0f 2a 27       	cvtsi2sd xmm12,DWORD PTR [rdi]
    990e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9914:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    991b:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9922:	76 
    9923:	4d 2b e0             	sub    r12,r8
    9926:	4d 29 20             	sub    QWORD PTR [r8],r12
    9929:	4d 2b 04 49          	sub    r8,QWORD PTR [r9+rcx*2]
    992d:	f7 e8                	imul   eax
    992f:	49 f7 28             	imul   QWORD PTR [r8]
    9932:	4d 0f af e0          	imul   r12,r8
    9936:	4d 69 e0 10 32 54 76 	imul   r12,r8,0x76543210
    993d:	4d 0f af 20          	imul   r12,QWORD PTR [r8]
    9941:	4d 69 20 10 32 54 76 	imul   r12,QWORD PTR [r8],0x76543210
    9948:	49 f7 f8             	idiv   r8
    994b:	49 f7 38             	idiv   QWORD PTR [r8]
    994e:	0f 8d 10 32 54 76    	jge    0x7654cb64
    9954:	e9 10 32 54 76       	jmp    0x7654cb69
    9959:	41 ff e0             	jmp    r8
    995c:	4d 8b e0             	mov    r12,r8
    995f:	4d 8b 20             	mov    r12,QWORD PTR [r8]
    9962:	4d 89 04 24          	mov    QWORD PTR [r12],r8
    9966:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    996d:	09 00 00 
    9970:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9977:	00 00 00 
    997a:	e8 10 32 54 76       	call   0x7654cb8f
    997f:	41 ff d0             	call   r8
    9982:	c3                   	ret    
    9983:	49 d1 e8             	shr    r8,1
    9986:	49 c1 e8 12          	shr    r8,0x12
    998a:	49 d1 28             	shr    QWORD PTR [r8],1
    998d:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    9991:	49 f7 d8             	neg    r8
    9994:	49 f7 18             	neg    QWORD PTR [r8]
    9997:	0f 05                	syscall 
    9999:	41 50                	push   r8
    999b:	41 ff 30             	push   QWORD PTR [r8]
    999e:	68 10 32 54 76       	push   0x76543210
    99a3:	41 58                	pop    r8
    99a5:	41 8f 00             	pop    QWORD PTR [r8]
    99a8:	49 ff c0             	inc    r8
    99ab:	49 ff 00             	inc    QWORD PTR [r8]
    99ae:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    99af:	f3 e2 12             	repz loop 0x99c4
    99b2:	e1 12                	loope  0x99c6
    99b4:	e0 12                	loopne 0x99c8
    99b6:	f2 45 0f 10 e0       	movsd  xmm12,xmm8
    99bb:	f2 45 0f 10 20       	movsd  xmm12,QWORD PTR [r8]
    99c0:	f2 4d 0f 2d e0       	cvtsd2si r12,xmm8
    99c5:	f2 4d 0f 2d 20       	cvtsd2si r12,QWORD PTR [r8]
    99ca:	f2 4d 0f 2a e0       	cvtsi2sd xmm12,r8
    99cf:	f2 45 0f 2a 20       	cvtsi2sd xmm12,DWORD PTR [r8]
    99d4:	48 2d 10 32 54 76    	sub    rax,0x76543210
    99da:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    99e1:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    99e8:	76 
    99e9:	4d 2b e1             	sub    r12,r9
    99ec:	4d 29 21             	sub    QWORD PTR [r9],r12
    99ef:	4d 2b 0c 49          	sub    r9,QWORD PTR [r9+rcx*2]
    99f3:	f7 e9                	imul   ecx
    99f5:	49 f7 29             	imul   QWORD PTR [r9]
    99f8:	4d 0f af e1          	imul   r12,r9
    99fc:	4d 69 e1 10 32 54 76 	imul   r12,r9,0x76543210
    9a03:	4d 0f af 21          	imul   r12,QWORD PTR [r9]
    9a07:	4d 69 21 10 32 54 76 	imul   r12,QWORD PTR [r9],0x76543210
    9a0e:	49 f7 f9             	idiv   r9
    9a11:	49 f7 39             	idiv   QWORD PTR [r9]
    9a14:	0f 8d 10 32 54 76    	jge    0x7654cc2a
    9a1a:	e9 10 32 54 76       	jmp    0x7654cc2f
    9a1f:	41 ff e1             	jmp    r9
    9a22:	4d 8b e1             	mov    r12,r9
    9a25:	4d 8b 21             	mov    r12,QWORD PTR [r9]
    9a28:	4d 89 0c 24          	mov    QWORD PTR [r12],r9
    9a2c:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    9a33:	09 00 00 
    9a36:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9a3d:	00 00 00 
    9a40:	e8 10 32 54 76       	call   0x7654cc55
    9a45:	41 ff d1             	call   r9
    9a48:	c3                   	ret    
    9a49:	49 d1 e9             	shr    r9,1
    9a4c:	49 c1 e9 12          	shr    r9,0x12
    9a50:	49 d1 29             	shr    QWORD PTR [r9],1
    9a53:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    9a57:	49 f7 d9             	neg    r9
    9a5a:	49 f7 19             	neg    QWORD PTR [r9]
    9a5d:	0f 05                	syscall 
    9a5f:	41 51                	push   r9
    9a61:	41 ff 31             	push   QWORD PTR [r9]
    9a64:	68 10 32 54 76       	push   0x76543210
    9a69:	41 59                	pop    r9
    9a6b:	41 8f 01             	pop    QWORD PTR [r9]
    9a6e:	49 ff c1             	inc    r9
    9a71:	49 ff 01             	inc    QWORD PTR [r9]
    9a74:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9a75:	f3 e2 12             	repz loop 0x9a8a
    9a78:	e1 12                	loope  0x9a8c
    9a7a:	e0 12                	loopne 0x9a8e
    9a7c:	f2 45 0f 10 e1       	movsd  xmm12,xmm9
    9a81:	f2 45 0f 10 21       	movsd  xmm12,QWORD PTR [r9]
    9a86:	f2 4d 0f 2d e1       	cvtsd2si r12,xmm9
    9a8b:	f2 4d 0f 2d 21       	cvtsd2si r12,QWORD PTR [r9]
    9a90:	f2 4d 0f 2a e1       	cvtsi2sd xmm12,r9
    9a95:	f2 45 0f 2a 21       	cvtsi2sd xmm12,DWORD PTR [r9]
    9a9a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9aa0:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    9aa7:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9aae:	76 
    9aaf:	4d 2b e2             	sub    r12,r10
    9ab2:	4d 29 22             	sub    QWORD PTR [r10],r12
    9ab5:	4d 2b 14 49          	sub    r10,QWORD PTR [r9+rcx*2]
    9ab9:	f7 ea                	imul   edx
    9abb:	49 f7 2a             	imul   QWORD PTR [r10]
    9abe:	4d 0f af e2          	imul   r12,r10
    9ac2:	4d 69 e2 10 32 54 76 	imul   r12,r10,0x76543210
    9ac9:	4d 0f af 22          	imul   r12,QWORD PTR [r10]
    9acd:	4d 69 22 10 32 54 76 	imul   r12,QWORD PTR [r10],0x76543210
    9ad4:	49 f7 fa             	idiv   r10
    9ad7:	49 f7 3a             	idiv   QWORD PTR [r10]
    9ada:	0f 8d 10 32 54 76    	jge    0x7654ccf0
    9ae0:	e9 10 32 54 76       	jmp    0x7654ccf5
    9ae5:	41 ff e2             	jmp    r10
    9ae8:	4d 8b e2             	mov    r12,r10
    9aeb:	4d 8b 22             	mov    r12,QWORD PTR [r10]
    9aee:	4d 89 14 24          	mov    QWORD PTR [r12],r10
    9af2:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    9af9:	09 00 00 
    9afc:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9b03:	00 00 00 
    9b06:	e8 10 32 54 76       	call   0x7654cd1b
    9b0b:	41 ff d2             	call   r10
    9b0e:	c3                   	ret    
    9b0f:	49 d1 ea             	shr    r10,1
    9b12:	49 c1 ea 12          	shr    r10,0x12
    9b16:	49 d1 2a             	shr    QWORD PTR [r10],1
    9b19:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    9b1d:	49 f7 da             	neg    r10
    9b20:	49 f7 1a             	neg    QWORD PTR [r10]
    9b23:	0f 05                	syscall 
    9b25:	41 52                	push   r10
    9b27:	41 ff 32             	push   QWORD PTR [r10]
    9b2a:	68 10 32 54 76       	push   0x76543210
    9b2f:	41 5a                	pop    r10
    9b31:	41 8f 02             	pop    QWORD PTR [r10]
    9b34:	49 ff c2             	inc    r10
    9b37:	49 ff 02             	inc    QWORD PTR [r10]
    9b3a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9b3b:	f3 e2 12             	repz loop 0x9b50
    9b3e:	e1 12                	loope  0x9b52
    9b40:	e0 12                	loopne 0x9b54
    9b42:	f2 45 0f 10 e2       	movsd  xmm12,xmm10
    9b47:	f2 45 0f 10 22       	movsd  xmm12,QWORD PTR [r10]
    9b4c:	f2 4d 0f 2d e2       	cvtsd2si r12,xmm10
    9b51:	f2 4d 0f 2d 22       	cvtsd2si r12,QWORD PTR [r10]
    9b56:	f2 4d 0f 2a e2       	cvtsi2sd xmm12,r10
    9b5b:	f2 45 0f 2a 22       	cvtsi2sd xmm12,DWORD PTR [r10]
    9b60:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9b66:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    9b6d:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9b74:	76 
    9b75:	4d 2b e3             	sub    r12,r11
    9b78:	4d 29 23             	sub    QWORD PTR [r11],r12
    9b7b:	4d 2b 1c 49          	sub    r11,QWORD PTR [r9+rcx*2]
    9b7f:	f7 eb                	imul   ebx
    9b81:	49 f7 2b             	imul   QWORD PTR [r11]
    9b84:	4d 0f af e3          	imul   r12,r11
    9b88:	4d 69 e3 10 32 54 76 	imul   r12,r11,0x76543210
    9b8f:	4d 0f af 23          	imul   r12,QWORD PTR [r11]
    9b93:	4d 69 23 10 32 54 76 	imul   r12,QWORD PTR [r11],0x76543210
    9b9a:	49 f7 fb             	idiv   r11
    9b9d:	49 f7 3b             	idiv   QWORD PTR [r11]
    9ba0:	0f 8d 10 32 54 76    	jge    0x7654cdb6
    9ba6:	e9 10 32 54 76       	jmp    0x7654cdbb
    9bab:	41 ff e3             	jmp    r11
    9bae:	4d 8b e3             	mov    r12,r11
    9bb1:	4d 8b 23             	mov    r12,QWORD PTR [r11]
    9bb4:	4d 89 1c 24          	mov    QWORD PTR [r12],r11
    9bb8:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    9bbf:	09 00 00 
    9bc2:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9bc9:	00 00 00 
    9bcc:	e8 10 32 54 76       	call   0x7654cde1
    9bd1:	41 ff d3             	call   r11
    9bd4:	c3                   	ret    
    9bd5:	49 d1 eb             	shr    r11,1
    9bd8:	49 c1 eb 12          	shr    r11,0x12
    9bdc:	49 d1 2b             	shr    QWORD PTR [r11],1
    9bdf:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    9be3:	49 f7 db             	neg    r11
    9be6:	49 f7 1b             	neg    QWORD PTR [r11]
    9be9:	0f 05                	syscall 
    9beb:	41 53                	push   r11
    9bed:	41 ff 33             	push   QWORD PTR [r11]
    9bf0:	68 10 32 54 76       	push   0x76543210
    9bf5:	41 5b                	pop    r11
    9bf7:	41 8f 03             	pop    QWORD PTR [r11]
    9bfa:	49 ff c3             	inc    r11
    9bfd:	49 ff 03             	inc    QWORD PTR [r11]
    9c00:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9c01:	f3 e2 12             	repz loop 0x9c16
    9c04:	e1 12                	loope  0x9c18
    9c06:	e0 12                	loopne 0x9c1a
    9c08:	f2 45 0f 10 e3       	movsd  xmm12,xmm11
    9c0d:	f2 45 0f 10 23       	movsd  xmm12,QWORD PTR [r11]
    9c12:	f2 4d 0f 2d e3       	cvtsd2si r12,xmm11
    9c17:	f2 4d 0f 2d 23       	cvtsd2si r12,QWORD PTR [r11]
    9c1c:	f2 4d 0f 2a e3       	cvtsi2sd xmm12,r11
    9c21:	f2 45 0f 2a 23       	cvtsi2sd xmm12,DWORD PTR [r11]
    9c26:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9c2c:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    9c33:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9c3a:	76 
    9c3b:	4d 2b e4             	sub    r12,r12
    9c3e:	4d 29 24 24          	sub    QWORD PTR [r12],r12
    9c42:	4d 2b 24 49          	sub    r12,QWORD PTR [r9+rcx*2]
    9c46:	f7 ec                	imul   esp
    9c48:	49 f7 2c 24          	imul   QWORD PTR [r12]
    9c4c:	4d 0f af e4          	imul   r12,r12
    9c50:	4d 69 e4 10 32 54 76 	imul   r12,r12,0x76543210
    9c57:	4d 0f af 24 24       	imul   r12,QWORD PTR [r12]
    9c5c:	4d 69 24 24 10 32 54 	imul   r12,QWORD PTR [r12],0x76543210
    9c63:	76 
    9c64:	49 f7 fc             	idiv   r12
    9c67:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    9c6b:	0f 8d 10 32 54 76    	jge    0x7654ce81
    9c71:	e9 10 32 54 76       	jmp    0x7654ce86
    9c76:	41 ff e4             	jmp    r12
    9c79:	4d 8b e4             	mov    r12,r12
    9c7c:	4d 8b 24 24          	mov    r12,QWORD PTR [r12]
    9c80:	4d 89 24 24          	mov    QWORD PTR [r12],r12
    9c84:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    9c8b:	09 00 00 
    9c8e:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9c95:	00 00 00 
    9c98:	e8 10 32 54 76       	call   0x7654cead
    9c9d:	41 ff d4             	call   r12
    9ca0:	c3                   	ret    
    9ca1:	49 d1 ec             	shr    r12,1
    9ca4:	49 c1 ec 12          	shr    r12,0x12
    9ca8:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    9cac:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    9cb1:	49 f7 dc             	neg    r12
    9cb4:	49 f7 1c 24          	neg    QWORD PTR [r12]
    9cb8:	0f 05                	syscall 
    9cba:	41 54                	push   r12
    9cbc:	41 ff 34 24          	push   QWORD PTR [r12]
    9cc0:	68 10 32 54 76       	push   0x76543210
    9cc5:	41 5c                	pop    r12
    9cc7:	41 8f 04 24          	pop    QWORD PTR [r12]
    9ccb:	49 ff c4             	inc    r12
    9cce:	49 ff 04 24          	inc    QWORD PTR [r12]
    9cd2:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9cd3:	f3 e2 12             	repz loop 0x9ce8
    9cd6:	e1 12                	loope  0x9cea
    9cd8:	e0 12                	loopne 0x9cec
    9cda:	f2 45 0f 10 e4       	movsd  xmm12,xmm12
    9cdf:	f2 45 0f 10 24 24    	movsd  xmm12,QWORD PTR [r12]
    9ce5:	f2 4d 0f 2d e4       	cvtsd2si r12,xmm12
    9cea:	f2 4d 0f 2d 24 24    	cvtsd2si r12,QWORD PTR [r12]
    9cf0:	f2 4d 0f 2a e4       	cvtsi2sd xmm12,r12
    9cf5:	f2 45 0f 2a 24 24    	cvtsi2sd xmm12,DWORD PTR [r12]
    9cfb:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9d01:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    9d08:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9d0f:	76 
    9d10:	4d 2b e5             	sub    r12,r13
    9d13:	4d 29 65 00          	sub    QWORD PTR [r13+0x0],r12
    9d17:	4d 2b 2c 49          	sub    r13,QWORD PTR [r9+rcx*2]
    9d1b:	f7 ed                	imul   ebp
    9d1d:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    9d21:	4d 0f af e5          	imul   r12,r13
    9d25:	4d 69 e5 10 32 54 76 	imul   r12,r13,0x76543210
    9d2c:	4d 0f af 65 00       	imul   r12,QWORD PTR [r13+0x0]
    9d31:	4d 69 65 00 10 32 54 	imul   r12,QWORD PTR [r13+0x0],0x76543210
    9d38:	76 
    9d39:	49 f7 fd             	idiv   r13
    9d3c:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    9d40:	0f 8d 10 32 54 76    	jge    0x7654cf56
    9d46:	e9 10 32 54 76       	jmp    0x7654cf5b
    9d4b:	41 ff e5             	jmp    r13
    9d4e:	4d 8b e5             	mov    r12,r13
    9d51:	4d 8b 65 00          	mov    r12,QWORD PTR [r13+0x0]
    9d55:	4d 89 2c 24          	mov    QWORD PTR [r12],r13
    9d59:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    9d60:	09 00 00 
    9d63:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9d6a:	00 00 00 
    9d6d:	e8 10 32 54 76       	call   0x7654cf82
    9d72:	41 ff d5             	call   r13
    9d75:	c3                   	ret    
    9d76:	49 d1 ed             	shr    r13,1
    9d79:	49 c1 ed 12          	shr    r13,0x12
    9d7d:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    9d81:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    9d86:	49 f7 dd             	neg    r13
    9d89:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    9d8d:	0f 05                	syscall 
    9d8f:	41 55                	push   r13
    9d91:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    9d95:	68 10 32 54 76       	push   0x76543210
    9d9a:	41 5d                	pop    r13
    9d9c:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    9da0:	49 ff c5             	inc    r13
    9da3:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    9da7:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9da8:	f3 e2 12             	repz loop 0x9dbd
    9dab:	e1 12                	loope  0x9dbf
    9dad:	e0 12                	loopne 0x9dc1
    9daf:	f2 45 0f 10 e5       	movsd  xmm12,xmm13
    9db4:	f2 45 0f 10 65 00    	movsd  xmm12,QWORD PTR [r13+0x0]
    9dba:	f2 4d 0f 2d e5       	cvtsd2si r12,xmm13
    9dbf:	f2 4d 0f 2d 65 00    	cvtsd2si r12,QWORD PTR [r13+0x0]
    9dc5:	f2 4d 0f 2a e5       	cvtsi2sd xmm12,r13
    9dca:	f2 45 0f 2a 65 00    	cvtsi2sd xmm12,DWORD PTR [r13+0x0]
    9dd0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9dd6:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    9ddd:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9de4:	76 
    9de5:	4d 2b e6             	sub    r12,r14
    9de8:	4d 29 26             	sub    QWORD PTR [r14],r12
    9deb:	4d 2b 34 49          	sub    r14,QWORD PTR [r9+rcx*2]
    9def:	f7 ee                	imul   esi
    9df1:	49 f7 2e             	imul   QWORD PTR [r14]
    9df4:	4d 0f af e6          	imul   r12,r14
    9df8:	4d 69 e6 10 32 54 76 	imul   r12,r14,0x76543210
    9dff:	4d 0f af 26          	imul   r12,QWORD PTR [r14]
    9e03:	4d 69 26 10 32 54 76 	imul   r12,QWORD PTR [r14],0x76543210
    9e0a:	49 f7 fe             	idiv   r14
    9e0d:	49 f7 3e             	idiv   QWORD PTR [r14]
    9e10:	0f 8d 10 32 54 76    	jge    0x7654d026
    9e16:	e9 10 32 54 76       	jmp    0x7654d02b
    9e1b:	41 ff e6             	jmp    r14
    9e1e:	4d 8b e6             	mov    r12,r14
    9e21:	4d 8b 26             	mov    r12,QWORD PTR [r14]
    9e24:	4d 89 34 24          	mov    QWORD PTR [r12],r14
    9e28:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    9e2f:	09 00 00 
    9e32:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9e39:	00 00 00 
    9e3c:	e8 10 32 54 76       	call   0x7654d051
    9e41:	41 ff d6             	call   r14
    9e44:	c3                   	ret    
    9e45:	49 d1 ee             	shr    r14,1
    9e48:	49 c1 ee 12          	shr    r14,0x12
    9e4c:	49 d1 2e             	shr    QWORD PTR [r14],1
    9e4f:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    9e53:	49 f7 de             	neg    r14
    9e56:	49 f7 1e             	neg    QWORD PTR [r14]
    9e59:	0f 05                	syscall 
    9e5b:	41 56                	push   r14
    9e5d:	41 ff 36             	push   QWORD PTR [r14]
    9e60:	68 10 32 54 76       	push   0x76543210
    9e65:	41 5e                	pop    r14
    9e67:	41 8f 06             	pop    QWORD PTR [r14]
    9e6a:	49 ff c6             	inc    r14
    9e6d:	49 ff 06             	inc    QWORD PTR [r14]
    9e70:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9e71:	f3 e2 12             	repz loop 0x9e86
    9e74:	e1 12                	loope  0x9e88
    9e76:	e0 12                	loopne 0x9e8a
    9e78:	f2 45 0f 10 e6       	movsd  xmm12,xmm14
    9e7d:	f2 45 0f 10 26       	movsd  xmm12,QWORD PTR [r14]
    9e82:	f2 4d 0f 2d e6       	cvtsd2si r12,xmm14
    9e87:	f2 4d 0f 2d 26       	cvtsd2si r12,QWORD PTR [r14]
    9e8c:	f2 4d 0f 2a e6       	cvtsi2sd xmm12,r14
    9e91:	f2 45 0f 2a 26       	cvtsi2sd xmm12,DWORD PTR [r14]
    9e96:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9e9c:	49 81 ec 10 32 54 76 	sub    r12,0x76543210
    9ea3:	49 81 2c 24 10 32 54 	sub    QWORD PTR [r12],0x76543210
    9eaa:	76 
    9eab:	4d 2b e7             	sub    r12,r15
    9eae:	4d 29 27             	sub    QWORD PTR [r15],r12
    9eb1:	4d 2b 3c 49          	sub    r15,QWORD PTR [r9+rcx*2]
    9eb5:	f7 ef                	imul   edi
    9eb7:	49 f7 2f             	imul   QWORD PTR [r15]
    9eba:	4d 0f af e7          	imul   r12,r15
    9ebe:	4d 69 e7 10 32 54 76 	imul   r12,r15,0x76543210
    9ec5:	4d 0f af 27          	imul   r12,QWORD PTR [r15]
    9ec9:	4d 69 27 10 32 54 76 	imul   r12,QWORD PTR [r15],0x76543210
    9ed0:	49 f7 ff             	idiv   r15
    9ed3:	49 f7 3f             	idiv   QWORD PTR [r15]
    9ed6:	0f 8d 10 32 54 76    	jge    0x7654d0ec
    9edc:	e9 10 32 54 76       	jmp    0x7654d0f1
    9ee1:	41 ff e7             	jmp    r15
    9ee4:	4d 8b e7             	mov    r12,r15
    9ee7:	4d 8b 27             	mov    r12,QWORD PTR [r15]
    9eea:	4d 89 3c 24          	mov    QWORD PTR [r12],r15
    9eee:	49 bc 09 21 43 65 87 	movabs r12,0x98765432109
    9ef5:	09 00 00 
    9ef8:	49 bc 10 32 54 76 00 	movabs r12,0x76543210
    9eff:	00 00 00 
    9f02:	e8 10 32 54 76       	call   0x7654d117
    9f07:	41 ff d7             	call   r15
    9f0a:	c3                   	ret    
    9f0b:	49 d1 ef             	shr    r15,1
    9f0e:	49 c1 ef 12          	shr    r15,0x12
    9f12:	49 d1 2f             	shr    QWORD PTR [r15],1
    9f15:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    9f19:	49 f7 df             	neg    r15
    9f1c:	49 f7 1f             	neg    QWORD PTR [r15]
    9f1f:	0f 05                	syscall 
    9f21:	41 57                	push   r15
    9f23:	41 ff 37             	push   QWORD PTR [r15]
    9f26:	68 10 32 54 76       	push   0x76543210
    9f2b:	41 5f                	pop    r15
    9f2d:	41 8f 07             	pop    QWORD PTR [r15]
    9f30:	49 ff c7             	inc    r15
    9f33:	49 ff 07             	inc    QWORD PTR [r15]
    9f36:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9f37:	f3 e2 12             	repz loop 0x9f4c
    9f3a:	e1 12                	loope  0x9f4e
    9f3c:	e0 12                	loopne 0x9f50
    9f3e:	f2 45 0f 10 e7       	movsd  xmm12,xmm15
    9f43:	f2 45 0f 10 27       	movsd  xmm12,QWORD PTR [r15]
    9f48:	f2 4d 0f 2d e7       	cvtsd2si r12,xmm15
    9f4d:	f2 4d 0f 2d 27       	cvtsd2si r12,QWORD PTR [r15]
    9f52:	f2 4d 0f 2a e7       	cvtsi2sd xmm12,r15
    9f57:	f2 45 0f 2a 27       	cvtsi2sd xmm12,DWORD PTR [r15]
    9f5c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    9f62:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    9f69:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    9f70:	76 
    9f71:	4c 2b e8             	sub    r13,rax
    9f74:	4c 29 28             	sub    QWORD PTR [rax],r13
    9f77:	49 2b 05 48 f7 e8 48 	sub    rax,QWORD PTR [rip+0x48e8f748]        # 0x48e996c6
    9f7e:	f7 28                	imul   DWORD PTR [rax]
    9f80:	4c 0f af e8          	imul   r13,rax
    9f84:	4c 69 e8 10 32 54 76 	imul   r13,rax,0x76543210
    9f8b:	4c 0f af 28          	imul   r13,QWORD PTR [rax]
    9f8f:	4c 69 28 10 32 54 76 	imul   r13,QWORD PTR [rax],0x76543210
    9f96:	48 f7 f8             	idiv   rax
    9f99:	48 f7 38             	idiv   QWORD PTR [rax]
    9f9c:	0f 8d 10 32 54 76    	jge    0x7654d1b2
    9fa2:	e9 10 32 54 76       	jmp    0x7654d1b7
    9fa7:	ff e0                	jmp    rax
    9fa9:	4c 8b e8             	mov    r13,rax
    9fac:	4c 8b 28             	mov    r13,QWORD PTR [rax]
    9faf:	49 89 45 00          	mov    QWORD PTR [r13+0x0],rax
    9fb3:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    9fba:	09 00 00 
    9fbd:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    9fc4:	00 00 00 
    9fc7:	e8 10 32 54 76       	call   0x7654d1dc
    9fcc:	ff d0                	call   rax
    9fce:	c3                   	ret    
    9fcf:	48 d1 e8             	shr    rax,1
    9fd2:	48 c1 e8 12          	shr    rax,0x12
    9fd6:	48 d1 28             	shr    QWORD PTR [rax],1
    9fd9:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    9fdd:	48 f7 d8             	neg    rax
    9fe0:	48 f7 18             	neg    QWORD PTR [rax]
    9fe3:	0f 05                	syscall 
    9fe5:	50                   	push   rax
    9fe6:	ff 30                	push   QWORD PTR [rax]
    9fe8:	68 10 32 54 76       	push   0x76543210
    9fed:	58                   	pop    rax
    9fee:	8f 00                	pop    QWORD PTR [rax]
    9ff0:	48 ff c0             	inc    rax
    9ff3:	48 ff 00             	inc    QWORD PTR [rax]
    9ff6:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    9ff7:	f3 e2 12             	repz loop 0xa00c
    9ffa:	e1 12                	loope  0xa00e
    9ffc:	e0 12                	loopne 0xa010
    9ffe:	f2 44 0f 10 e8       	movsd  xmm13,xmm0
    a003:	f2 44 0f 10 28       	movsd  xmm13,QWORD PTR [rax]
    a008:	f2 4c 0f 2d e8       	cvtsd2si r13,xmm0
    a00d:	f2 4c 0f 2d 28       	cvtsd2si r13,QWORD PTR [rax]
    a012:	f2 4c 0f 2a e8       	cvtsi2sd xmm13,rax
    a017:	f2 44 0f 2a 28       	cvtsi2sd xmm13,DWORD PTR [rax]
    a01c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a022:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a029:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a030:	76 
    a031:	4c 2b e9             	sub    r13,rcx
    a034:	4c 29 29             	sub    QWORD PTR [rcx],r13
    a037:	49 2b 0d 48 f7 e9 48 	sub    rcx,QWORD PTR [rip+0x48e9f748]        # 0x48ea9786
    a03e:	f7 29                	imul   DWORD PTR [rcx]
    a040:	4c 0f af e9          	imul   r13,rcx
    a044:	4c 69 e9 10 32 54 76 	imul   r13,rcx,0x76543210
    a04b:	4c 0f af 29          	imul   r13,QWORD PTR [rcx]
    a04f:	4c 69 29 10 32 54 76 	imul   r13,QWORD PTR [rcx],0x76543210
    a056:	48 f7 f9             	idiv   rcx
    a059:	48 f7 39             	idiv   QWORD PTR [rcx]
    a05c:	0f 8d 10 32 54 76    	jge    0x7654d272
    a062:	e9 10 32 54 76       	jmp    0x7654d277
    a067:	ff e1                	jmp    rcx
    a069:	4c 8b e9             	mov    r13,rcx
    a06c:	4c 8b 29             	mov    r13,QWORD PTR [rcx]
    a06f:	49 89 4d 00          	mov    QWORD PTR [r13+0x0],rcx
    a073:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a07a:	09 00 00 
    a07d:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a084:	00 00 00 
    a087:	e8 10 32 54 76       	call   0x7654d29c
    a08c:	ff d1                	call   rcx
    a08e:	c3                   	ret    
    a08f:	48 d1 e9             	shr    rcx,1
    a092:	48 c1 e9 12          	shr    rcx,0x12
    a096:	48 d1 29             	shr    QWORD PTR [rcx],1
    a099:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    a09d:	48 f7 d9             	neg    rcx
    a0a0:	48 f7 19             	neg    QWORD PTR [rcx]
    a0a3:	0f 05                	syscall 
    a0a5:	51                   	push   rcx
    a0a6:	ff 31                	push   QWORD PTR [rcx]
    a0a8:	68 10 32 54 76       	push   0x76543210
    a0ad:	59                   	pop    rcx
    a0ae:	8f 01                	pop    QWORD PTR [rcx]
    a0b0:	48 ff c1             	inc    rcx
    a0b3:	48 ff 01             	inc    QWORD PTR [rcx]
    a0b6:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a0b7:	f3 e2 12             	repz loop 0xa0cc
    a0ba:	e1 12                	loope  0xa0ce
    a0bc:	e0 12                	loopne 0xa0d0
    a0be:	f2 44 0f 10 e9       	movsd  xmm13,xmm1
    a0c3:	f2 44 0f 10 29       	movsd  xmm13,QWORD PTR [rcx]
    a0c8:	f2 4c 0f 2d e9       	cvtsd2si r13,xmm1
    a0cd:	f2 4c 0f 2d 29       	cvtsd2si r13,QWORD PTR [rcx]
    a0d2:	f2 4c 0f 2a e9       	cvtsi2sd xmm13,rcx
    a0d7:	f2 44 0f 2a 29       	cvtsi2sd xmm13,DWORD PTR [rcx]
    a0dc:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a0e2:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a0e9:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a0f0:	76 
    a0f1:	4c 2b ea             	sub    r13,rdx
    a0f4:	4c 29 2a             	sub    QWORD PTR [rdx],r13
    a0f7:	49 2b 15 48 f7 ea 48 	sub    rdx,QWORD PTR [rip+0x48eaf748]        # 0x48eb9846
    a0fe:	f7 2a                	imul   DWORD PTR [rdx]
    a100:	4c 0f af ea          	imul   r13,rdx
    a104:	4c 69 ea 10 32 54 76 	imul   r13,rdx,0x76543210
    a10b:	4c 0f af 2a          	imul   r13,QWORD PTR [rdx]
    a10f:	4c 69 2a 10 32 54 76 	imul   r13,QWORD PTR [rdx],0x76543210
    a116:	48 f7 fa             	idiv   rdx
    a119:	48 f7 3a             	idiv   QWORD PTR [rdx]
    a11c:	0f 8d 10 32 54 76    	jge    0x7654d332
    a122:	e9 10 32 54 76       	jmp    0x7654d337
    a127:	ff e2                	jmp    rdx
    a129:	4c 8b ea             	mov    r13,rdx
    a12c:	4c 8b 2a             	mov    r13,QWORD PTR [rdx]
    a12f:	49 89 55 00          	mov    QWORD PTR [r13+0x0],rdx
    a133:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a13a:	09 00 00 
    a13d:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a144:	00 00 00 
    a147:	e8 10 32 54 76       	call   0x7654d35c
    a14c:	ff d2                	call   rdx
    a14e:	c3                   	ret    
    a14f:	48 d1 ea             	shr    rdx,1
    a152:	48 c1 ea 12          	shr    rdx,0x12
    a156:	48 d1 2a             	shr    QWORD PTR [rdx],1
    a159:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    a15d:	48 f7 da             	neg    rdx
    a160:	48 f7 1a             	neg    QWORD PTR [rdx]
    a163:	0f 05                	syscall 
    a165:	52                   	push   rdx
    a166:	ff 32                	push   QWORD PTR [rdx]
    a168:	68 10 32 54 76       	push   0x76543210
    a16d:	5a                   	pop    rdx
    a16e:	8f 02                	pop    QWORD PTR [rdx]
    a170:	48 ff c2             	inc    rdx
    a173:	48 ff 02             	inc    QWORD PTR [rdx]
    a176:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a177:	f3 e2 12             	repz loop 0xa18c
    a17a:	e1 12                	loope  0xa18e
    a17c:	e0 12                	loopne 0xa190
    a17e:	f2 44 0f 10 ea       	movsd  xmm13,xmm2
    a183:	f2 44 0f 10 2a       	movsd  xmm13,QWORD PTR [rdx]
    a188:	f2 4c 0f 2d ea       	cvtsd2si r13,xmm2
    a18d:	f2 4c 0f 2d 2a       	cvtsd2si r13,QWORD PTR [rdx]
    a192:	f2 4c 0f 2a ea       	cvtsi2sd xmm13,rdx
    a197:	f2 44 0f 2a 2a       	cvtsi2sd xmm13,DWORD PTR [rdx]
    a19c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a1a2:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a1a9:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a1b0:	76 
    a1b1:	4c 2b eb             	sub    r13,rbx
    a1b4:	4c 29 2b             	sub    QWORD PTR [rbx],r13
    a1b7:	49 2b 1d 48 f7 eb 48 	sub    rbx,QWORD PTR [rip+0x48ebf748]        # 0x48ec9906
    a1be:	f7 2b                	imul   DWORD PTR [rbx]
    a1c0:	4c 0f af eb          	imul   r13,rbx
    a1c4:	4c 69 eb 10 32 54 76 	imul   r13,rbx,0x76543210
    a1cb:	4c 0f af 2b          	imul   r13,QWORD PTR [rbx]
    a1cf:	4c 69 2b 10 32 54 76 	imul   r13,QWORD PTR [rbx],0x76543210
    a1d6:	48 f7 fb             	idiv   rbx
    a1d9:	48 f7 3b             	idiv   QWORD PTR [rbx]
    a1dc:	0f 8d 10 32 54 76    	jge    0x7654d3f2
    a1e2:	e9 10 32 54 76       	jmp    0x7654d3f7
    a1e7:	ff e3                	jmp    rbx
    a1e9:	4c 8b eb             	mov    r13,rbx
    a1ec:	4c 8b 2b             	mov    r13,QWORD PTR [rbx]
    a1ef:	49 89 5d 00          	mov    QWORD PTR [r13+0x0],rbx
    a1f3:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a1fa:	09 00 00 
    a1fd:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a204:	00 00 00 
    a207:	e8 10 32 54 76       	call   0x7654d41c
    a20c:	ff d3                	call   rbx
    a20e:	c3                   	ret    
    a20f:	48 d1 eb             	shr    rbx,1
    a212:	48 c1 eb 12          	shr    rbx,0x12
    a216:	48 d1 2b             	shr    QWORD PTR [rbx],1
    a219:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    a21d:	48 f7 db             	neg    rbx
    a220:	48 f7 1b             	neg    QWORD PTR [rbx]
    a223:	0f 05                	syscall 
    a225:	53                   	push   rbx
    a226:	ff 33                	push   QWORD PTR [rbx]
    a228:	68 10 32 54 76       	push   0x76543210
    a22d:	5b                   	pop    rbx
    a22e:	8f 03                	pop    QWORD PTR [rbx]
    a230:	48 ff c3             	inc    rbx
    a233:	48 ff 03             	inc    QWORD PTR [rbx]
    a236:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a237:	f3 e2 12             	repz loop 0xa24c
    a23a:	e1 12                	loope  0xa24e
    a23c:	e0 12                	loopne 0xa250
    a23e:	f2 44 0f 10 eb       	movsd  xmm13,xmm3
    a243:	f2 44 0f 10 2b       	movsd  xmm13,QWORD PTR [rbx]
    a248:	f2 4c 0f 2d eb       	cvtsd2si r13,xmm3
    a24d:	f2 4c 0f 2d 2b       	cvtsd2si r13,QWORD PTR [rbx]
    a252:	f2 4c 0f 2a eb       	cvtsi2sd xmm13,rbx
    a257:	f2 44 0f 2a 2b       	cvtsi2sd xmm13,DWORD PTR [rbx]
    a25c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a262:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a269:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a270:	76 
    a271:	4c 2b ec             	sub    r13,rsp
    a274:	4c 29 2c 24          	sub    QWORD PTR [rsp],r13
    a278:	49 2b 25 48 f7 ec 48 	sub    rsp,QWORD PTR [rip+0x48ecf748]        # 0x48ed99c7
    a27f:	f7 2c 24             	imul   DWORD PTR [rsp]
    a282:	4c 0f af ec          	imul   r13,rsp
    a286:	4c 69 ec 10 32 54 76 	imul   r13,rsp,0x76543210
    a28d:	4c 0f af 2c 24       	imul   r13,QWORD PTR [rsp]
    a292:	4c 69 2c 24 10 32 54 	imul   r13,QWORD PTR [rsp],0x76543210
    a299:	76 
    a29a:	48 f7 fc             	idiv   rsp
    a29d:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    a2a1:	0f 8d 10 32 54 76    	jge    0x7654d4b7
    a2a7:	e9 10 32 54 76       	jmp    0x7654d4bc
    a2ac:	ff e4                	jmp    rsp
    a2ae:	4c 8b ec             	mov    r13,rsp
    a2b1:	4c 8b 2c 24          	mov    r13,QWORD PTR [rsp]
    a2b5:	49 89 65 00          	mov    QWORD PTR [r13+0x0],rsp
    a2b9:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a2c0:	09 00 00 
    a2c3:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a2ca:	00 00 00 
    a2cd:	e8 10 32 54 76       	call   0x7654d4e2
    a2d2:	ff d4                	call   rsp
    a2d4:	c3                   	ret    
    a2d5:	48 d1 ec             	shr    rsp,1
    a2d8:	48 c1 ec 12          	shr    rsp,0x12
    a2dc:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    a2e0:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    a2e5:	48 f7 dc             	neg    rsp
    a2e8:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    a2ec:	0f 05                	syscall 
    a2ee:	54                   	push   rsp
    a2ef:	ff 34 24             	push   QWORD PTR [rsp]
    a2f2:	68 10 32 54 76       	push   0x76543210
    a2f7:	5c                   	pop    rsp
    a2f8:	8f 04 24             	pop    QWORD PTR [rsp]
    a2fb:	48 ff c4             	inc    rsp
    a2fe:	48 ff 04 24          	inc    QWORD PTR [rsp]
    a302:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a303:	f3 e2 12             	repz loop 0xa318
    a306:	e1 12                	loope  0xa31a
    a308:	e0 12                	loopne 0xa31c
    a30a:	f2 44 0f 10 ec       	movsd  xmm13,xmm4
    a30f:	f2 44 0f 10 2c 24    	movsd  xmm13,QWORD PTR [rsp]
    a315:	f2 4c 0f 2d ec       	cvtsd2si r13,xmm4
    a31a:	f2 4c 0f 2d 2c 24    	cvtsd2si r13,QWORD PTR [rsp]
    a320:	f2 4c 0f 2a ec       	cvtsi2sd xmm13,rsp
    a325:	f2 44 0f 2a 2c 24    	cvtsi2sd xmm13,DWORD PTR [rsp]
    a32b:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a331:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a338:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a33f:	76 
    a340:	4c 2b ed             	sub    r13,rbp
    a343:	4c 29 6d 00          	sub    QWORD PTR [rbp+0x0],r13
    a347:	49 2b 2d 48 f7 ed 48 	sub    rbp,QWORD PTR [rip+0x48edf748]        # 0x48ee9a96
    a34e:	f7 6d 00             	imul   DWORD PTR [rbp+0x0]
    a351:	4c 0f af ed          	imul   r13,rbp
    a355:	4c 69 ed 10 32 54 76 	imul   r13,rbp,0x76543210
    a35c:	4c 0f af 6d 00       	imul   r13,QWORD PTR [rbp+0x0]
    a361:	4c 69 6d 00 10 32 54 	imul   r13,QWORD PTR [rbp+0x0],0x76543210
    a368:	76 
    a369:	48 f7 fd             	idiv   rbp
    a36c:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    a370:	0f 8d 10 32 54 76    	jge    0x7654d586
    a376:	e9 10 32 54 76       	jmp    0x7654d58b
    a37b:	ff e5                	jmp    rbp
    a37d:	4c 8b ed             	mov    r13,rbp
    a380:	4c 8b 6d 00          	mov    r13,QWORD PTR [rbp+0x0]
    a384:	49 89 6d 00          	mov    QWORD PTR [r13+0x0],rbp
    a388:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a38f:	09 00 00 
    a392:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a399:	00 00 00 
    a39c:	e8 10 32 54 76       	call   0x7654d5b1
    a3a1:	ff d5                	call   rbp
    a3a3:	c3                   	ret    
    a3a4:	48 d1 ed             	shr    rbp,1
    a3a7:	48 c1 ed 12          	shr    rbp,0x12
    a3ab:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    a3af:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    a3b4:	48 f7 dd             	neg    rbp
    a3b7:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    a3bb:	0f 05                	syscall 
    a3bd:	55                   	push   rbp
    a3be:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    a3c1:	68 10 32 54 76       	push   0x76543210
    a3c6:	5d                   	pop    rbp
    a3c7:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    a3ca:	48 ff c5             	inc    rbp
    a3cd:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    a3d1:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a3d2:	f3 e2 12             	repz loop 0xa3e7
    a3d5:	e1 12                	loope  0xa3e9
    a3d7:	e0 12                	loopne 0xa3eb
    a3d9:	f2 44 0f 10 ed       	movsd  xmm13,xmm5
    a3de:	f2 44 0f 10 6d 00    	movsd  xmm13,QWORD PTR [rbp+0x0]
    a3e4:	f2 4c 0f 2d ed       	cvtsd2si r13,xmm5
    a3e9:	f2 4c 0f 2d 6d 00    	cvtsd2si r13,QWORD PTR [rbp+0x0]
    a3ef:	f2 4c 0f 2a ed       	cvtsi2sd xmm13,rbp
    a3f4:	f2 44 0f 2a 6d 00    	cvtsi2sd xmm13,DWORD PTR [rbp+0x0]
    a3fa:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a400:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a407:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a40e:	76 
    a40f:	4c 2b ee             	sub    r13,rsi
    a412:	4c 29 2e             	sub    QWORD PTR [rsi],r13
    a415:	49 2b 35 48 f7 ee 48 	sub    rsi,QWORD PTR [rip+0x48eef748]        # 0x48ef9b64
    a41c:	f7 2e                	imul   DWORD PTR [rsi]
    a41e:	4c 0f af ee          	imul   r13,rsi
    a422:	4c 69 ee 10 32 54 76 	imul   r13,rsi,0x76543210
    a429:	4c 0f af 2e          	imul   r13,QWORD PTR [rsi]
    a42d:	4c 69 2e 10 32 54 76 	imul   r13,QWORD PTR [rsi],0x76543210
    a434:	48 f7 fe             	idiv   rsi
    a437:	48 f7 3e             	idiv   QWORD PTR [rsi]
    a43a:	0f 8d 10 32 54 76    	jge    0x7654d650
    a440:	e9 10 32 54 76       	jmp    0x7654d655
    a445:	ff e6                	jmp    rsi
    a447:	4c 8b ee             	mov    r13,rsi
    a44a:	4c 8b 2e             	mov    r13,QWORD PTR [rsi]
    a44d:	49 89 75 00          	mov    QWORD PTR [r13+0x0],rsi
    a451:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a458:	09 00 00 
    a45b:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a462:	00 00 00 
    a465:	e8 10 32 54 76       	call   0x7654d67a
    a46a:	ff d6                	call   rsi
    a46c:	c3                   	ret    
    a46d:	48 d1 ee             	shr    rsi,1
    a470:	48 c1 ee 12          	shr    rsi,0x12
    a474:	48 d1 2e             	shr    QWORD PTR [rsi],1
    a477:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    a47b:	48 f7 de             	neg    rsi
    a47e:	48 f7 1e             	neg    QWORD PTR [rsi]
    a481:	0f 05                	syscall 
    a483:	56                   	push   rsi
    a484:	ff 36                	push   QWORD PTR [rsi]
    a486:	68 10 32 54 76       	push   0x76543210
    a48b:	5e                   	pop    rsi
    a48c:	8f 06                	pop    QWORD PTR [rsi]
    a48e:	48 ff c6             	inc    rsi
    a491:	48 ff 06             	inc    QWORD PTR [rsi]
    a494:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a495:	f3 e2 12             	repz loop 0xa4aa
    a498:	e1 12                	loope  0xa4ac
    a49a:	e0 12                	loopne 0xa4ae
    a49c:	f2 44 0f 10 ee       	movsd  xmm13,xmm6
    a4a1:	f2 44 0f 10 2e       	movsd  xmm13,QWORD PTR [rsi]
    a4a6:	f2 4c 0f 2d ee       	cvtsd2si r13,xmm6
    a4ab:	f2 4c 0f 2d 2e       	cvtsd2si r13,QWORD PTR [rsi]
    a4b0:	f2 4c 0f 2a ee       	cvtsi2sd xmm13,rsi
    a4b5:	f2 44 0f 2a 2e       	cvtsi2sd xmm13,DWORD PTR [rsi]
    a4ba:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a4c0:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a4c7:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a4ce:	76 
    a4cf:	4c 2b ef             	sub    r13,rdi
    a4d2:	4c 29 2f             	sub    QWORD PTR [rdi],r13
    a4d5:	49 2b 3d 48 f7 ef 48 	sub    rdi,QWORD PTR [rip+0x48eff748]        # 0x48f09c24
    a4dc:	f7 2f                	imul   DWORD PTR [rdi]
    a4de:	4c 0f af ef          	imul   r13,rdi
    a4e2:	4c 69 ef 10 32 54 76 	imul   r13,rdi,0x76543210
    a4e9:	4c 0f af 2f          	imul   r13,QWORD PTR [rdi]
    a4ed:	4c 69 2f 10 32 54 76 	imul   r13,QWORD PTR [rdi],0x76543210
    a4f4:	48 f7 ff             	idiv   rdi
    a4f7:	48 f7 3f             	idiv   QWORD PTR [rdi]
    a4fa:	0f 8d 10 32 54 76    	jge    0x7654d710
    a500:	e9 10 32 54 76       	jmp    0x7654d715
    a505:	ff e7                	jmp    rdi
    a507:	4c 8b ef             	mov    r13,rdi
    a50a:	4c 8b 2f             	mov    r13,QWORD PTR [rdi]
    a50d:	49 89 7d 00          	mov    QWORD PTR [r13+0x0],rdi
    a511:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a518:	09 00 00 
    a51b:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a522:	00 00 00 
    a525:	e8 10 32 54 76       	call   0x7654d73a
    a52a:	ff d7                	call   rdi
    a52c:	c3                   	ret    
    a52d:	48 d1 ef             	shr    rdi,1
    a530:	48 c1 ef 12          	shr    rdi,0x12
    a534:	48 d1 2f             	shr    QWORD PTR [rdi],1
    a537:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    a53b:	48 f7 df             	neg    rdi
    a53e:	48 f7 1f             	neg    QWORD PTR [rdi]
    a541:	0f 05                	syscall 
    a543:	57                   	push   rdi
    a544:	ff 37                	push   QWORD PTR [rdi]
    a546:	68 10 32 54 76       	push   0x76543210
    a54b:	5f                   	pop    rdi
    a54c:	8f 07                	pop    QWORD PTR [rdi]
    a54e:	48 ff c7             	inc    rdi
    a551:	48 ff 07             	inc    QWORD PTR [rdi]
    a554:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a555:	f3 e2 12             	repz loop 0xa56a
    a558:	e1 12                	loope  0xa56c
    a55a:	e0 12                	loopne 0xa56e
    a55c:	f2 44 0f 10 ef       	movsd  xmm13,xmm7
    a561:	f2 44 0f 10 2f       	movsd  xmm13,QWORD PTR [rdi]
    a566:	f2 4c 0f 2d ef       	cvtsd2si r13,xmm7
    a56b:	f2 4c 0f 2d 2f       	cvtsd2si r13,QWORD PTR [rdi]
    a570:	f2 4c 0f 2a ef       	cvtsi2sd xmm13,rdi
    a575:	f2 44 0f 2a 2f       	cvtsi2sd xmm13,DWORD PTR [rdi]
    a57a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a580:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a587:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a58e:	76 
    a58f:	4d 2b e8             	sub    r13,r8
    a592:	4d 29 28             	sub    QWORD PTR [r8],r13
    a595:	4d 2b 05 49 f7 e8 49 	sub    r8,QWORD PTR [rip+0x49e8f749]        # 0x49e99ce5
    a59c:	f7 28                	imul   DWORD PTR [rax]
    a59e:	4d 0f af e8          	imul   r13,r8
    a5a2:	4d 69 e8 10 32 54 76 	imul   r13,r8,0x76543210
    a5a9:	4d 0f af 28          	imul   r13,QWORD PTR [r8]
    a5ad:	4d 69 28 10 32 54 76 	imul   r13,QWORD PTR [r8],0x76543210
    a5b4:	49 f7 f8             	idiv   r8
    a5b7:	49 f7 38             	idiv   QWORD PTR [r8]
    a5ba:	0f 8d 10 32 54 76    	jge    0x7654d7d0
    a5c0:	e9 10 32 54 76       	jmp    0x7654d7d5
    a5c5:	41 ff e0             	jmp    r8
    a5c8:	4d 8b e8             	mov    r13,r8
    a5cb:	4d 8b 28             	mov    r13,QWORD PTR [r8]
    a5ce:	4d 89 45 00          	mov    QWORD PTR [r13+0x0],r8
    a5d2:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a5d9:	09 00 00 
    a5dc:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a5e3:	00 00 00 
    a5e6:	e8 10 32 54 76       	call   0x7654d7fb
    a5eb:	41 ff d0             	call   r8
    a5ee:	c3                   	ret    
    a5ef:	49 d1 e8             	shr    r8,1
    a5f2:	49 c1 e8 12          	shr    r8,0x12
    a5f6:	49 d1 28             	shr    QWORD PTR [r8],1
    a5f9:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    a5fd:	49 f7 d8             	neg    r8
    a600:	49 f7 18             	neg    QWORD PTR [r8]
    a603:	0f 05                	syscall 
    a605:	41 50                	push   r8
    a607:	41 ff 30             	push   QWORD PTR [r8]
    a60a:	68 10 32 54 76       	push   0x76543210
    a60f:	41 58                	pop    r8
    a611:	41 8f 00             	pop    QWORD PTR [r8]
    a614:	49 ff c0             	inc    r8
    a617:	49 ff 00             	inc    QWORD PTR [r8]
    a61a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a61b:	f3 e2 12             	repz loop 0xa630
    a61e:	e1 12                	loope  0xa632
    a620:	e0 12                	loopne 0xa634
    a622:	f2 45 0f 10 e8       	movsd  xmm13,xmm8
    a627:	f2 45 0f 10 28       	movsd  xmm13,QWORD PTR [r8]
    a62c:	f2 4d 0f 2d e8       	cvtsd2si r13,xmm8
    a631:	f2 4d 0f 2d 28       	cvtsd2si r13,QWORD PTR [r8]
    a636:	f2 4d 0f 2a e8       	cvtsi2sd xmm13,r8
    a63b:	f2 45 0f 2a 28       	cvtsi2sd xmm13,DWORD PTR [r8]
    a640:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a646:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a64d:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a654:	76 
    a655:	4d 2b e9             	sub    r13,r9
    a658:	4d 29 29             	sub    QWORD PTR [r9],r13
    a65b:	4d 2b 0d 49 f7 e9 49 	sub    r9,QWORD PTR [rip+0x49e9f749]        # 0x49ea9dab
    a662:	f7 29                	imul   DWORD PTR [rcx]
    a664:	4d 0f af e9          	imul   r13,r9
    a668:	4d 69 e9 10 32 54 76 	imul   r13,r9,0x76543210
    a66f:	4d 0f af 29          	imul   r13,QWORD PTR [r9]
    a673:	4d 69 29 10 32 54 76 	imul   r13,QWORD PTR [r9],0x76543210
    a67a:	49 f7 f9             	idiv   r9
    a67d:	49 f7 39             	idiv   QWORD PTR [r9]
    a680:	0f 8d 10 32 54 76    	jge    0x7654d896
    a686:	e9 10 32 54 76       	jmp    0x7654d89b
    a68b:	41 ff e1             	jmp    r9
    a68e:	4d 8b e9             	mov    r13,r9
    a691:	4d 8b 29             	mov    r13,QWORD PTR [r9]
    a694:	4d 89 4d 00          	mov    QWORD PTR [r13+0x0],r9
    a698:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a69f:	09 00 00 
    a6a2:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a6a9:	00 00 00 
    a6ac:	e8 10 32 54 76       	call   0x7654d8c1
    a6b1:	41 ff d1             	call   r9
    a6b4:	c3                   	ret    
    a6b5:	49 d1 e9             	shr    r9,1
    a6b8:	49 c1 e9 12          	shr    r9,0x12
    a6bc:	49 d1 29             	shr    QWORD PTR [r9],1
    a6bf:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    a6c3:	49 f7 d9             	neg    r9
    a6c6:	49 f7 19             	neg    QWORD PTR [r9]
    a6c9:	0f 05                	syscall 
    a6cb:	41 51                	push   r9
    a6cd:	41 ff 31             	push   QWORD PTR [r9]
    a6d0:	68 10 32 54 76       	push   0x76543210
    a6d5:	41 59                	pop    r9
    a6d7:	41 8f 01             	pop    QWORD PTR [r9]
    a6da:	49 ff c1             	inc    r9
    a6dd:	49 ff 01             	inc    QWORD PTR [r9]
    a6e0:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a6e1:	f3 e2 12             	repz loop 0xa6f6
    a6e4:	e1 12                	loope  0xa6f8
    a6e6:	e0 12                	loopne 0xa6fa
    a6e8:	f2 45 0f 10 e9       	movsd  xmm13,xmm9
    a6ed:	f2 45 0f 10 29       	movsd  xmm13,QWORD PTR [r9]
    a6f2:	f2 4d 0f 2d e9       	cvtsd2si r13,xmm9
    a6f7:	f2 4d 0f 2d 29       	cvtsd2si r13,QWORD PTR [r9]
    a6fc:	f2 4d 0f 2a e9       	cvtsi2sd xmm13,r9
    a701:	f2 45 0f 2a 29       	cvtsi2sd xmm13,DWORD PTR [r9]
    a706:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a70c:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a713:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a71a:	76 
    a71b:	4d 2b ea             	sub    r13,r10
    a71e:	4d 29 2a             	sub    QWORD PTR [r10],r13
    a721:	4d 2b 15 49 f7 ea 49 	sub    r10,QWORD PTR [rip+0x49eaf749]        # 0x49eb9e71
    a728:	f7 2a                	imul   DWORD PTR [rdx]
    a72a:	4d 0f af ea          	imul   r13,r10
    a72e:	4d 69 ea 10 32 54 76 	imul   r13,r10,0x76543210
    a735:	4d 0f af 2a          	imul   r13,QWORD PTR [r10]
    a739:	4d 69 2a 10 32 54 76 	imul   r13,QWORD PTR [r10],0x76543210
    a740:	49 f7 fa             	idiv   r10
    a743:	49 f7 3a             	idiv   QWORD PTR [r10]
    a746:	0f 8d 10 32 54 76    	jge    0x7654d95c
    a74c:	e9 10 32 54 76       	jmp    0x7654d961
    a751:	41 ff e2             	jmp    r10
    a754:	4d 8b ea             	mov    r13,r10
    a757:	4d 8b 2a             	mov    r13,QWORD PTR [r10]
    a75a:	4d 89 55 00          	mov    QWORD PTR [r13+0x0],r10
    a75e:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a765:	09 00 00 
    a768:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a76f:	00 00 00 
    a772:	e8 10 32 54 76       	call   0x7654d987
    a777:	41 ff d2             	call   r10
    a77a:	c3                   	ret    
    a77b:	49 d1 ea             	shr    r10,1
    a77e:	49 c1 ea 12          	shr    r10,0x12
    a782:	49 d1 2a             	shr    QWORD PTR [r10],1
    a785:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    a789:	49 f7 da             	neg    r10
    a78c:	49 f7 1a             	neg    QWORD PTR [r10]
    a78f:	0f 05                	syscall 
    a791:	41 52                	push   r10
    a793:	41 ff 32             	push   QWORD PTR [r10]
    a796:	68 10 32 54 76       	push   0x76543210
    a79b:	41 5a                	pop    r10
    a79d:	41 8f 02             	pop    QWORD PTR [r10]
    a7a0:	49 ff c2             	inc    r10
    a7a3:	49 ff 02             	inc    QWORD PTR [r10]
    a7a6:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a7a7:	f3 e2 12             	repz loop 0xa7bc
    a7aa:	e1 12                	loope  0xa7be
    a7ac:	e0 12                	loopne 0xa7c0
    a7ae:	f2 45 0f 10 ea       	movsd  xmm13,xmm10
    a7b3:	f2 45 0f 10 2a       	movsd  xmm13,QWORD PTR [r10]
    a7b8:	f2 4d 0f 2d ea       	cvtsd2si r13,xmm10
    a7bd:	f2 4d 0f 2d 2a       	cvtsd2si r13,QWORD PTR [r10]
    a7c2:	f2 4d 0f 2a ea       	cvtsi2sd xmm13,r10
    a7c7:	f2 45 0f 2a 2a       	cvtsi2sd xmm13,DWORD PTR [r10]
    a7cc:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a7d2:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a7d9:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a7e0:	76 
    a7e1:	4d 2b eb             	sub    r13,r11
    a7e4:	4d 29 2b             	sub    QWORD PTR [r11],r13
    a7e7:	4d 2b 1d 49 f7 eb 49 	sub    r11,QWORD PTR [rip+0x49ebf749]        # 0x49ec9f37
    a7ee:	f7 2b                	imul   DWORD PTR [rbx]
    a7f0:	4d 0f af eb          	imul   r13,r11
    a7f4:	4d 69 eb 10 32 54 76 	imul   r13,r11,0x76543210
    a7fb:	4d 0f af 2b          	imul   r13,QWORD PTR [r11]
    a7ff:	4d 69 2b 10 32 54 76 	imul   r13,QWORD PTR [r11],0x76543210
    a806:	49 f7 fb             	idiv   r11
    a809:	49 f7 3b             	idiv   QWORD PTR [r11]
    a80c:	0f 8d 10 32 54 76    	jge    0x7654da22
    a812:	e9 10 32 54 76       	jmp    0x7654da27
    a817:	41 ff e3             	jmp    r11
    a81a:	4d 8b eb             	mov    r13,r11
    a81d:	4d 8b 2b             	mov    r13,QWORD PTR [r11]
    a820:	4d 89 5d 00          	mov    QWORD PTR [r13+0x0],r11
    a824:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a82b:	09 00 00 
    a82e:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a835:	00 00 00 
    a838:	e8 10 32 54 76       	call   0x7654da4d
    a83d:	41 ff d3             	call   r11
    a840:	c3                   	ret    
    a841:	49 d1 eb             	shr    r11,1
    a844:	49 c1 eb 12          	shr    r11,0x12
    a848:	49 d1 2b             	shr    QWORD PTR [r11],1
    a84b:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    a84f:	49 f7 db             	neg    r11
    a852:	49 f7 1b             	neg    QWORD PTR [r11]
    a855:	0f 05                	syscall 
    a857:	41 53                	push   r11
    a859:	41 ff 33             	push   QWORD PTR [r11]
    a85c:	68 10 32 54 76       	push   0x76543210
    a861:	41 5b                	pop    r11
    a863:	41 8f 03             	pop    QWORD PTR [r11]
    a866:	49 ff c3             	inc    r11
    a869:	49 ff 03             	inc    QWORD PTR [r11]
    a86c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a86d:	f3 e2 12             	repz loop 0xa882
    a870:	e1 12                	loope  0xa884
    a872:	e0 12                	loopne 0xa886
    a874:	f2 45 0f 10 eb       	movsd  xmm13,xmm11
    a879:	f2 45 0f 10 2b       	movsd  xmm13,QWORD PTR [r11]
    a87e:	f2 4d 0f 2d eb       	cvtsd2si r13,xmm11
    a883:	f2 4d 0f 2d 2b       	cvtsd2si r13,QWORD PTR [r11]
    a888:	f2 4d 0f 2a eb       	cvtsi2sd xmm13,r11
    a88d:	f2 45 0f 2a 2b       	cvtsi2sd xmm13,DWORD PTR [r11]
    a892:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a898:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a89f:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a8a6:	76 
    a8a7:	4d 2b ec             	sub    r13,r12
    a8aa:	4d 29 2c 24          	sub    QWORD PTR [r12],r13
    a8ae:	4d 2b 25 49 f7 ec 49 	sub    r12,QWORD PTR [rip+0x49ecf749]        # 0x49ed9ffe
    a8b5:	f7 2c 24             	imul   DWORD PTR [rsp]
    a8b8:	4d 0f af ec          	imul   r13,r12
    a8bc:	4d 69 ec 10 32 54 76 	imul   r13,r12,0x76543210
    a8c3:	4d 0f af 2c 24       	imul   r13,QWORD PTR [r12]
    a8c8:	4d 69 2c 24 10 32 54 	imul   r13,QWORD PTR [r12],0x76543210
    a8cf:	76 
    a8d0:	49 f7 fc             	idiv   r12
    a8d3:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    a8d7:	0f 8d 10 32 54 76    	jge    0x7654daed
    a8dd:	e9 10 32 54 76       	jmp    0x7654daf2
    a8e2:	41 ff e4             	jmp    r12
    a8e5:	4d 8b ec             	mov    r13,r12
    a8e8:	4d 8b 2c 24          	mov    r13,QWORD PTR [r12]
    a8ec:	4d 89 65 00          	mov    QWORD PTR [r13+0x0],r12
    a8f0:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a8f7:	09 00 00 
    a8fa:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a901:	00 00 00 
    a904:	e8 10 32 54 76       	call   0x7654db19
    a909:	41 ff d4             	call   r12
    a90c:	c3                   	ret    
    a90d:	49 d1 ec             	shr    r12,1
    a910:	49 c1 ec 12          	shr    r12,0x12
    a914:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    a918:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    a91d:	49 f7 dc             	neg    r12
    a920:	49 f7 1c 24          	neg    QWORD PTR [r12]
    a924:	0f 05                	syscall 
    a926:	41 54                	push   r12
    a928:	41 ff 34 24          	push   QWORD PTR [r12]
    a92c:	68 10 32 54 76       	push   0x76543210
    a931:	41 5c                	pop    r12
    a933:	41 8f 04 24          	pop    QWORD PTR [r12]
    a937:	49 ff c4             	inc    r12
    a93a:	49 ff 04 24          	inc    QWORD PTR [r12]
    a93e:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    a93f:	f3 e2 12             	repz loop 0xa954
    a942:	e1 12                	loope  0xa956
    a944:	e0 12                	loopne 0xa958
    a946:	f2 45 0f 10 ec       	movsd  xmm13,xmm12
    a94b:	f2 45 0f 10 2c 24    	movsd  xmm13,QWORD PTR [r12]
    a951:	f2 4d 0f 2d ec       	cvtsd2si r13,xmm12
    a956:	f2 4d 0f 2d 2c 24    	cvtsd2si r13,QWORD PTR [r12]
    a95c:	f2 4d 0f 2a ec       	cvtsi2sd xmm13,r12
    a961:	f2 45 0f 2a 2c 24    	cvtsi2sd xmm13,DWORD PTR [r12]
    a967:	48 2d 10 32 54 76    	sub    rax,0x76543210
    a96d:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    a974:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    a97b:	76 
    a97c:	4d 2b ed             	sub    r13,r13
    a97f:	4d 29 6d 00          	sub    QWORD PTR [r13+0x0],r13
    a983:	4d 2b 2d 49 f7 ed 49 	sub    r13,QWORD PTR [rip+0x49edf749]        # 0x49eea0d3
    a98a:	f7 6d 00             	imul   DWORD PTR [rbp+0x0]
    a98d:	4d 0f af ed          	imul   r13,r13
    a991:	4d 69 ed 10 32 54 76 	imul   r13,r13,0x76543210
    a998:	4d 0f af 6d 00       	imul   r13,QWORD PTR [r13+0x0]
    a99d:	4d 69 6d 00 10 32 54 	imul   r13,QWORD PTR [r13+0x0],0x76543210
    a9a4:	76 
    a9a5:	49 f7 fd             	idiv   r13
    a9a8:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    a9ac:	0f 8d 10 32 54 76    	jge    0x7654dbc2
    a9b2:	e9 10 32 54 76       	jmp    0x7654dbc7
    a9b7:	41 ff e5             	jmp    r13
    a9ba:	4d 8b ed             	mov    r13,r13
    a9bd:	4d 8b 6d 00          	mov    r13,QWORD PTR [r13+0x0]
    a9c1:	4d 89 6d 00          	mov    QWORD PTR [r13+0x0],r13
    a9c5:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    a9cc:	09 00 00 
    a9cf:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    a9d6:	00 00 00 
    a9d9:	e8 10 32 54 76       	call   0x7654dbee
    a9de:	41 ff d5             	call   r13
    a9e1:	c3                   	ret    
    a9e2:	49 d1 ed             	shr    r13,1
    a9e5:	49 c1 ed 12          	shr    r13,0x12
    a9e9:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    a9ed:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    a9f2:	49 f7 dd             	neg    r13
    a9f5:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    a9f9:	0f 05                	syscall 
    a9fb:	41 55                	push   r13
    a9fd:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    aa01:	68 10 32 54 76       	push   0x76543210
    aa06:	41 5d                	pop    r13
    aa08:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    aa0c:	49 ff c5             	inc    r13
    aa0f:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    aa13:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    aa14:	f3 e2 12             	repz loop 0xaa29
    aa17:	e1 12                	loope  0xaa2b
    aa19:	e0 12                	loopne 0xaa2d
    aa1b:	f2 45 0f 10 ed       	movsd  xmm13,xmm13
    aa20:	f2 45 0f 10 6d 00    	movsd  xmm13,QWORD PTR [r13+0x0]
    aa26:	f2 4d 0f 2d ed       	cvtsd2si r13,xmm13
    aa2b:	f2 4d 0f 2d 6d 00    	cvtsd2si r13,QWORD PTR [r13+0x0]
    aa31:	f2 4d 0f 2a ed       	cvtsi2sd xmm13,r13
    aa36:	f2 45 0f 2a 6d 00    	cvtsi2sd xmm13,DWORD PTR [r13+0x0]
    aa3c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    aa42:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    aa49:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    aa50:	76 
    aa51:	4d 2b ee             	sub    r13,r14
    aa54:	4d 29 2e             	sub    QWORD PTR [r14],r13
    aa57:	4d 2b 35 49 f7 ee 49 	sub    r14,QWORD PTR [rip+0x49eef749]        # 0x49efa1a7
    aa5e:	f7 2e                	imul   DWORD PTR [rsi]
    aa60:	4d 0f af ee          	imul   r13,r14
    aa64:	4d 69 ee 10 32 54 76 	imul   r13,r14,0x76543210
    aa6b:	4d 0f af 2e          	imul   r13,QWORD PTR [r14]
    aa6f:	4d 69 2e 10 32 54 76 	imul   r13,QWORD PTR [r14],0x76543210
    aa76:	49 f7 fe             	idiv   r14
    aa79:	49 f7 3e             	idiv   QWORD PTR [r14]
    aa7c:	0f 8d 10 32 54 76    	jge    0x7654dc92
    aa82:	e9 10 32 54 76       	jmp    0x7654dc97
    aa87:	41 ff e6             	jmp    r14
    aa8a:	4d 8b ee             	mov    r13,r14
    aa8d:	4d 8b 2e             	mov    r13,QWORD PTR [r14]
    aa90:	4d 89 75 00          	mov    QWORD PTR [r13+0x0],r14
    aa94:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    aa9b:	09 00 00 
    aa9e:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    aaa5:	00 00 00 
    aaa8:	e8 10 32 54 76       	call   0x7654dcbd
    aaad:	41 ff d6             	call   r14
    aab0:	c3                   	ret    
    aab1:	49 d1 ee             	shr    r14,1
    aab4:	49 c1 ee 12          	shr    r14,0x12
    aab8:	49 d1 2e             	shr    QWORD PTR [r14],1
    aabb:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    aabf:	49 f7 de             	neg    r14
    aac2:	49 f7 1e             	neg    QWORD PTR [r14]
    aac5:	0f 05                	syscall 
    aac7:	41 56                	push   r14
    aac9:	41 ff 36             	push   QWORD PTR [r14]
    aacc:	68 10 32 54 76       	push   0x76543210
    aad1:	41 5e                	pop    r14
    aad3:	41 8f 06             	pop    QWORD PTR [r14]
    aad6:	49 ff c6             	inc    r14
    aad9:	49 ff 06             	inc    QWORD PTR [r14]
    aadc:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    aadd:	f3 e2 12             	repz loop 0xaaf2
    aae0:	e1 12                	loope  0xaaf4
    aae2:	e0 12                	loopne 0xaaf6
    aae4:	f2 45 0f 10 ee       	movsd  xmm13,xmm14
    aae9:	f2 45 0f 10 2e       	movsd  xmm13,QWORD PTR [r14]
    aaee:	f2 4d 0f 2d ee       	cvtsd2si r13,xmm14
    aaf3:	f2 4d 0f 2d 2e       	cvtsd2si r13,QWORD PTR [r14]
    aaf8:	f2 4d 0f 2a ee       	cvtsi2sd xmm13,r14
    aafd:	f2 45 0f 2a 2e       	cvtsi2sd xmm13,DWORD PTR [r14]
    ab02:	48 2d 10 32 54 76    	sub    rax,0x76543210
    ab08:	49 81 ed 10 32 54 76 	sub    r13,0x76543210
    ab0f:	49 81 6d 00 10 32 54 	sub    QWORD PTR [r13+0x0],0x76543210
    ab16:	76 
    ab17:	4d 2b ef             	sub    r13,r15
    ab1a:	4d 29 2f             	sub    QWORD PTR [r15],r13
    ab1d:	4d 2b 3d 49 f7 ef 49 	sub    r15,QWORD PTR [rip+0x49eff749]        # 0x49f0a26d
    ab24:	f7 2f                	imul   DWORD PTR [rdi]
    ab26:	4d 0f af ef          	imul   r13,r15
    ab2a:	4d 69 ef 10 32 54 76 	imul   r13,r15,0x76543210
    ab31:	4d 0f af 2f          	imul   r13,QWORD PTR [r15]
    ab35:	4d 69 2f 10 32 54 76 	imul   r13,QWORD PTR [r15],0x76543210
    ab3c:	49 f7 ff             	idiv   r15
    ab3f:	49 f7 3f             	idiv   QWORD PTR [r15]
    ab42:	0f 8d 10 32 54 76    	jge    0x7654dd58
    ab48:	e9 10 32 54 76       	jmp    0x7654dd5d
    ab4d:	41 ff e7             	jmp    r15
    ab50:	4d 8b ef             	mov    r13,r15
    ab53:	4d 8b 2f             	mov    r13,QWORD PTR [r15]
    ab56:	4d 89 7d 00          	mov    QWORD PTR [r13+0x0],r15
    ab5a:	49 bd 09 21 43 65 87 	movabs r13,0x98765432109
    ab61:	09 00 00 
    ab64:	49 bd 10 32 54 76 00 	movabs r13,0x76543210
    ab6b:	00 00 00 
    ab6e:	e8 10 32 54 76       	call   0x7654dd83
    ab73:	41 ff d7             	call   r15
    ab76:	c3                   	ret    
    ab77:	49 d1 ef             	shr    r15,1
    ab7a:	49 c1 ef 12          	shr    r15,0x12
    ab7e:	49 d1 2f             	shr    QWORD PTR [r15],1
    ab81:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    ab85:	49 f7 df             	neg    r15
    ab88:	49 f7 1f             	neg    QWORD PTR [r15]
    ab8b:	0f 05                	syscall 
    ab8d:	41 57                	push   r15
    ab8f:	41 ff 37             	push   QWORD PTR [r15]
    ab92:	68 10 32 54 76       	push   0x76543210
    ab97:	41 5f                	pop    r15
    ab99:	41 8f 07             	pop    QWORD PTR [r15]
    ab9c:	49 ff c7             	inc    r15
    ab9f:	49 ff 07             	inc    QWORD PTR [r15]
    aba2:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    aba3:	f3 e2 12             	repz loop 0xabb8
    aba6:	e1 12                	loope  0xabba
    aba8:	e0 12                	loopne 0xabbc
    abaa:	f2 45 0f 10 ef       	movsd  xmm13,xmm15
    abaf:	f2 45 0f 10 2f       	movsd  xmm13,QWORD PTR [r15]
    abb4:	f2 4d 0f 2d ef       	cvtsd2si r13,xmm15
    abb9:	f2 4d 0f 2d 2f       	cvtsd2si r13,QWORD PTR [r15]
    abbe:	f2 4d 0f 2a ef       	cvtsi2sd xmm13,r15
    abc3:	f2 45 0f 2a 2f       	cvtsi2sd xmm13,DWORD PTR [r15]
    abc8:	48 2d 10 32 54 76    	sub    rax,0x76543210
    abce:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    abd5:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    abdc:	4c 2b f0             	sub    r14,rax
    abdf:	4c 29 30             	sub    QWORD PTR [rax],r14
    abe2:	49 2b 06             	sub    rax,QWORD PTR [r14]
    abe5:	48 f7 e8             	imul   rax
    abe8:	48 f7 28             	imul   QWORD PTR [rax]
    abeb:	4c 0f af f0          	imul   r14,rax
    abef:	4c 69 f0 10 32 54 76 	imul   r14,rax,0x76543210
    abf6:	4c 0f af 30          	imul   r14,QWORD PTR [rax]
    abfa:	4c 69 30 10 32 54 76 	imul   r14,QWORD PTR [rax],0x76543210
    ac01:	48 f7 f8             	idiv   rax
    ac04:	48 f7 38             	idiv   QWORD PTR [rax]
    ac07:	0f 8d 10 32 54 76    	jge    0x7654de1d
    ac0d:	e9 10 32 54 76       	jmp    0x7654de22
    ac12:	ff e0                	jmp    rax
    ac14:	4c 8b f0             	mov    r14,rax
    ac17:	4c 8b 30             	mov    r14,QWORD PTR [rax]
    ac1a:	49 89 06             	mov    QWORD PTR [r14],rax
    ac1d:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    ac24:	09 00 00 
    ac27:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    ac2e:	00 00 00 
    ac31:	e8 10 32 54 76       	call   0x7654de46
    ac36:	ff d0                	call   rax
    ac38:	c3                   	ret    
    ac39:	48 d1 e8             	shr    rax,1
    ac3c:	48 c1 e8 12          	shr    rax,0x12
    ac40:	48 d1 28             	shr    QWORD PTR [rax],1
    ac43:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    ac47:	48 f7 d8             	neg    rax
    ac4a:	48 f7 18             	neg    QWORD PTR [rax]
    ac4d:	0f 05                	syscall 
    ac4f:	50                   	push   rax
    ac50:	ff 30                	push   QWORD PTR [rax]
    ac52:	68 10 32 54 76       	push   0x76543210
    ac57:	58                   	pop    rax
    ac58:	8f 00                	pop    QWORD PTR [rax]
    ac5a:	48 ff c0             	inc    rax
    ac5d:	48 ff 00             	inc    QWORD PTR [rax]
    ac60:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    ac61:	f3 e2 12             	repz loop 0xac76
    ac64:	e1 12                	loope  0xac78
    ac66:	e0 12                	loopne 0xac7a
    ac68:	f2 44 0f 10 f0       	movsd  xmm14,xmm0
    ac6d:	f2 44 0f 10 30       	movsd  xmm14,QWORD PTR [rax]
    ac72:	f2 4c 0f 2d f0       	cvtsd2si r14,xmm0
    ac77:	f2 4c 0f 2d 30       	cvtsd2si r14,QWORD PTR [rax]
    ac7c:	f2 4c 0f 2a f0       	cvtsi2sd xmm14,rax
    ac81:	f2 44 0f 2a 30       	cvtsi2sd xmm14,DWORD PTR [rax]
    ac86:	48 2d 10 32 54 76    	sub    rax,0x76543210
    ac8c:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    ac93:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    ac9a:	4c 2b f1             	sub    r14,rcx
    ac9d:	4c 29 31             	sub    QWORD PTR [rcx],r14
    aca0:	49 2b 0e             	sub    rcx,QWORD PTR [r14]
    aca3:	48 f7 e9             	imul   rcx
    aca6:	48 f7 29             	imul   QWORD PTR [rcx]
    aca9:	4c 0f af f1          	imul   r14,rcx
    acad:	4c 69 f1 10 32 54 76 	imul   r14,rcx,0x76543210
    acb4:	4c 0f af 31          	imul   r14,QWORD PTR [rcx]
    acb8:	4c 69 31 10 32 54 76 	imul   r14,QWORD PTR [rcx],0x76543210
    acbf:	48 f7 f9             	idiv   rcx
    acc2:	48 f7 39             	idiv   QWORD PTR [rcx]
    acc5:	0f 8d 10 32 54 76    	jge    0x7654dedb
    accb:	e9 10 32 54 76       	jmp    0x7654dee0
    acd0:	ff e1                	jmp    rcx
    acd2:	4c 8b f1             	mov    r14,rcx
    acd5:	4c 8b 31             	mov    r14,QWORD PTR [rcx]
    acd8:	49 89 0e             	mov    QWORD PTR [r14],rcx
    acdb:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    ace2:	09 00 00 
    ace5:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    acec:	00 00 00 
    acef:	e8 10 32 54 76       	call   0x7654df04
    acf4:	ff d1                	call   rcx
    acf6:	c3                   	ret    
    acf7:	48 d1 e9             	shr    rcx,1
    acfa:	48 c1 e9 12          	shr    rcx,0x12
    acfe:	48 d1 29             	shr    QWORD PTR [rcx],1
    ad01:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    ad05:	48 f7 d9             	neg    rcx
    ad08:	48 f7 19             	neg    QWORD PTR [rcx]
    ad0b:	0f 05                	syscall 
    ad0d:	51                   	push   rcx
    ad0e:	ff 31                	push   QWORD PTR [rcx]
    ad10:	68 10 32 54 76       	push   0x76543210
    ad15:	59                   	pop    rcx
    ad16:	8f 01                	pop    QWORD PTR [rcx]
    ad18:	48 ff c1             	inc    rcx
    ad1b:	48 ff 01             	inc    QWORD PTR [rcx]
    ad1e:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    ad1f:	f3 e2 12             	repz loop 0xad34
    ad22:	e1 12                	loope  0xad36
    ad24:	e0 12                	loopne 0xad38
    ad26:	f2 44 0f 10 f1       	movsd  xmm14,xmm1
    ad2b:	f2 44 0f 10 31       	movsd  xmm14,QWORD PTR [rcx]
    ad30:	f2 4c 0f 2d f1       	cvtsd2si r14,xmm1
    ad35:	f2 4c 0f 2d 31       	cvtsd2si r14,QWORD PTR [rcx]
    ad3a:	f2 4c 0f 2a f1       	cvtsi2sd xmm14,rcx
    ad3f:	f2 44 0f 2a 31       	cvtsi2sd xmm14,DWORD PTR [rcx]
    ad44:	48 2d 10 32 54 76    	sub    rax,0x76543210
    ad4a:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    ad51:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    ad58:	4c 2b f2             	sub    r14,rdx
    ad5b:	4c 29 32             	sub    QWORD PTR [rdx],r14
    ad5e:	49 2b 16             	sub    rdx,QWORD PTR [r14]
    ad61:	48 f7 ea             	imul   rdx
    ad64:	48 f7 2a             	imul   QWORD PTR [rdx]
    ad67:	4c 0f af f2          	imul   r14,rdx
    ad6b:	4c 69 f2 10 32 54 76 	imul   r14,rdx,0x76543210
    ad72:	4c 0f af 32          	imul   r14,QWORD PTR [rdx]
    ad76:	4c 69 32 10 32 54 76 	imul   r14,QWORD PTR [rdx],0x76543210
    ad7d:	48 f7 fa             	idiv   rdx
    ad80:	48 f7 3a             	idiv   QWORD PTR [rdx]
    ad83:	0f 8d 10 32 54 76    	jge    0x7654df99
    ad89:	e9 10 32 54 76       	jmp    0x7654df9e
    ad8e:	ff e2                	jmp    rdx
    ad90:	4c 8b f2             	mov    r14,rdx
    ad93:	4c 8b 32             	mov    r14,QWORD PTR [rdx]
    ad96:	49 89 16             	mov    QWORD PTR [r14],rdx
    ad99:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    ada0:	09 00 00 
    ada3:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    adaa:	00 00 00 
    adad:	e8 10 32 54 76       	call   0x7654dfc2
    adb2:	ff d2                	call   rdx
    adb4:	c3                   	ret    
    adb5:	48 d1 ea             	shr    rdx,1
    adb8:	48 c1 ea 12          	shr    rdx,0x12
    adbc:	48 d1 2a             	shr    QWORD PTR [rdx],1
    adbf:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    adc3:	48 f7 da             	neg    rdx
    adc6:	48 f7 1a             	neg    QWORD PTR [rdx]
    adc9:	0f 05                	syscall 
    adcb:	52                   	push   rdx
    adcc:	ff 32                	push   QWORD PTR [rdx]
    adce:	68 10 32 54 76       	push   0x76543210
    add3:	5a                   	pop    rdx
    add4:	8f 02                	pop    QWORD PTR [rdx]
    add6:	48 ff c2             	inc    rdx
    add9:	48 ff 02             	inc    QWORD PTR [rdx]
    addc:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    addd:	f3 e2 12             	repz loop 0xadf2
    ade0:	e1 12                	loope  0xadf4
    ade2:	e0 12                	loopne 0xadf6
    ade4:	f2 44 0f 10 f2       	movsd  xmm14,xmm2
    ade9:	f2 44 0f 10 32       	movsd  xmm14,QWORD PTR [rdx]
    adee:	f2 4c 0f 2d f2       	cvtsd2si r14,xmm2
    adf3:	f2 4c 0f 2d 32       	cvtsd2si r14,QWORD PTR [rdx]
    adf8:	f2 4c 0f 2a f2       	cvtsi2sd xmm14,rdx
    adfd:	f2 44 0f 2a 32       	cvtsi2sd xmm14,DWORD PTR [rdx]
    ae02:	48 2d 10 32 54 76    	sub    rax,0x76543210
    ae08:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    ae0f:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    ae16:	4c 2b f3             	sub    r14,rbx
    ae19:	4c 29 33             	sub    QWORD PTR [rbx],r14
    ae1c:	49 2b 1e             	sub    rbx,QWORD PTR [r14]
    ae1f:	48 f7 eb             	imul   rbx
    ae22:	48 f7 2b             	imul   QWORD PTR [rbx]
    ae25:	4c 0f af f3          	imul   r14,rbx
    ae29:	4c 69 f3 10 32 54 76 	imul   r14,rbx,0x76543210
    ae30:	4c 0f af 33          	imul   r14,QWORD PTR [rbx]
    ae34:	4c 69 33 10 32 54 76 	imul   r14,QWORD PTR [rbx],0x76543210
    ae3b:	48 f7 fb             	idiv   rbx
    ae3e:	48 f7 3b             	idiv   QWORD PTR [rbx]
    ae41:	0f 8d 10 32 54 76    	jge    0x7654e057
    ae47:	e9 10 32 54 76       	jmp    0x7654e05c
    ae4c:	ff e3                	jmp    rbx
    ae4e:	4c 8b f3             	mov    r14,rbx
    ae51:	4c 8b 33             	mov    r14,QWORD PTR [rbx]
    ae54:	49 89 1e             	mov    QWORD PTR [r14],rbx
    ae57:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    ae5e:	09 00 00 
    ae61:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    ae68:	00 00 00 
    ae6b:	e8 10 32 54 76       	call   0x7654e080
    ae70:	ff d3                	call   rbx
    ae72:	c3                   	ret    
    ae73:	48 d1 eb             	shr    rbx,1
    ae76:	48 c1 eb 12          	shr    rbx,0x12
    ae7a:	48 d1 2b             	shr    QWORD PTR [rbx],1
    ae7d:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    ae81:	48 f7 db             	neg    rbx
    ae84:	48 f7 1b             	neg    QWORD PTR [rbx]
    ae87:	0f 05                	syscall 
    ae89:	53                   	push   rbx
    ae8a:	ff 33                	push   QWORD PTR [rbx]
    ae8c:	68 10 32 54 76       	push   0x76543210
    ae91:	5b                   	pop    rbx
    ae92:	8f 03                	pop    QWORD PTR [rbx]
    ae94:	48 ff c3             	inc    rbx
    ae97:	48 ff 03             	inc    QWORD PTR [rbx]
    ae9a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    ae9b:	f3 e2 12             	repz loop 0xaeb0
    ae9e:	e1 12                	loope  0xaeb2
    aea0:	e0 12                	loopne 0xaeb4
    aea2:	f2 44 0f 10 f3       	movsd  xmm14,xmm3
    aea7:	f2 44 0f 10 33       	movsd  xmm14,QWORD PTR [rbx]
    aeac:	f2 4c 0f 2d f3       	cvtsd2si r14,xmm3
    aeb1:	f2 4c 0f 2d 33       	cvtsd2si r14,QWORD PTR [rbx]
    aeb6:	f2 4c 0f 2a f3       	cvtsi2sd xmm14,rbx
    aebb:	f2 44 0f 2a 33       	cvtsi2sd xmm14,DWORD PTR [rbx]
    aec0:	48 2d 10 32 54 76    	sub    rax,0x76543210
    aec6:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    aecd:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    aed4:	4c 2b f4             	sub    r14,rsp
    aed7:	4c 29 34 24          	sub    QWORD PTR [rsp],r14
    aedb:	49 2b 26             	sub    rsp,QWORD PTR [r14]
    aede:	48 f7 ec             	imul   rsp
    aee1:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    aee5:	4c 0f af f4          	imul   r14,rsp
    aee9:	4c 69 f4 10 32 54 76 	imul   r14,rsp,0x76543210
    aef0:	4c 0f af 34 24       	imul   r14,QWORD PTR [rsp]
    aef5:	4c 69 34 24 10 32 54 	imul   r14,QWORD PTR [rsp],0x76543210
    aefc:	76 
    aefd:	48 f7 fc             	idiv   rsp
    af00:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    af04:	0f 8d 10 32 54 76    	jge    0x7654e11a
    af0a:	e9 10 32 54 76       	jmp    0x7654e11f
    af0f:	ff e4                	jmp    rsp
    af11:	4c 8b f4             	mov    r14,rsp
    af14:	4c 8b 34 24          	mov    r14,QWORD PTR [rsp]
    af18:	49 89 26             	mov    QWORD PTR [r14],rsp
    af1b:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    af22:	09 00 00 
    af25:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    af2c:	00 00 00 
    af2f:	e8 10 32 54 76       	call   0x7654e144
    af34:	ff d4                	call   rsp
    af36:	c3                   	ret    
    af37:	48 d1 ec             	shr    rsp,1
    af3a:	48 c1 ec 12          	shr    rsp,0x12
    af3e:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    af42:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    af47:	48 f7 dc             	neg    rsp
    af4a:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    af4e:	0f 05                	syscall 
    af50:	54                   	push   rsp
    af51:	ff 34 24             	push   QWORD PTR [rsp]
    af54:	68 10 32 54 76       	push   0x76543210
    af59:	5c                   	pop    rsp
    af5a:	8f 04 24             	pop    QWORD PTR [rsp]
    af5d:	48 ff c4             	inc    rsp
    af60:	48 ff 04 24          	inc    QWORD PTR [rsp]
    af64:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    af65:	f3 e2 12             	repz loop 0xaf7a
    af68:	e1 12                	loope  0xaf7c
    af6a:	e0 12                	loopne 0xaf7e
    af6c:	f2 44 0f 10 f4       	movsd  xmm14,xmm4
    af71:	f2 44 0f 10 34 24    	movsd  xmm14,QWORD PTR [rsp]
    af77:	f2 4c 0f 2d f4       	cvtsd2si r14,xmm4
    af7c:	f2 4c 0f 2d 34 24    	cvtsd2si r14,QWORD PTR [rsp]
    af82:	f2 4c 0f 2a f4       	cvtsi2sd xmm14,rsp
    af87:	f2 44 0f 2a 34 24    	cvtsi2sd xmm14,DWORD PTR [rsp]
    af8d:	48 2d 10 32 54 76    	sub    rax,0x76543210
    af93:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    af9a:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    afa1:	4c 2b f5             	sub    r14,rbp
    afa4:	4c 29 75 00          	sub    QWORD PTR [rbp+0x0],r14
    afa8:	49 2b 2e             	sub    rbp,QWORD PTR [r14]
    afab:	48 f7 ed             	imul   rbp
    afae:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    afb2:	4c 0f af f5          	imul   r14,rbp
    afb6:	4c 69 f5 10 32 54 76 	imul   r14,rbp,0x76543210
    afbd:	4c 0f af 75 00       	imul   r14,QWORD PTR [rbp+0x0]
    afc2:	4c 69 75 00 10 32 54 	imul   r14,QWORD PTR [rbp+0x0],0x76543210
    afc9:	76 
    afca:	48 f7 fd             	idiv   rbp
    afcd:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    afd1:	0f 8d 10 32 54 76    	jge    0x7654e1e7
    afd7:	e9 10 32 54 76       	jmp    0x7654e1ec
    afdc:	ff e5                	jmp    rbp
    afde:	4c 8b f5             	mov    r14,rbp
    afe1:	4c 8b 75 00          	mov    r14,QWORD PTR [rbp+0x0]
    afe5:	49 89 2e             	mov    QWORD PTR [r14],rbp
    afe8:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    afef:	09 00 00 
    aff2:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    aff9:	00 00 00 
    affc:	e8 10 32 54 76       	call   0x7654e211
    b001:	ff d5                	call   rbp
    b003:	c3                   	ret    
    b004:	48 d1 ed             	shr    rbp,1
    b007:	48 c1 ed 12          	shr    rbp,0x12
    b00b:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    b00f:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    b014:	48 f7 dd             	neg    rbp
    b017:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    b01b:	0f 05                	syscall 
    b01d:	55                   	push   rbp
    b01e:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    b021:	68 10 32 54 76       	push   0x76543210
    b026:	5d                   	pop    rbp
    b027:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    b02a:	48 ff c5             	inc    rbp
    b02d:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    b031:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b032:	f3 e2 12             	repz loop 0xb047
    b035:	e1 12                	loope  0xb049
    b037:	e0 12                	loopne 0xb04b
    b039:	f2 44 0f 10 f5       	movsd  xmm14,xmm5
    b03e:	f2 44 0f 10 75 00    	movsd  xmm14,QWORD PTR [rbp+0x0]
    b044:	f2 4c 0f 2d f5       	cvtsd2si r14,xmm5
    b049:	f2 4c 0f 2d 75 00    	cvtsd2si r14,QWORD PTR [rbp+0x0]
    b04f:	f2 4c 0f 2a f5       	cvtsi2sd xmm14,rbp
    b054:	f2 44 0f 2a 75 00    	cvtsi2sd xmm14,DWORD PTR [rbp+0x0]
    b05a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b060:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    b067:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    b06e:	4c 2b f6             	sub    r14,rsi
    b071:	4c 29 36             	sub    QWORD PTR [rsi],r14
    b074:	49 2b 36             	sub    rsi,QWORD PTR [r14]
    b077:	48 f7 ee             	imul   rsi
    b07a:	48 f7 2e             	imul   QWORD PTR [rsi]
    b07d:	4c 0f af f6          	imul   r14,rsi
    b081:	4c 69 f6 10 32 54 76 	imul   r14,rsi,0x76543210
    b088:	4c 0f af 36          	imul   r14,QWORD PTR [rsi]
    b08c:	4c 69 36 10 32 54 76 	imul   r14,QWORD PTR [rsi],0x76543210
    b093:	48 f7 fe             	idiv   rsi
    b096:	48 f7 3e             	idiv   QWORD PTR [rsi]
    b099:	0f 8d 10 32 54 76    	jge    0x7654e2af
    b09f:	e9 10 32 54 76       	jmp    0x7654e2b4
    b0a4:	ff e6                	jmp    rsi
    b0a6:	4c 8b f6             	mov    r14,rsi
    b0a9:	4c 8b 36             	mov    r14,QWORD PTR [rsi]
    b0ac:	49 89 36             	mov    QWORD PTR [r14],rsi
    b0af:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    b0b6:	09 00 00 
    b0b9:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    b0c0:	00 00 00 
    b0c3:	e8 10 32 54 76       	call   0x7654e2d8
    b0c8:	ff d6                	call   rsi
    b0ca:	c3                   	ret    
    b0cb:	48 d1 ee             	shr    rsi,1
    b0ce:	48 c1 ee 12          	shr    rsi,0x12
    b0d2:	48 d1 2e             	shr    QWORD PTR [rsi],1
    b0d5:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    b0d9:	48 f7 de             	neg    rsi
    b0dc:	48 f7 1e             	neg    QWORD PTR [rsi]
    b0df:	0f 05                	syscall 
    b0e1:	56                   	push   rsi
    b0e2:	ff 36                	push   QWORD PTR [rsi]
    b0e4:	68 10 32 54 76       	push   0x76543210
    b0e9:	5e                   	pop    rsi
    b0ea:	8f 06                	pop    QWORD PTR [rsi]
    b0ec:	48 ff c6             	inc    rsi
    b0ef:	48 ff 06             	inc    QWORD PTR [rsi]
    b0f2:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b0f3:	f3 e2 12             	repz loop 0xb108
    b0f6:	e1 12                	loope  0xb10a
    b0f8:	e0 12                	loopne 0xb10c
    b0fa:	f2 44 0f 10 f6       	movsd  xmm14,xmm6
    b0ff:	f2 44 0f 10 36       	movsd  xmm14,QWORD PTR [rsi]
    b104:	f2 4c 0f 2d f6       	cvtsd2si r14,xmm6
    b109:	f2 4c 0f 2d 36       	cvtsd2si r14,QWORD PTR [rsi]
    b10e:	f2 4c 0f 2a f6       	cvtsi2sd xmm14,rsi
    b113:	f2 44 0f 2a 36       	cvtsi2sd xmm14,DWORD PTR [rsi]
    b118:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b11e:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    b125:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    b12c:	4c 2b f7             	sub    r14,rdi
    b12f:	4c 29 37             	sub    QWORD PTR [rdi],r14
    b132:	49 2b 3e             	sub    rdi,QWORD PTR [r14]
    b135:	48 f7 ef             	imul   rdi
    b138:	48 f7 2f             	imul   QWORD PTR [rdi]
    b13b:	4c 0f af f7          	imul   r14,rdi
    b13f:	4c 69 f7 10 32 54 76 	imul   r14,rdi,0x76543210
    b146:	4c 0f af 37          	imul   r14,QWORD PTR [rdi]
    b14a:	4c 69 37 10 32 54 76 	imul   r14,QWORD PTR [rdi],0x76543210
    b151:	48 f7 ff             	idiv   rdi
    b154:	48 f7 3f             	idiv   QWORD PTR [rdi]
    b157:	0f 8d 10 32 54 76    	jge    0x7654e36d
    b15d:	e9 10 32 54 76       	jmp    0x7654e372
    b162:	ff e7                	jmp    rdi
    b164:	4c 8b f7             	mov    r14,rdi
    b167:	4c 8b 37             	mov    r14,QWORD PTR [rdi]
    b16a:	49 89 3e             	mov    QWORD PTR [r14],rdi
    b16d:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    b174:	09 00 00 
    b177:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    b17e:	00 00 00 
    b181:	e8 10 32 54 76       	call   0x7654e396
    b186:	ff d7                	call   rdi
    b188:	c3                   	ret    
    b189:	48 d1 ef             	shr    rdi,1
    b18c:	48 c1 ef 12          	shr    rdi,0x12
    b190:	48 d1 2f             	shr    QWORD PTR [rdi],1
    b193:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    b197:	48 f7 df             	neg    rdi
    b19a:	48 f7 1f             	neg    QWORD PTR [rdi]
    b19d:	0f 05                	syscall 
    b19f:	57                   	push   rdi
    b1a0:	ff 37                	push   QWORD PTR [rdi]
    b1a2:	68 10 32 54 76       	push   0x76543210
    b1a7:	5f                   	pop    rdi
    b1a8:	8f 07                	pop    QWORD PTR [rdi]
    b1aa:	48 ff c7             	inc    rdi
    b1ad:	48 ff 07             	inc    QWORD PTR [rdi]
    b1b0:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b1b1:	f3 e2 12             	repz loop 0xb1c6
    b1b4:	e1 12                	loope  0xb1c8
    b1b6:	e0 12                	loopne 0xb1ca
    b1b8:	f2 44 0f 10 f7       	movsd  xmm14,xmm7
    b1bd:	f2 44 0f 10 37       	movsd  xmm14,QWORD PTR [rdi]
    b1c2:	f2 4c 0f 2d f7       	cvtsd2si r14,xmm7
    b1c7:	f2 4c 0f 2d 37       	cvtsd2si r14,QWORD PTR [rdi]
    b1cc:	f2 4c 0f 2a f7       	cvtsi2sd xmm14,rdi
    b1d1:	f2 44 0f 2a 37       	cvtsi2sd xmm14,DWORD PTR [rdi]
    b1d6:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b1dc:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    b1e3:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    b1ea:	4d 2b f0             	sub    r14,r8
    b1ed:	4d 29 30             	sub    QWORD PTR [r8],r14
    b1f0:	4d 2b 06             	sub    r8,QWORD PTR [r14]
    b1f3:	49 f7 e8             	imul   r8
    b1f6:	49 f7 28             	imul   QWORD PTR [r8]
    b1f9:	4d 0f af f0          	imul   r14,r8
    b1fd:	4d 69 f0 10 32 54 76 	imul   r14,r8,0x76543210
    b204:	4d 0f af 30          	imul   r14,QWORD PTR [r8]
    b208:	4d 69 30 10 32 54 76 	imul   r14,QWORD PTR [r8],0x76543210
    b20f:	49 f7 f8             	idiv   r8
    b212:	49 f7 38             	idiv   QWORD PTR [r8]
    b215:	0f 8d 10 32 54 76    	jge    0x7654e42b
    b21b:	e9 10 32 54 76       	jmp    0x7654e430
    b220:	41 ff e0             	jmp    r8
    b223:	4d 8b f0             	mov    r14,r8
    b226:	4d 8b 30             	mov    r14,QWORD PTR [r8]
    b229:	4d 89 06             	mov    QWORD PTR [r14],r8
    b22c:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    b233:	09 00 00 
    b236:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    b23d:	00 00 00 
    b240:	e8 10 32 54 76       	call   0x7654e455
    b245:	41 ff d0             	call   r8
    b248:	c3                   	ret    
    b249:	49 d1 e8             	shr    r8,1
    b24c:	49 c1 e8 12          	shr    r8,0x12
    b250:	49 d1 28             	shr    QWORD PTR [r8],1
    b253:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    b257:	49 f7 d8             	neg    r8
    b25a:	49 f7 18             	neg    QWORD PTR [r8]
    b25d:	0f 05                	syscall 
    b25f:	41 50                	push   r8
    b261:	41 ff 30             	push   QWORD PTR [r8]
    b264:	68 10 32 54 76       	push   0x76543210
    b269:	41 58                	pop    r8
    b26b:	41 8f 00             	pop    QWORD PTR [r8]
    b26e:	49 ff c0             	inc    r8
    b271:	49 ff 00             	inc    QWORD PTR [r8]
    b274:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b275:	f3 e2 12             	repz loop 0xb28a
    b278:	e1 12                	loope  0xb28c
    b27a:	e0 12                	loopne 0xb28e
    b27c:	f2 45 0f 10 f0       	movsd  xmm14,xmm8
    b281:	f2 45 0f 10 30       	movsd  xmm14,QWORD PTR [r8]
    b286:	f2 4d 0f 2d f0       	cvtsd2si r14,xmm8
    b28b:	f2 4d 0f 2d 30       	cvtsd2si r14,QWORD PTR [r8]
    b290:	f2 4d 0f 2a f0       	cvtsi2sd xmm14,r8
    b295:	f2 45 0f 2a 30       	cvtsi2sd xmm14,DWORD PTR [r8]
    b29a:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b2a0:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    b2a7:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    b2ae:	4d 2b f1             	sub    r14,r9
    b2b1:	4d 29 31             	sub    QWORD PTR [r9],r14
    b2b4:	4d 2b 0e             	sub    r9,QWORD PTR [r14]
    b2b7:	49 f7 e9             	imul   r9
    b2ba:	49 f7 29             	imul   QWORD PTR [r9]
    b2bd:	4d 0f af f1          	imul   r14,r9
    b2c1:	4d 69 f1 10 32 54 76 	imul   r14,r9,0x76543210
    b2c8:	4d 0f af 31          	imul   r14,QWORD PTR [r9]
    b2cc:	4d 69 31 10 32 54 76 	imul   r14,QWORD PTR [r9],0x76543210
    b2d3:	49 f7 f9             	idiv   r9
    b2d6:	49 f7 39             	idiv   QWORD PTR [r9]
    b2d9:	0f 8d 10 32 54 76    	jge    0x7654e4ef
    b2df:	e9 10 32 54 76       	jmp    0x7654e4f4
    b2e4:	41 ff e1             	jmp    r9
    b2e7:	4d 8b f1             	mov    r14,r9
    b2ea:	4d 8b 31             	mov    r14,QWORD PTR [r9]
    b2ed:	4d 89 0e             	mov    QWORD PTR [r14],r9
    b2f0:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    b2f7:	09 00 00 
    b2fa:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    b301:	00 00 00 
    b304:	e8 10 32 54 76       	call   0x7654e519
    b309:	41 ff d1             	call   r9
    b30c:	c3                   	ret    
    b30d:	49 d1 e9             	shr    r9,1
    b310:	49 c1 e9 12          	shr    r9,0x12
    b314:	49 d1 29             	shr    QWORD PTR [r9],1
    b317:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    b31b:	49 f7 d9             	neg    r9
    b31e:	49 f7 19             	neg    QWORD PTR [r9]
    b321:	0f 05                	syscall 
    b323:	41 51                	push   r9
    b325:	41 ff 31             	push   QWORD PTR [r9]
    b328:	68 10 32 54 76       	push   0x76543210
    b32d:	41 59                	pop    r9
    b32f:	41 8f 01             	pop    QWORD PTR [r9]
    b332:	49 ff c1             	inc    r9
    b335:	49 ff 01             	inc    QWORD PTR [r9]
    b338:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b339:	f3 e2 12             	repz loop 0xb34e
    b33c:	e1 12                	loope  0xb350
    b33e:	e0 12                	loopne 0xb352
    b340:	f2 45 0f 10 f1       	movsd  xmm14,xmm9
    b345:	f2 45 0f 10 31       	movsd  xmm14,QWORD PTR [r9]
    b34a:	f2 4d 0f 2d f1       	cvtsd2si r14,xmm9
    b34f:	f2 4d 0f 2d 31       	cvtsd2si r14,QWORD PTR [r9]
    b354:	f2 4d 0f 2a f1       	cvtsi2sd xmm14,r9
    b359:	f2 45 0f 2a 31       	cvtsi2sd xmm14,DWORD PTR [r9]
    b35e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b364:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    b36b:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    b372:	4d 2b f2             	sub    r14,r10
    b375:	4d 29 32             	sub    QWORD PTR [r10],r14
    b378:	4d 2b 16             	sub    r10,QWORD PTR [r14]
    b37b:	49 f7 ea             	imul   r10
    b37e:	49 f7 2a             	imul   QWORD PTR [r10]
    b381:	4d 0f af f2          	imul   r14,r10
    b385:	4d 69 f2 10 32 54 76 	imul   r14,r10,0x76543210
    b38c:	4d 0f af 32          	imul   r14,QWORD PTR [r10]
    b390:	4d 69 32 10 32 54 76 	imul   r14,QWORD PTR [r10],0x76543210
    b397:	49 f7 fa             	idiv   r10
    b39a:	49 f7 3a             	idiv   QWORD PTR [r10]
    b39d:	0f 8d 10 32 54 76    	jge    0x7654e5b3
    b3a3:	e9 10 32 54 76       	jmp    0x7654e5b8
    b3a8:	41 ff e2             	jmp    r10
    b3ab:	4d 8b f2             	mov    r14,r10
    b3ae:	4d 8b 32             	mov    r14,QWORD PTR [r10]
    b3b1:	4d 89 16             	mov    QWORD PTR [r14],r10
    b3b4:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    b3bb:	09 00 00 
    b3be:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    b3c5:	00 00 00 
    b3c8:	e8 10 32 54 76       	call   0x7654e5dd
    b3cd:	41 ff d2             	call   r10
    b3d0:	c3                   	ret    
    b3d1:	49 d1 ea             	shr    r10,1
    b3d4:	49 c1 ea 12          	shr    r10,0x12
    b3d8:	49 d1 2a             	shr    QWORD PTR [r10],1
    b3db:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    b3df:	49 f7 da             	neg    r10
    b3e2:	49 f7 1a             	neg    QWORD PTR [r10]
    b3e5:	0f 05                	syscall 
    b3e7:	41 52                	push   r10
    b3e9:	41 ff 32             	push   QWORD PTR [r10]
    b3ec:	68 10 32 54 76       	push   0x76543210
    b3f1:	41 5a                	pop    r10
    b3f3:	41 8f 02             	pop    QWORD PTR [r10]
    b3f6:	49 ff c2             	inc    r10
    b3f9:	49 ff 02             	inc    QWORD PTR [r10]
    b3fc:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b3fd:	f3 e2 12             	repz loop 0xb412
    b400:	e1 12                	loope  0xb414
    b402:	e0 12                	loopne 0xb416
    b404:	f2 45 0f 10 f2       	movsd  xmm14,xmm10
    b409:	f2 45 0f 10 32       	movsd  xmm14,QWORD PTR [r10]
    b40e:	f2 4d 0f 2d f2       	cvtsd2si r14,xmm10
    b413:	f2 4d 0f 2d 32       	cvtsd2si r14,QWORD PTR [r10]
    b418:	f2 4d 0f 2a f2       	cvtsi2sd xmm14,r10
    b41d:	f2 45 0f 2a 32       	cvtsi2sd xmm14,DWORD PTR [r10]
    b422:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b428:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    b42f:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    b436:	4d 2b f3             	sub    r14,r11
    b439:	4d 29 33             	sub    QWORD PTR [r11],r14
    b43c:	4d 2b 1e             	sub    r11,QWORD PTR [r14]
    b43f:	49 f7 eb             	imul   r11
    b442:	49 f7 2b             	imul   QWORD PTR [r11]
    b445:	4d 0f af f3          	imul   r14,r11
    b449:	4d 69 f3 10 32 54 76 	imul   r14,r11,0x76543210
    b450:	4d 0f af 33          	imul   r14,QWORD PTR [r11]
    b454:	4d 69 33 10 32 54 76 	imul   r14,QWORD PTR [r11],0x76543210
    b45b:	49 f7 fb             	idiv   r11
    b45e:	49 f7 3b             	idiv   QWORD PTR [r11]
    b461:	0f 8d 10 32 54 76    	jge    0x7654e677
    b467:	e9 10 32 54 76       	jmp    0x7654e67c
    b46c:	41 ff e3             	jmp    r11
    b46f:	4d 8b f3             	mov    r14,r11
    b472:	4d 8b 33             	mov    r14,QWORD PTR [r11]
    b475:	4d 89 1e             	mov    QWORD PTR [r14],r11
    b478:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    b47f:	09 00 00 
    b482:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    b489:	00 00 00 
    b48c:	e8 10 32 54 76       	call   0x7654e6a1
    b491:	41 ff d3             	call   r11
    b494:	c3                   	ret    
    b495:	49 d1 eb             	shr    r11,1
    b498:	49 c1 eb 12          	shr    r11,0x12
    b49c:	49 d1 2b             	shr    QWORD PTR [r11],1
    b49f:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    b4a3:	49 f7 db             	neg    r11
    b4a6:	49 f7 1b             	neg    QWORD PTR [r11]
    b4a9:	0f 05                	syscall 
    b4ab:	41 53                	push   r11
    b4ad:	41 ff 33             	push   QWORD PTR [r11]
    b4b0:	68 10 32 54 76       	push   0x76543210
    b4b5:	41 5b                	pop    r11
    b4b7:	41 8f 03             	pop    QWORD PTR [r11]
    b4ba:	49 ff c3             	inc    r11
    b4bd:	49 ff 03             	inc    QWORD PTR [r11]
    b4c0:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b4c1:	f3 e2 12             	repz loop 0xb4d6
    b4c4:	e1 12                	loope  0xb4d8
    b4c6:	e0 12                	loopne 0xb4da
    b4c8:	f2 45 0f 10 f3       	movsd  xmm14,xmm11
    b4cd:	f2 45 0f 10 33       	movsd  xmm14,QWORD PTR [r11]
    b4d2:	f2 4d 0f 2d f3       	cvtsd2si r14,xmm11
    b4d7:	f2 4d 0f 2d 33       	cvtsd2si r14,QWORD PTR [r11]
    b4dc:	f2 4d 0f 2a f3       	cvtsi2sd xmm14,r11
    b4e1:	f2 45 0f 2a 33       	cvtsi2sd xmm14,DWORD PTR [r11]
    b4e6:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b4ec:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    b4f3:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    b4fa:	4d 2b f4             	sub    r14,r12
    b4fd:	4d 29 34 24          	sub    QWORD PTR [r12],r14
    b501:	4d 2b 26             	sub    r12,QWORD PTR [r14]
    b504:	49 f7 ec             	imul   r12
    b507:	49 f7 2c 24          	imul   QWORD PTR [r12]
    b50b:	4d 0f af f4          	imul   r14,r12
    b50f:	4d 69 f4 10 32 54 76 	imul   r14,r12,0x76543210
    b516:	4d 0f af 34 24       	imul   r14,QWORD PTR [r12]
    b51b:	4d 69 34 24 10 32 54 	imul   r14,QWORD PTR [r12],0x76543210
    b522:	76 
    b523:	49 f7 fc             	idiv   r12
    b526:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    b52a:	0f 8d 10 32 54 76    	jge    0x7654e740
    b530:	e9 10 32 54 76       	jmp    0x7654e745
    b535:	41 ff e4             	jmp    r12
    b538:	4d 8b f4             	mov    r14,r12
    b53b:	4d 8b 34 24          	mov    r14,QWORD PTR [r12]
    b53f:	4d 89 26             	mov    QWORD PTR [r14],r12
    b542:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    b549:	09 00 00 
    b54c:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    b553:	00 00 00 
    b556:	e8 10 32 54 76       	call   0x7654e76b
    b55b:	41 ff d4             	call   r12
    b55e:	c3                   	ret    
    b55f:	49 d1 ec             	shr    r12,1
    b562:	49 c1 ec 12          	shr    r12,0x12
    b566:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    b56a:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    b56f:	49 f7 dc             	neg    r12
    b572:	49 f7 1c 24          	neg    QWORD PTR [r12]
    b576:	0f 05                	syscall 
    b578:	41 54                	push   r12
    b57a:	41 ff 34 24          	push   QWORD PTR [r12]
    b57e:	68 10 32 54 76       	push   0x76543210
    b583:	41 5c                	pop    r12
    b585:	41 8f 04 24          	pop    QWORD PTR [r12]
    b589:	49 ff c4             	inc    r12
    b58c:	49 ff 04 24          	inc    QWORD PTR [r12]
    b590:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b591:	f3 e2 12             	repz loop 0xb5a6
    b594:	e1 12                	loope  0xb5a8
    b596:	e0 12                	loopne 0xb5aa
    b598:	f2 45 0f 10 f4       	movsd  xmm14,xmm12
    b59d:	f2 45 0f 10 34 24    	movsd  xmm14,QWORD PTR [r12]
    b5a3:	f2 4d 0f 2d f4       	cvtsd2si r14,xmm12
    b5a8:	f2 4d 0f 2d 34 24    	cvtsd2si r14,QWORD PTR [r12]
    b5ae:	f2 4d 0f 2a f4       	cvtsi2sd xmm14,r12
    b5b3:	f2 45 0f 2a 34 24    	cvtsi2sd xmm14,DWORD PTR [r12]
    b5b9:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b5bf:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    b5c6:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    b5cd:	4d 2b f5             	sub    r14,r13
    b5d0:	4d 29 75 00          	sub    QWORD PTR [r13+0x0],r14
    b5d4:	4d 2b 2e             	sub    r13,QWORD PTR [r14]
    b5d7:	49 f7 ed             	imul   r13
    b5da:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    b5de:	4d 0f af f5          	imul   r14,r13
    b5e2:	4d 69 f5 10 32 54 76 	imul   r14,r13,0x76543210
    b5e9:	4d 0f af 75 00       	imul   r14,QWORD PTR [r13+0x0]
    b5ee:	4d 69 75 00 10 32 54 	imul   r14,QWORD PTR [r13+0x0],0x76543210
    b5f5:	76 
    b5f6:	49 f7 fd             	idiv   r13
    b5f9:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    b5fd:	0f 8d 10 32 54 76    	jge    0x7654e813
    b603:	e9 10 32 54 76       	jmp    0x7654e818
    b608:	41 ff e5             	jmp    r13
    b60b:	4d 8b f5             	mov    r14,r13
    b60e:	4d 8b 75 00          	mov    r14,QWORD PTR [r13+0x0]
    b612:	4d 89 2e             	mov    QWORD PTR [r14],r13
    b615:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    b61c:	09 00 00 
    b61f:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    b626:	00 00 00 
    b629:	e8 10 32 54 76       	call   0x7654e83e
    b62e:	41 ff d5             	call   r13
    b631:	c3                   	ret    
    b632:	49 d1 ed             	shr    r13,1
    b635:	49 c1 ed 12          	shr    r13,0x12
    b639:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    b63d:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    b642:	49 f7 dd             	neg    r13
    b645:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    b649:	0f 05                	syscall 
    b64b:	41 55                	push   r13
    b64d:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    b651:	68 10 32 54 76       	push   0x76543210
    b656:	41 5d                	pop    r13
    b658:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    b65c:	49 ff c5             	inc    r13
    b65f:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    b663:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b664:	f3 e2 12             	repz loop 0xb679
    b667:	e1 12                	loope  0xb67b
    b669:	e0 12                	loopne 0xb67d
    b66b:	f2 45 0f 10 f5       	movsd  xmm14,xmm13
    b670:	f2 45 0f 10 75 00    	movsd  xmm14,QWORD PTR [r13+0x0]
    b676:	f2 4d 0f 2d f5       	cvtsd2si r14,xmm13
    b67b:	f2 4d 0f 2d 75 00    	cvtsd2si r14,QWORD PTR [r13+0x0]
    b681:	f2 4d 0f 2a f5       	cvtsi2sd xmm14,r13
    b686:	f2 45 0f 2a 75 00    	cvtsi2sd xmm14,DWORD PTR [r13+0x0]
    b68c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b692:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    b699:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    b6a0:	4d 2b f6             	sub    r14,r14
    b6a3:	4d 29 36             	sub    QWORD PTR [r14],r14
    b6a6:	4d 2b 36             	sub    r14,QWORD PTR [r14]
    b6a9:	49 f7 ee             	imul   r14
    b6ac:	49 f7 2e             	imul   QWORD PTR [r14]
    b6af:	4d 0f af f6          	imul   r14,r14
    b6b3:	4d 69 f6 10 32 54 76 	imul   r14,r14,0x76543210
    b6ba:	4d 0f af 36          	imul   r14,QWORD PTR [r14]
    b6be:	4d 69 36 10 32 54 76 	imul   r14,QWORD PTR [r14],0x76543210
    b6c5:	49 f7 fe             	idiv   r14
    b6c8:	49 f7 3e             	idiv   QWORD PTR [r14]
    b6cb:	0f 8d 10 32 54 76    	jge    0x7654e8e1
    b6d1:	e9 10 32 54 76       	jmp    0x7654e8e6
    b6d6:	41 ff e6             	jmp    r14
    b6d9:	4d 8b f6             	mov    r14,r14
    b6dc:	4d 8b 36             	mov    r14,QWORD PTR [r14]
    b6df:	4d 89 36             	mov    QWORD PTR [r14],r14
    b6e2:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    b6e9:	09 00 00 
    b6ec:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    b6f3:	00 00 00 
    b6f6:	e8 10 32 54 76       	call   0x7654e90b
    b6fb:	41 ff d6             	call   r14
    b6fe:	c3                   	ret    
    b6ff:	49 d1 ee             	shr    r14,1
    b702:	49 c1 ee 12          	shr    r14,0x12
    b706:	49 d1 2e             	shr    QWORD PTR [r14],1
    b709:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    b70d:	49 f7 de             	neg    r14
    b710:	49 f7 1e             	neg    QWORD PTR [r14]
    b713:	0f 05                	syscall 
    b715:	41 56                	push   r14
    b717:	41 ff 36             	push   QWORD PTR [r14]
    b71a:	68 10 32 54 76       	push   0x76543210
    b71f:	41 5e                	pop    r14
    b721:	41 8f 06             	pop    QWORD PTR [r14]
    b724:	49 ff c6             	inc    r14
    b727:	49 ff 06             	inc    QWORD PTR [r14]
    b72a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b72b:	f3 e2 12             	repz loop 0xb740
    b72e:	e1 12                	loope  0xb742
    b730:	e0 12                	loopne 0xb744
    b732:	f2 45 0f 10 f6       	movsd  xmm14,xmm14
    b737:	f2 45 0f 10 36       	movsd  xmm14,QWORD PTR [r14]
    b73c:	f2 4d 0f 2d f6       	cvtsd2si r14,xmm14
    b741:	f2 4d 0f 2d 36       	cvtsd2si r14,QWORD PTR [r14]
    b746:	f2 4d 0f 2a f6       	cvtsi2sd xmm14,r14
    b74b:	f2 45 0f 2a 36       	cvtsi2sd xmm14,DWORD PTR [r14]
    b750:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b756:	49 81 ee 10 32 54 76 	sub    r14,0x76543210
    b75d:	49 81 2e 10 32 54 76 	sub    QWORD PTR [r14],0x76543210
    b764:	4d 2b f7             	sub    r14,r15
    b767:	4d 29 37             	sub    QWORD PTR [r15],r14
    b76a:	4d 2b 3e             	sub    r15,QWORD PTR [r14]
    b76d:	49 f7 ef             	imul   r15
    b770:	49 f7 2f             	imul   QWORD PTR [r15]
    b773:	4d 0f af f7          	imul   r14,r15
    b777:	4d 69 f7 10 32 54 76 	imul   r14,r15,0x76543210
    b77e:	4d 0f af 37          	imul   r14,QWORD PTR [r15]
    b782:	4d 69 37 10 32 54 76 	imul   r14,QWORD PTR [r15],0x76543210
    b789:	49 f7 ff             	idiv   r15
    b78c:	49 f7 3f             	idiv   QWORD PTR [r15]
    b78f:	0f 8d 10 32 54 76    	jge    0x7654e9a5
    b795:	e9 10 32 54 76       	jmp    0x7654e9aa
    b79a:	41 ff e7             	jmp    r15
    b79d:	4d 8b f7             	mov    r14,r15
    b7a0:	4d 8b 37             	mov    r14,QWORD PTR [r15]
    b7a3:	4d 89 3e             	mov    QWORD PTR [r14],r15
    b7a6:	49 be 09 21 43 65 87 	movabs r14,0x98765432109
    b7ad:	09 00 00 
    b7b0:	49 be 10 32 54 76 00 	movabs r14,0x76543210
    b7b7:	00 00 00 
    b7ba:	e8 10 32 54 76       	call   0x7654e9cf
    b7bf:	41 ff d7             	call   r15
    b7c2:	c3                   	ret    
    b7c3:	49 d1 ef             	shr    r15,1
    b7c6:	49 c1 ef 12          	shr    r15,0x12
    b7ca:	49 d1 2f             	shr    QWORD PTR [r15],1
    b7cd:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    b7d1:	49 f7 df             	neg    r15
    b7d4:	49 f7 1f             	neg    QWORD PTR [r15]
    b7d7:	0f 05                	syscall 
    b7d9:	41 57                	push   r15
    b7db:	41 ff 37             	push   QWORD PTR [r15]
    b7de:	68 10 32 54 76       	push   0x76543210
    b7e3:	41 5f                	pop    r15
    b7e5:	41 8f 07             	pop    QWORD PTR [r15]
    b7e8:	49 ff c7             	inc    r15
    b7eb:	49 ff 07             	inc    QWORD PTR [r15]
    b7ee:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b7ef:	f3 e2 12             	repz loop 0xb804
    b7f2:	e1 12                	loope  0xb806
    b7f4:	e0 12                	loopne 0xb808
    b7f6:	f2 45 0f 10 f7       	movsd  xmm14,xmm15
    b7fb:	f2 45 0f 10 37       	movsd  xmm14,QWORD PTR [r15]
    b800:	f2 4d 0f 2d f7       	cvtsd2si r14,xmm15
    b805:	f2 4d 0f 2d 37       	cvtsd2si r14,QWORD PTR [r15]
    b80a:	f2 4d 0f 2a f7       	cvtsi2sd xmm14,r15
    b80f:	f2 45 0f 2a 37       	cvtsi2sd xmm14,DWORD PTR [r15]
    b814:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b81a:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    b821:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    b828:	4c 2b f8             	sub    r15,rax
    b82b:	4c 29 38             	sub    QWORD PTR [rax],r15
    b82e:	49 2b 07             	sub    rax,QWORD PTR [r15]
    b831:	48 f7 e8             	imul   rax
    b834:	48 f7 28             	imul   QWORD PTR [rax]
    b837:	4c 0f af f8          	imul   r15,rax
    b83b:	4c 69 f8 10 32 54 76 	imul   r15,rax,0x76543210
    b842:	4c 0f af 38          	imul   r15,QWORD PTR [rax]
    b846:	4c 69 38 10 32 54 76 	imul   r15,QWORD PTR [rax],0x76543210
    b84d:	48 f7 f8             	idiv   rax
    b850:	48 f7 38             	idiv   QWORD PTR [rax]
    b853:	0f 8d 10 32 54 76    	jge    0x7654ea69
    b859:	e9 10 32 54 76       	jmp    0x7654ea6e
    b85e:	ff e0                	jmp    rax
    b860:	4c 8b f8             	mov    r15,rax
    b863:	4c 8b 38             	mov    r15,QWORD PTR [rax]
    b866:	49 89 07             	mov    QWORD PTR [r15],rax
    b869:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    b870:	09 00 00 
    b873:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    b87a:	00 00 00 
    b87d:	e8 10 32 54 76       	call   0x7654ea92
    b882:	ff d0                	call   rax
    b884:	c3                   	ret    
    b885:	48 d1 e8             	shr    rax,1
    b888:	48 c1 e8 12          	shr    rax,0x12
    b88c:	48 d1 28             	shr    QWORD PTR [rax],1
    b88f:	48 c1 28 12          	shr    QWORD PTR [rax],0x12
    b893:	48 f7 d8             	neg    rax
    b896:	48 f7 18             	neg    QWORD PTR [rax]
    b899:	0f 05                	syscall 
    b89b:	50                   	push   rax
    b89c:	ff 30                	push   QWORD PTR [rax]
    b89e:	68 10 32 54 76       	push   0x76543210
    b8a3:	58                   	pop    rax
    b8a4:	8f 00                	pop    QWORD PTR [rax]
    b8a6:	48 ff c0             	inc    rax
    b8a9:	48 ff 00             	inc    QWORD PTR [rax]
    b8ac:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b8ad:	f3 e2 12             	repz loop 0xb8c2
    b8b0:	e1 12                	loope  0xb8c4
    b8b2:	e0 12                	loopne 0xb8c6
    b8b4:	f2 44 0f 10 f8       	movsd  xmm15,xmm0
    b8b9:	f2 44 0f 10 38       	movsd  xmm15,QWORD PTR [rax]
    b8be:	f2 4c 0f 2d f8       	cvtsd2si r15,xmm0
    b8c3:	f2 4c 0f 2d 38       	cvtsd2si r15,QWORD PTR [rax]
    b8c8:	f2 4c 0f 2a f8       	cvtsi2sd xmm15,rax
    b8cd:	f2 44 0f 2a 38       	cvtsi2sd xmm15,DWORD PTR [rax]
    b8d2:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b8d8:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    b8df:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    b8e6:	4c 2b f9             	sub    r15,rcx
    b8e9:	4c 29 39             	sub    QWORD PTR [rcx],r15
    b8ec:	49 2b 0f             	sub    rcx,QWORD PTR [r15]
    b8ef:	48 f7 e9             	imul   rcx
    b8f2:	48 f7 29             	imul   QWORD PTR [rcx]
    b8f5:	4c 0f af f9          	imul   r15,rcx
    b8f9:	4c 69 f9 10 32 54 76 	imul   r15,rcx,0x76543210
    b900:	4c 0f af 39          	imul   r15,QWORD PTR [rcx]
    b904:	4c 69 39 10 32 54 76 	imul   r15,QWORD PTR [rcx],0x76543210
    b90b:	48 f7 f9             	idiv   rcx
    b90e:	48 f7 39             	idiv   QWORD PTR [rcx]
    b911:	0f 8d 10 32 54 76    	jge    0x7654eb27
    b917:	e9 10 32 54 76       	jmp    0x7654eb2c
    b91c:	ff e1                	jmp    rcx
    b91e:	4c 8b f9             	mov    r15,rcx
    b921:	4c 8b 39             	mov    r15,QWORD PTR [rcx]
    b924:	49 89 0f             	mov    QWORD PTR [r15],rcx
    b927:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    b92e:	09 00 00 
    b931:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    b938:	00 00 00 
    b93b:	e8 10 32 54 76       	call   0x7654eb50
    b940:	ff d1                	call   rcx
    b942:	c3                   	ret    
    b943:	48 d1 e9             	shr    rcx,1
    b946:	48 c1 e9 12          	shr    rcx,0x12
    b94a:	48 d1 29             	shr    QWORD PTR [rcx],1
    b94d:	48 c1 29 12          	shr    QWORD PTR [rcx],0x12
    b951:	48 f7 d9             	neg    rcx
    b954:	48 f7 19             	neg    QWORD PTR [rcx]
    b957:	0f 05                	syscall 
    b959:	51                   	push   rcx
    b95a:	ff 31                	push   QWORD PTR [rcx]
    b95c:	68 10 32 54 76       	push   0x76543210
    b961:	59                   	pop    rcx
    b962:	8f 01                	pop    QWORD PTR [rcx]
    b964:	48 ff c1             	inc    rcx
    b967:	48 ff 01             	inc    QWORD PTR [rcx]
    b96a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    b96b:	f3 e2 12             	repz loop 0xb980
    b96e:	e1 12                	loope  0xb982
    b970:	e0 12                	loopne 0xb984
    b972:	f2 44 0f 10 f9       	movsd  xmm15,xmm1
    b977:	f2 44 0f 10 39       	movsd  xmm15,QWORD PTR [rcx]
    b97c:	f2 4c 0f 2d f9       	cvtsd2si r15,xmm1
    b981:	f2 4c 0f 2d 39       	cvtsd2si r15,QWORD PTR [rcx]
    b986:	f2 4c 0f 2a f9       	cvtsi2sd xmm15,rcx
    b98b:	f2 44 0f 2a 39       	cvtsi2sd xmm15,DWORD PTR [rcx]
    b990:	48 2d 10 32 54 76    	sub    rax,0x76543210
    b996:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    b99d:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    b9a4:	4c 2b fa             	sub    r15,rdx
    b9a7:	4c 29 3a             	sub    QWORD PTR [rdx],r15
    b9aa:	49 2b 17             	sub    rdx,QWORD PTR [r15]
    b9ad:	48 f7 ea             	imul   rdx
    b9b0:	48 f7 2a             	imul   QWORD PTR [rdx]
    b9b3:	4c 0f af fa          	imul   r15,rdx
    b9b7:	4c 69 fa 10 32 54 76 	imul   r15,rdx,0x76543210
    b9be:	4c 0f af 3a          	imul   r15,QWORD PTR [rdx]
    b9c2:	4c 69 3a 10 32 54 76 	imul   r15,QWORD PTR [rdx],0x76543210
    b9c9:	48 f7 fa             	idiv   rdx
    b9cc:	48 f7 3a             	idiv   QWORD PTR [rdx]
    b9cf:	0f 8d 10 32 54 76    	jge    0x7654ebe5
    b9d5:	e9 10 32 54 76       	jmp    0x7654ebea
    b9da:	ff e2                	jmp    rdx
    b9dc:	4c 8b fa             	mov    r15,rdx
    b9df:	4c 8b 3a             	mov    r15,QWORD PTR [rdx]
    b9e2:	49 89 17             	mov    QWORD PTR [r15],rdx
    b9e5:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    b9ec:	09 00 00 
    b9ef:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    b9f6:	00 00 00 
    b9f9:	e8 10 32 54 76       	call   0x7654ec0e
    b9fe:	ff d2                	call   rdx
    ba00:	c3                   	ret    
    ba01:	48 d1 ea             	shr    rdx,1
    ba04:	48 c1 ea 12          	shr    rdx,0x12
    ba08:	48 d1 2a             	shr    QWORD PTR [rdx],1
    ba0b:	48 c1 2a 12          	shr    QWORD PTR [rdx],0x12
    ba0f:	48 f7 da             	neg    rdx
    ba12:	48 f7 1a             	neg    QWORD PTR [rdx]
    ba15:	0f 05                	syscall 
    ba17:	52                   	push   rdx
    ba18:	ff 32                	push   QWORD PTR [rdx]
    ba1a:	68 10 32 54 76       	push   0x76543210
    ba1f:	5a                   	pop    rdx
    ba20:	8f 02                	pop    QWORD PTR [rdx]
    ba22:	48 ff c2             	inc    rdx
    ba25:	48 ff 02             	inc    QWORD PTR [rdx]
    ba28:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    ba29:	f3 e2 12             	repz loop 0xba3e
    ba2c:	e1 12                	loope  0xba40
    ba2e:	e0 12                	loopne 0xba42
    ba30:	f2 44 0f 10 fa       	movsd  xmm15,xmm2
    ba35:	f2 44 0f 10 3a       	movsd  xmm15,QWORD PTR [rdx]
    ba3a:	f2 4c 0f 2d fa       	cvtsd2si r15,xmm2
    ba3f:	f2 4c 0f 2d 3a       	cvtsd2si r15,QWORD PTR [rdx]
    ba44:	f2 4c 0f 2a fa       	cvtsi2sd xmm15,rdx
    ba49:	f2 44 0f 2a 3a       	cvtsi2sd xmm15,DWORD PTR [rdx]
    ba4e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    ba54:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    ba5b:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    ba62:	4c 2b fb             	sub    r15,rbx
    ba65:	4c 29 3b             	sub    QWORD PTR [rbx],r15
    ba68:	49 2b 1f             	sub    rbx,QWORD PTR [r15]
    ba6b:	48 f7 eb             	imul   rbx
    ba6e:	48 f7 2b             	imul   QWORD PTR [rbx]
    ba71:	4c 0f af fb          	imul   r15,rbx
    ba75:	4c 69 fb 10 32 54 76 	imul   r15,rbx,0x76543210
    ba7c:	4c 0f af 3b          	imul   r15,QWORD PTR [rbx]
    ba80:	4c 69 3b 10 32 54 76 	imul   r15,QWORD PTR [rbx],0x76543210
    ba87:	48 f7 fb             	idiv   rbx
    ba8a:	48 f7 3b             	idiv   QWORD PTR [rbx]
    ba8d:	0f 8d 10 32 54 76    	jge    0x7654eca3
    ba93:	e9 10 32 54 76       	jmp    0x7654eca8
    ba98:	ff e3                	jmp    rbx
    ba9a:	4c 8b fb             	mov    r15,rbx
    ba9d:	4c 8b 3b             	mov    r15,QWORD PTR [rbx]
    baa0:	49 89 1f             	mov    QWORD PTR [r15],rbx
    baa3:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    baaa:	09 00 00 
    baad:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    bab4:	00 00 00 
    bab7:	e8 10 32 54 76       	call   0x7654eccc
    babc:	ff d3                	call   rbx
    babe:	c3                   	ret    
    babf:	48 d1 eb             	shr    rbx,1
    bac2:	48 c1 eb 12          	shr    rbx,0x12
    bac6:	48 d1 2b             	shr    QWORD PTR [rbx],1
    bac9:	48 c1 2b 12          	shr    QWORD PTR [rbx],0x12
    bacd:	48 f7 db             	neg    rbx
    bad0:	48 f7 1b             	neg    QWORD PTR [rbx]
    bad3:	0f 05                	syscall 
    bad5:	53                   	push   rbx
    bad6:	ff 33                	push   QWORD PTR [rbx]
    bad8:	68 10 32 54 76       	push   0x76543210
    badd:	5b                   	pop    rbx
    bade:	8f 03                	pop    QWORD PTR [rbx]
    bae0:	48 ff c3             	inc    rbx
    bae3:	48 ff 03             	inc    QWORD PTR [rbx]
    bae6:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    bae7:	f3 e2 12             	repz loop 0xbafc
    baea:	e1 12                	loope  0xbafe
    baec:	e0 12                	loopne 0xbb00
    baee:	f2 44 0f 10 fb       	movsd  xmm15,xmm3
    baf3:	f2 44 0f 10 3b       	movsd  xmm15,QWORD PTR [rbx]
    baf8:	f2 4c 0f 2d fb       	cvtsd2si r15,xmm3
    bafd:	f2 4c 0f 2d 3b       	cvtsd2si r15,QWORD PTR [rbx]
    bb02:	f2 4c 0f 2a fb       	cvtsi2sd xmm15,rbx
    bb07:	f2 44 0f 2a 3b       	cvtsi2sd xmm15,DWORD PTR [rbx]
    bb0c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    bb12:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    bb19:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    bb20:	4c 2b fc             	sub    r15,rsp
    bb23:	4c 29 3c 24          	sub    QWORD PTR [rsp],r15
    bb27:	49 2b 27             	sub    rsp,QWORD PTR [r15]
    bb2a:	48 f7 ec             	imul   rsp
    bb2d:	48 f7 2c 24          	imul   QWORD PTR [rsp]
    bb31:	4c 0f af fc          	imul   r15,rsp
    bb35:	4c 69 fc 10 32 54 76 	imul   r15,rsp,0x76543210
    bb3c:	4c 0f af 3c 24       	imul   r15,QWORD PTR [rsp]
    bb41:	4c 69 3c 24 10 32 54 	imul   r15,QWORD PTR [rsp],0x76543210
    bb48:	76 
    bb49:	48 f7 fc             	idiv   rsp
    bb4c:	48 f7 3c 24          	idiv   QWORD PTR [rsp]
    bb50:	0f 8d 10 32 54 76    	jge    0x7654ed66
    bb56:	e9 10 32 54 76       	jmp    0x7654ed6b
    bb5b:	ff e4                	jmp    rsp
    bb5d:	4c 8b fc             	mov    r15,rsp
    bb60:	4c 8b 3c 24          	mov    r15,QWORD PTR [rsp]
    bb64:	49 89 27             	mov    QWORD PTR [r15],rsp
    bb67:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    bb6e:	09 00 00 
    bb71:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    bb78:	00 00 00 
    bb7b:	e8 10 32 54 76       	call   0x7654ed90
    bb80:	ff d4                	call   rsp
    bb82:	c3                   	ret    
    bb83:	48 d1 ec             	shr    rsp,1
    bb86:	48 c1 ec 12          	shr    rsp,0x12
    bb8a:	48 d1 2c 24          	shr    QWORD PTR [rsp],1
    bb8e:	48 c1 2c 24 12       	shr    QWORD PTR [rsp],0x12
    bb93:	48 f7 dc             	neg    rsp
    bb96:	48 f7 1c 24          	neg    QWORD PTR [rsp]
    bb9a:	0f 05                	syscall 
    bb9c:	54                   	push   rsp
    bb9d:	ff 34 24             	push   QWORD PTR [rsp]
    bba0:	68 10 32 54 76       	push   0x76543210
    bba5:	5c                   	pop    rsp
    bba6:	8f 04 24             	pop    QWORD PTR [rsp]
    bba9:	48 ff c4             	inc    rsp
    bbac:	48 ff 04 24          	inc    QWORD PTR [rsp]
    bbb0:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    bbb1:	f3 e2 12             	repz loop 0xbbc6
    bbb4:	e1 12                	loope  0xbbc8
    bbb6:	e0 12                	loopne 0xbbca
    bbb8:	f2 44 0f 10 fc       	movsd  xmm15,xmm4
    bbbd:	f2 44 0f 10 3c 24    	movsd  xmm15,QWORD PTR [rsp]
    bbc3:	f2 4c 0f 2d fc       	cvtsd2si r15,xmm4
    bbc8:	f2 4c 0f 2d 3c 24    	cvtsd2si r15,QWORD PTR [rsp]
    bbce:	f2 4c 0f 2a fc       	cvtsi2sd xmm15,rsp
    bbd3:	f2 44 0f 2a 3c 24    	cvtsi2sd xmm15,DWORD PTR [rsp]
    bbd9:	48 2d 10 32 54 76    	sub    rax,0x76543210
    bbdf:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    bbe6:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    bbed:	4c 2b fd             	sub    r15,rbp
    bbf0:	4c 29 7d 00          	sub    QWORD PTR [rbp+0x0],r15
    bbf4:	49 2b 2f             	sub    rbp,QWORD PTR [r15]
    bbf7:	48 f7 ed             	imul   rbp
    bbfa:	48 f7 6d 00          	imul   QWORD PTR [rbp+0x0]
    bbfe:	4c 0f af fd          	imul   r15,rbp
    bc02:	4c 69 fd 10 32 54 76 	imul   r15,rbp,0x76543210
    bc09:	4c 0f af 7d 00       	imul   r15,QWORD PTR [rbp+0x0]
    bc0e:	4c 69 7d 00 10 32 54 	imul   r15,QWORD PTR [rbp+0x0],0x76543210
    bc15:	76 
    bc16:	48 f7 fd             	idiv   rbp
    bc19:	48 f7 7d 00          	idiv   QWORD PTR [rbp+0x0]
    bc1d:	0f 8d 10 32 54 76    	jge    0x7654ee33
    bc23:	e9 10 32 54 76       	jmp    0x7654ee38
    bc28:	ff e5                	jmp    rbp
    bc2a:	4c 8b fd             	mov    r15,rbp
    bc2d:	4c 8b 7d 00          	mov    r15,QWORD PTR [rbp+0x0]
    bc31:	49 89 2f             	mov    QWORD PTR [r15],rbp
    bc34:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    bc3b:	09 00 00 
    bc3e:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    bc45:	00 00 00 
    bc48:	e8 10 32 54 76       	call   0x7654ee5d
    bc4d:	ff d5                	call   rbp
    bc4f:	c3                   	ret    
    bc50:	48 d1 ed             	shr    rbp,1
    bc53:	48 c1 ed 12          	shr    rbp,0x12
    bc57:	48 d1 6d 00          	shr    QWORD PTR [rbp+0x0],1
    bc5b:	48 c1 6d 00 12       	shr    QWORD PTR [rbp+0x0],0x12
    bc60:	48 f7 dd             	neg    rbp
    bc63:	48 f7 5d 00          	neg    QWORD PTR [rbp+0x0]
    bc67:	0f 05                	syscall 
    bc69:	55                   	push   rbp
    bc6a:	ff 75 00             	push   QWORD PTR [rbp+0x0]
    bc6d:	68 10 32 54 76       	push   0x76543210
    bc72:	5d                   	pop    rbp
    bc73:	8f 45 00             	pop    QWORD PTR [rbp+0x0]
    bc76:	48 ff c5             	inc    rbp
    bc79:	48 ff 45 00          	inc    QWORD PTR [rbp+0x0]
    bc7d:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    bc7e:	f3 e2 12             	repz loop 0xbc93
    bc81:	e1 12                	loope  0xbc95
    bc83:	e0 12                	loopne 0xbc97
    bc85:	f2 44 0f 10 fd       	movsd  xmm15,xmm5
    bc8a:	f2 44 0f 10 7d 00    	movsd  xmm15,QWORD PTR [rbp+0x0]
    bc90:	f2 4c 0f 2d fd       	cvtsd2si r15,xmm5
    bc95:	f2 4c 0f 2d 7d 00    	cvtsd2si r15,QWORD PTR [rbp+0x0]
    bc9b:	f2 4c 0f 2a fd       	cvtsi2sd xmm15,rbp
    bca0:	f2 44 0f 2a 7d 00    	cvtsi2sd xmm15,DWORD PTR [rbp+0x0]
    bca6:	48 2d 10 32 54 76    	sub    rax,0x76543210
    bcac:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    bcb3:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    bcba:	4c 2b fe             	sub    r15,rsi
    bcbd:	4c 29 3e             	sub    QWORD PTR [rsi],r15
    bcc0:	49 2b 37             	sub    rsi,QWORD PTR [r15]
    bcc3:	48 f7 ee             	imul   rsi
    bcc6:	48 f7 2e             	imul   QWORD PTR [rsi]
    bcc9:	4c 0f af fe          	imul   r15,rsi
    bccd:	4c 69 fe 10 32 54 76 	imul   r15,rsi,0x76543210
    bcd4:	4c 0f af 3e          	imul   r15,QWORD PTR [rsi]
    bcd8:	4c 69 3e 10 32 54 76 	imul   r15,QWORD PTR [rsi],0x76543210
    bcdf:	48 f7 fe             	idiv   rsi
    bce2:	48 f7 3e             	idiv   QWORD PTR [rsi]
    bce5:	0f 8d 10 32 54 76    	jge    0x7654eefb
    bceb:	e9 10 32 54 76       	jmp    0x7654ef00
    bcf0:	ff e6                	jmp    rsi
    bcf2:	4c 8b fe             	mov    r15,rsi
    bcf5:	4c 8b 3e             	mov    r15,QWORD PTR [rsi]
    bcf8:	49 89 37             	mov    QWORD PTR [r15],rsi
    bcfb:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    bd02:	09 00 00 
    bd05:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    bd0c:	00 00 00 
    bd0f:	e8 10 32 54 76       	call   0x7654ef24
    bd14:	ff d6                	call   rsi
    bd16:	c3                   	ret    
    bd17:	48 d1 ee             	shr    rsi,1
    bd1a:	48 c1 ee 12          	shr    rsi,0x12
    bd1e:	48 d1 2e             	shr    QWORD PTR [rsi],1
    bd21:	48 c1 2e 12          	shr    QWORD PTR [rsi],0x12
    bd25:	48 f7 de             	neg    rsi
    bd28:	48 f7 1e             	neg    QWORD PTR [rsi]
    bd2b:	0f 05                	syscall 
    bd2d:	56                   	push   rsi
    bd2e:	ff 36                	push   QWORD PTR [rsi]
    bd30:	68 10 32 54 76       	push   0x76543210
    bd35:	5e                   	pop    rsi
    bd36:	8f 06                	pop    QWORD PTR [rsi]
    bd38:	48 ff c6             	inc    rsi
    bd3b:	48 ff 06             	inc    QWORD PTR [rsi]
    bd3e:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    bd3f:	f3 e2 12             	repz loop 0xbd54
    bd42:	e1 12                	loope  0xbd56
    bd44:	e0 12                	loopne 0xbd58
    bd46:	f2 44 0f 10 fe       	movsd  xmm15,xmm6
    bd4b:	f2 44 0f 10 3e       	movsd  xmm15,QWORD PTR [rsi]
    bd50:	f2 4c 0f 2d fe       	cvtsd2si r15,xmm6
    bd55:	f2 4c 0f 2d 3e       	cvtsd2si r15,QWORD PTR [rsi]
    bd5a:	f2 4c 0f 2a fe       	cvtsi2sd xmm15,rsi
    bd5f:	f2 44 0f 2a 3e       	cvtsi2sd xmm15,DWORD PTR [rsi]
    bd64:	48 2d 10 32 54 76    	sub    rax,0x76543210
    bd6a:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    bd71:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    bd78:	4c 2b ff             	sub    r15,rdi
    bd7b:	4c 29 3f             	sub    QWORD PTR [rdi],r15
    bd7e:	49 2b 3f             	sub    rdi,QWORD PTR [r15]
    bd81:	48 f7 ef             	imul   rdi
    bd84:	48 f7 2f             	imul   QWORD PTR [rdi]
    bd87:	4c 0f af ff          	imul   r15,rdi
    bd8b:	4c 69 ff 10 32 54 76 	imul   r15,rdi,0x76543210
    bd92:	4c 0f af 3f          	imul   r15,QWORD PTR [rdi]
    bd96:	4c 69 3f 10 32 54 76 	imul   r15,QWORD PTR [rdi],0x76543210
    bd9d:	48 f7 ff             	idiv   rdi
    bda0:	48 f7 3f             	idiv   QWORD PTR [rdi]
    bda3:	0f 8d 10 32 54 76    	jge    0x7654efb9
    bda9:	e9 10 32 54 76       	jmp    0x7654efbe
    bdae:	ff e7                	jmp    rdi
    bdb0:	4c 8b ff             	mov    r15,rdi
    bdb3:	4c 8b 3f             	mov    r15,QWORD PTR [rdi]
    bdb6:	49 89 3f             	mov    QWORD PTR [r15],rdi
    bdb9:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    bdc0:	09 00 00 
    bdc3:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    bdca:	00 00 00 
    bdcd:	e8 10 32 54 76       	call   0x7654efe2
    bdd2:	ff d7                	call   rdi
    bdd4:	c3                   	ret    
    bdd5:	48 d1 ef             	shr    rdi,1
    bdd8:	48 c1 ef 12          	shr    rdi,0x12
    bddc:	48 d1 2f             	shr    QWORD PTR [rdi],1
    bddf:	48 c1 2f 12          	shr    QWORD PTR [rdi],0x12
    bde3:	48 f7 df             	neg    rdi
    bde6:	48 f7 1f             	neg    QWORD PTR [rdi]
    bde9:	0f 05                	syscall 
    bdeb:	57                   	push   rdi
    bdec:	ff 37                	push   QWORD PTR [rdi]
    bdee:	68 10 32 54 76       	push   0x76543210
    bdf3:	5f                   	pop    rdi
    bdf4:	8f 07                	pop    QWORD PTR [rdi]
    bdf6:	48 ff c7             	inc    rdi
    bdf9:	48 ff 07             	inc    QWORD PTR [rdi]
    bdfc:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    bdfd:	f3 e2 12             	repz loop 0xbe12
    be00:	e1 12                	loope  0xbe14
    be02:	e0 12                	loopne 0xbe16
    be04:	f2 44 0f 10 ff       	movsd  xmm15,xmm7
    be09:	f2 44 0f 10 3f       	movsd  xmm15,QWORD PTR [rdi]
    be0e:	f2 4c 0f 2d ff       	cvtsd2si r15,xmm7
    be13:	f2 4c 0f 2d 3f       	cvtsd2si r15,QWORD PTR [rdi]
    be18:	f2 4c 0f 2a ff       	cvtsi2sd xmm15,rdi
    be1d:	f2 44 0f 2a 3f       	cvtsi2sd xmm15,DWORD PTR [rdi]
    be22:	48 2d 10 32 54 76    	sub    rax,0x76543210
    be28:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    be2f:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    be36:	4d 2b f8             	sub    r15,r8
    be39:	4d 29 38             	sub    QWORD PTR [r8],r15
    be3c:	4d 2b 07             	sub    r8,QWORD PTR [r15]
    be3f:	49 f7 e8             	imul   r8
    be42:	49 f7 28             	imul   QWORD PTR [r8]
    be45:	4d 0f af f8          	imul   r15,r8
    be49:	4d 69 f8 10 32 54 76 	imul   r15,r8,0x76543210
    be50:	4d 0f af 38          	imul   r15,QWORD PTR [r8]
    be54:	4d 69 38 10 32 54 76 	imul   r15,QWORD PTR [r8],0x76543210
    be5b:	49 f7 f8             	idiv   r8
    be5e:	49 f7 38             	idiv   QWORD PTR [r8]
    be61:	0f 8d 10 32 54 76    	jge    0x7654f077
    be67:	e9 10 32 54 76       	jmp    0x7654f07c
    be6c:	41 ff e0             	jmp    r8
    be6f:	4d 8b f8             	mov    r15,r8
    be72:	4d 8b 38             	mov    r15,QWORD PTR [r8]
    be75:	4d 89 07             	mov    QWORD PTR [r15],r8
    be78:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    be7f:	09 00 00 
    be82:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    be89:	00 00 00 
    be8c:	e8 10 32 54 76       	call   0x7654f0a1
    be91:	41 ff d0             	call   r8
    be94:	c3                   	ret    
    be95:	49 d1 e8             	shr    r8,1
    be98:	49 c1 e8 12          	shr    r8,0x12
    be9c:	49 d1 28             	shr    QWORD PTR [r8],1
    be9f:	49 c1 28 12          	shr    QWORD PTR [r8],0x12
    bea3:	49 f7 d8             	neg    r8
    bea6:	49 f7 18             	neg    QWORD PTR [r8]
    bea9:	0f 05                	syscall 
    beab:	41 50                	push   r8
    bead:	41 ff 30             	push   QWORD PTR [r8]
    beb0:	68 10 32 54 76       	push   0x76543210
    beb5:	41 58                	pop    r8
    beb7:	41 8f 00             	pop    QWORD PTR [r8]
    beba:	49 ff c0             	inc    r8
    bebd:	49 ff 00             	inc    QWORD PTR [r8]
    bec0:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    bec1:	f3 e2 12             	repz loop 0xbed6
    bec4:	e1 12                	loope  0xbed8
    bec6:	e0 12                	loopne 0xbeda
    bec8:	f2 45 0f 10 f8       	movsd  xmm15,xmm8
    becd:	f2 45 0f 10 38       	movsd  xmm15,QWORD PTR [r8]
    bed2:	f2 4d 0f 2d f8       	cvtsd2si r15,xmm8
    bed7:	f2 4d 0f 2d 38       	cvtsd2si r15,QWORD PTR [r8]
    bedc:	f2 4d 0f 2a f8       	cvtsi2sd xmm15,r8
    bee1:	f2 45 0f 2a 38       	cvtsi2sd xmm15,DWORD PTR [r8]
    bee6:	48 2d 10 32 54 76    	sub    rax,0x76543210
    beec:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    bef3:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    befa:	4d 2b f9             	sub    r15,r9
    befd:	4d 29 39             	sub    QWORD PTR [r9],r15
    bf00:	4d 2b 0f             	sub    r9,QWORD PTR [r15]
    bf03:	49 f7 e9             	imul   r9
    bf06:	49 f7 29             	imul   QWORD PTR [r9]
    bf09:	4d 0f af f9          	imul   r15,r9
    bf0d:	4d 69 f9 10 32 54 76 	imul   r15,r9,0x76543210
    bf14:	4d 0f af 39          	imul   r15,QWORD PTR [r9]
    bf18:	4d 69 39 10 32 54 76 	imul   r15,QWORD PTR [r9],0x76543210
    bf1f:	49 f7 f9             	idiv   r9
    bf22:	49 f7 39             	idiv   QWORD PTR [r9]
    bf25:	0f 8d 10 32 54 76    	jge    0x7654f13b
    bf2b:	e9 10 32 54 76       	jmp    0x7654f140
    bf30:	41 ff e1             	jmp    r9
    bf33:	4d 8b f9             	mov    r15,r9
    bf36:	4d 8b 39             	mov    r15,QWORD PTR [r9]
    bf39:	4d 89 0f             	mov    QWORD PTR [r15],r9
    bf3c:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    bf43:	09 00 00 
    bf46:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    bf4d:	00 00 00 
    bf50:	e8 10 32 54 76       	call   0x7654f165
    bf55:	41 ff d1             	call   r9
    bf58:	c3                   	ret    
    bf59:	49 d1 e9             	shr    r9,1
    bf5c:	49 c1 e9 12          	shr    r9,0x12
    bf60:	49 d1 29             	shr    QWORD PTR [r9],1
    bf63:	49 c1 29 12          	shr    QWORD PTR [r9],0x12
    bf67:	49 f7 d9             	neg    r9
    bf6a:	49 f7 19             	neg    QWORD PTR [r9]
    bf6d:	0f 05                	syscall 
    bf6f:	41 51                	push   r9
    bf71:	41 ff 31             	push   QWORD PTR [r9]
    bf74:	68 10 32 54 76       	push   0x76543210
    bf79:	41 59                	pop    r9
    bf7b:	41 8f 01             	pop    QWORD PTR [r9]
    bf7e:	49 ff c1             	inc    r9
    bf81:	49 ff 01             	inc    QWORD PTR [r9]
    bf84:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    bf85:	f3 e2 12             	repz loop 0xbf9a
    bf88:	e1 12                	loope  0xbf9c
    bf8a:	e0 12                	loopne 0xbf9e
    bf8c:	f2 45 0f 10 f9       	movsd  xmm15,xmm9
    bf91:	f2 45 0f 10 39       	movsd  xmm15,QWORD PTR [r9]
    bf96:	f2 4d 0f 2d f9       	cvtsd2si r15,xmm9
    bf9b:	f2 4d 0f 2d 39       	cvtsd2si r15,QWORD PTR [r9]
    bfa0:	f2 4d 0f 2a f9       	cvtsi2sd xmm15,r9
    bfa5:	f2 45 0f 2a 39       	cvtsi2sd xmm15,DWORD PTR [r9]
    bfaa:	48 2d 10 32 54 76    	sub    rax,0x76543210
    bfb0:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    bfb7:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    bfbe:	4d 2b fa             	sub    r15,r10
    bfc1:	4d 29 3a             	sub    QWORD PTR [r10],r15
    bfc4:	4d 2b 17             	sub    r10,QWORD PTR [r15]
    bfc7:	49 f7 ea             	imul   r10
    bfca:	49 f7 2a             	imul   QWORD PTR [r10]
    bfcd:	4d 0f af fa          	imul   r15,r10
    bfd1:	4d 69 fa 10 32 54 76 	imul   r15,r10,0x76543210
    bfd8:	4d 0f af 3a          	imul   r15,QWORD PTR [r10]
    bfdc:	4d 69 3a 10 32 54 76 	imul   r15,QWORD PTR [r10],0x76543210
    bfe3:	49 f7 fa             	idiv   r10
    bfe6:	49 f7 3a             	idiv   QWORD PTR [r10]
    bfe9:	0f 8d 10 32 54 76    	jge    0x7654f1ff
    bfef:	e9 10 32 54 76       	jmp    0x7654f204
    bff4:	41 ff e2             	jmp    r10
    bff7:	4d 8b fa             	mov    r15,r10
    bffa:	4d 8b 3a             	mov    r15,QWORD PTR [r10]
    bffd:	4d 89 17             	mov    QWORD PTR [r15],r10
    c000:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    c007:	09 00 00 
    c00a:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    c011:	00 00 00 
    c014:	e8 10 32 54 76       	call   0x7654f229
    c019:	41 ff d2             	call   r10
    c01c:	c3                   	ret    
    c01d:	49 d1 ea             	shr    r10,1
    c020:	49 c1 ea 12          	shr    r10,0x12
    c024:	49 d1 2a             	shr    QWORD PTR [r10],1
    c027:	49 c1 2a 12          	shr    QWORD PTR [r10],0x12
    c02b:	49 f7 da             	neg    r10
    c02e:	49 f7 1a             	neg    QWORD PTR [r10]
    c031:	0f 05                	syscall 
    c033:	41 52                	push   r10
    c035:	41 ff 32             	push   QWORD PTR [r10]
    c038:	68 10 32 54 76       	push   0x76543210
    c03d:	41 5a                	pop    r10
    c03f:	41 8f 02             	pop    QWORD PTR [r10]
    c042:	49 ff c2             	inc    r10
    c045:	49 ff 02             	inc    QWORD PTR [r10]
    c048:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    c049:	f3 e2 12             	repz loop 0xc05e
    c04c:	e1 12                	loope  0xc060
    c04e:	e0 12                	loopne 0xc062
    c050:	f2 45 0f 10 fa       	movsd  xmm15,xmm10
    c055:	f2 45 0f 10 3a       	movsd  xmm15,QWORD PTR [r10]
    c05a:	f2 4d 0f 2d fa       	cvtsd2si r15,xmm10
    c05f:	f2 4d 0f 2d 3a       	cvtsd2si r15,QWORD PTR [r10]
    c064:	f2 4d 0f 2a fa       	cvtsi2sd xmm15,r10
    c069:	f2 45 0f 2a 3a       	cvtsi2sd xmm15,DWORD PTR [r10]
    c06e:	48 2d 10 32 54 76    	sub    rax,0x76543210
    c074:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    c07b:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    c082:	4d 2b fb             	sub    r15,r11
    c085:	4d 29 3b             	sub    QWORD PTR [r11],r15
    c088:	4d 2b 1f             	sub    r11,QWORD PTR [r15]
    c08b:	49 f7 eb             	imul   r11
    c08e:	49 f7 2b             	imul   QWORD PTR [r11]
    c091:	4d 0f af fb          	imul   r15,r11
    c095:	4d 69 fb 10 32 54 76 	imul   r15,r11,0x76543210
    c09c:	4d 0f af 3b          	imul   r15,QWORD PTR [r11]
    c0a0:	4d 69 3b 10 32 54 76 	imul   r15,QWORD PTR [r11],0x76543210
    c0a7:	49 f7 fb             	idiv   r11
    c0aa:	49 f7 3b             	idiv   QWORD PTR [r11]
    c0ad:	0f 8d 10 32 54 76    	jge    0x7654f2c3
    c0b3:	e9 10 32 54 76       	jmp    0x7654f2c8
    c0b8:	41 ff e3             	jmp    r11
    c0bb:	4d 8b fb             	mov    r15,r11
    c0be:	4d 8b 3b             	mov    r15,QWORD PTR [r11]
    c0c1:	4d 89 1f             	mov    QWORD PTR [r15],r11
    c0c4:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    c0cb:	09 00 00 
    c0ce:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    c0d5:	00 00 00 
    c0d8:	e8 10 32 54 76       	call   0x7654f2ed
    c0dd:	41 ff d3             	call   r11
    c0e0:	c3                   	ret    
    c0e1:	49 d1 eb             	shr    r11,1
    c0e4:	49 c1 eb 12          	shr    r11,0x12
    c0e8:	49 d1 2b             	shr    QWORD PTR [r11],1
    c0eb:	49 c1 2b 12          	shr    QWORD PTR [r11],0x12
    c0ef:	49 f7 db             	neg    r11
    c0f2:	49 f7 1b             	neg    QWORD PTR [r11]
    c0f5:	0f 05                	syscall 
    c0f7:	41 53                	push   r11
    c0f9:	41 ff 33             	push   QWORD PTR [r11]
    c0fc:	68 10 32 54 76       	push   0x76543210
    c101:	41 5b                	pop    r11
    c103:	41 8f 03             	pop    QWORD PTR [r11]
    c106:	49 ff c3             	inc    r11
    c109:	49 ff 03             	inc    QWORD PTR [r11]
    c10c:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    c10d:	f3 e2 12             	repz loop 0xc122
    c110:	e1 12                	loope  0xc124
    c112:	e0 12                	loopne 0xc126
    c114:	f2 45 0f 10 fb       	movsd  xmm15,xmm11
    c119:	f2 45 0f 10 3b       	movsd  xmm15,QWORD PTR [r11]
    c11e:	f2 4d 0f 2d fb       	cvtsd2si r15,xmm11
    c123:	f2 4d 0f 2d 3b       	cvtsd2si r15,QWORD PTR [r11]
    c128:	f2 4d 0f 2a fb       	cvtsi2sd xmm15,r11
    c12d:	f2 45 0f 2a 3b       	cvtsi2sd xmm15,DWORD PTR [r11]
    c132:	48 2d 10 32 54 76    	sub    rax,0x76543210
    c138:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    c13f:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    c146:	4d 2b fc             	sub    r15,r12
    c149:	4d 29 3c 24          	sub    QWORD PTR [r12],r15
    c14d:	4d 2b 27             	sub    r12,QWORD PTR [r15]
    c150:	49 f7 ec             	imul   r12
    c153:	49 f7 2c 24          	imul   QWORD PTR [r12]
    c157:	4d 0f af fc          	imul   r15,r12
    c15b:	4d 69 fc 10 32 54 76 	imul   r15,r12,0x76543210
    c162:	4d 0f af 3c 24       	imul   r15,QWORD PTR [r12]
    c167:	4d 69 3c 24 10 32 54 	imul   r15,QWORD PTR [r12],0x76543210
    c16e:	76 
    c16f:	49 f7 fc             	idiv   r12
    c172:	49 f7 3c 24          	idiv   QWORD PTR [r12]
    c176:	0f 8d 10 32 54 76    	jge    0x7654f38c
    c17c:	e9 10 32 54 76       	jmp    0x7654f391
    c181:	41 ff e4             	jmp    r12
    c184:	4d 8b fc             	mov    r15,r12
    c187:	4d 8b 3c 24          	mov    r15,QWORD PTR [r12]
    c18b:	4d 89 27             	mov    QWORD PTR [r15],r12
    c18e:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    c195:	09 00 00 
    c198:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    c19f:	00 00 00 
    c1a2:	e8 10 32 54 76       	call   0x7654f3b7
    c1a7:	41 ff d4             	call   r12
    c1aa:	c3                   	ret    
    c1ab:	49 d1 ec             	shr    r12,1
    c1ae:	49 c1 ec 12          	shr    r12,0x12
    c1b2:	49 d1 2c 24          	shr    QWORD PTR [r12],1
    c1b6:	49 c1 2c 24 12       	shr    QWORD PTR [r12],0x12
    c1bb:	49 f7 dc             	neg    r12
    c1be:	49 f7 1c 24          	neg    QWORD PTR [r12]
    c1c2:	0f 05                	syscall 
    c1c4:	41 54                	push   r12
    c1c6:	41 ff 34 24          	push   QWORD PTR [r12]
    c1ca:	68 10 32 54 76       	push   0x76543210
    c1cf:	41 5c                	pop    r12
    c1d1:	41 8f 04 24          	pop    QWORD PTR [r12]
    c1d5:	49 ff c4             	inc    r12
    c1d8:	49 ff 04 24          	inc    QWORD PTR [r12]
    c1dc:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    c1dd:	f3 e2 12             	repz loop 0xc1f2
    c1e0:	e1 12                	loope  0xc1f4
    c1e2:	e0 12                	loopne 0xc1f6
    c1e4:	f2 45 0f 10 fc       	movsd  xmm15,xmm12
    c1e9:	f2 45 0f 10 3c 24    	movsd  xmm15,QWORD PTR [r12]
    c1ef:	f2 4d 0f 2d fc       	cvtsd2si r15,xmm12
    c1f4:	f2 4d 0f 2d 3c 24    	cvtsd2si r15,QWORD PTR [r12]
    c1fa:	f2 4d 0f 2a fc       	cvtsi2sd xmm15,r12
    c1ff:	f2 45 0f 2a 3c 24    	cvtsi2sd xmm15,DWORD PTR [r12]
    c205:	48 2d 10 32 54 76    	sub    rax,0x76543210
    c20b:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    c212:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    c219:	4d 2b fd             	sub    r15,r13
    c21c:	4d 29 7d 00          	sub    QWORD PTR [r13+0x0],r15
    c220:	4d 2b 2f             	sub    r13,QWORD PTR [r15]
    c223:	49 f7 ed             	imul   r13
    c226:	49 f7 6d 00          	imul   QWORD PTR [r13+0x0]
    c22a:	4d 0f af fd          	imul   r15,r13
    c22e:	4d 69 fd 10 32 54 76 	imul   r15,r13,0x76543210
    c235:	4d 0f af 7d 00       	imul   r15,QWORD PTR [r13+0x0]
    c23a:	4d 69 7d 00 10 32 54 	imul   r15,QWORD PTR [r13+0x0],0x76543210
    c241:	76 
    c242:	49 f7 fd             	idiv   r13
    c245:	49 f7 7d 00          	idiv   QWORD PTR [r13+0x0]
    c249:	0f 8d 10 32 54 76    	jge    0x7654f45f
    c24f:	e9 10 32 54 76       	jmp    0x7654f464
    c254:	41 ff e5             	jmp    r13
    c257:	4d 8b fd             	mov    r15,r13
    c25a:	4d 8b 7d 00          	mov    r15,QWORD PTR [r13+0x0]
    c25e:	4d 89 2f             	mov    QWORD PTR [r15],r13
    c261:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    c268:	09 00 00 
    c26b:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    c272:	00 00 00 
    c275:	e8 10 32 54 76       	call   0x7654f48a
    c27a:	41 ff d5             	call   r13
    c27d:	c3                   	ret    
    c27e:	49 d1 ed             	shr    r13,1
    c281:	49 c1 ed 12          	shr    r13,0x12
    c285:	49 d1 6d 00          	shr    QWORD PTR [r13+0x0],1
    c289:	49 c1 6d 00 12       	shr    QWORD PTR [r13+0x0],0x12
    c28e:	49 f7 dd             	neg    r13
    c291:	49 f7 5d 00          	neg    QWORD PTR [r13+0x0]
    c295:	0f 05                	syscall 
    c297:	41 55                	push   r13
    c299:	41 ff 75 00          	push   QWORD PTR [r13+0x0]
    c29d:	68 10 32 54 76       	push   0x76543210
    c2a2:	41 5d                	pop    r13
    c2a4:	41 8f 45 00          	pop    QWORD PTR [r13+0x0]
    c2a8:	49 ff c5             	inc    r13
    c2ab:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
    c2af:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    c2b0:	f3 e2 12             	repz loop 0xc2c5
    c2b3:	e1 12                	loope  0xc2c7
    c2b5:	e0 12                	loopne 0xc2c9
    c2b7:	f2 45 0f 10 fd       	movsd  xmm15,xmm13
    c2bc:	f2 45 0f 10 7d 00    	movsd  xmm15,QWORD PTR [r13+0x0]
    c2c2:	f2 4d 0f 2d fd       	cvtsd2si r15,xmm13
    c2c7:	f2 4d 0f 2d 7d 00    	cvtsd2si r15,QWORD PTR [r13+0x0]
    c2cd:	f2 4d 0f 2a fd       	cvtsi2sd xmm15,r13
    c2d2:	f2 45 0f 2a 7d 00    	cvtsi2sd xmm15,DWORD PTR [r13+0x0]
    c2d8:	48 2d 10 32 54 76    	sub    rax,0x76543210
    c2de:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    c2e5:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    c2ec:	4d 2b fe             	sub    r15,r14
    c2ef:	4d 29 3e             	sub    QWORD PTR [r14],r15
    c2f2:	4d 2b 37             	sub    r14,QWORD PTR [r15]
    c2f5:	49 f7 ee             	imul   r14
    c2f8:	49 f7 2e             	imul   QWORD PTR [r14]
    c2fb:	4d 0f af fe          	imul   r15,r14
    c2ff:	4d 69 fe 10 32 54 76 	imul   r15,r14,0x76543210
    c306:	4d 0f af 3e          	imul   r15,QWORD PTR [r14]
    c30a:	4d 69 3e 10 32 54 76 	imul   r15,QWORD PTR [r14],0x76543210
    c311:	49 f7 fe             	idiv   r14
    c314:	49 f7 3e             	idiv   QWORD PTR [r14]
    c317:	0f 8d 10 32 54 76    	jge    0x7654f52d
    c31d:	e9 10 32 54 76       	jmp    0x7654f532
    c322:	41 ff e6             	jmp    r14
    c325:	4d 8b fe             	mov    r15,r14
    c328:	4d 8b 3e             	mov    r15,QWORD PTR [r14]
    c32b:	4d 89 37             	mov    QWORD PTR [r15],r14
    c32e:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    c335:	09 00 00 
    c338:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    c33f:	00 00 00 
    c342:	e8 10 32 54 76       	call   0x7654f557
    c347:	41 ff d6             	call   r14
    c34a:	c3                   	ret    
    c34b:	49 d1 ee             	shr    r14,1
    c34e:	49 c1 ee 12          	shr    r14,0x12
    c352:	49 d1 2e             	shr    QWORD PTR [r14],1
    c355:	49 c1 2e 12          	shr    QWORD PTR [r14],0x12
    c359:	49 f7 de             	neg    r14
    c35c:	49 f7 1e             	neg    QWORD PTR [r14]
    c35f:	0f 05                	syscall 
    c361:	41 56                	push   r14
    c363:	41 ff 36             	push   QWORD PTR [r14]
    c366:	68 10 32 54 76       	push   0x76543210
    c36b:	41 5e                	pop    r14
    c36d:	41 8f 06             	pop    QWORD PTR [r14]
    c370:	49 ff c6             	inc    r14
    c373:	49 ff 06             	inc    QWORD PTR [r14]
    c376:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    c377:	f3 e2 12             	repz loop 0xc38c
    c37a:	e1 12                	loope  0xc38e
    c37c:	e0 12                	loopne 0xc390
    c37e:	f2 45 0f 10 fe       	movsd  xmm15,xmm14
    c383:	f2 45 0f 10 3e       	movsd  xmm15,QWORD PTR [r14]
    c388:	f2 4d 0f 2d fe       	cvtsd2si r15,xmm14
    c38d:	f2 4d 0f 2d 3e       	cvtsd2si r15,QWORD PTR [r14]
    c392:	f2 4d 0f 2a fe       	cvtsi2sd xmm15,r14
    c397:	f2 45 0f 2a 3e       	cvtsi2sd xmm15,DWORD PTR [r14]
    c39c:	48 2d 10 32 54 76    	sub    rax,0x76543210
    c3a2:	49 81 ef 10 32 54 76 	sub    r15,0x76543210
    c3a9:	49 81 2f 10 32 54 76 	sub    QWORD PTR [r15],0x76543210
    c3b0:	4d 2b ff             	sub    r15,r15
    c3b3:	4d 29 3f             	sub    QWORD PTR [r15],r15
    c3b6:	4d 2b 3f             	sub    r15,QWORD PTR [r15]
    c3b9:	49 f7 ef             	imul   r15
    c3bc:	49 f7 2f             	imul   QWORD PTR [r15]
    c3bf:	4d 0f af ff          	imul   r15,r15
    c3c3:	4d 69 ff 10 32 54 76 	imul   r15,r15,0x76543210
    c3ca:	4d 0f af 3f          	imul   r15,QWORD PTR [r15]
    c3ce:	4d 69 3f 10 32 54 76 	imul   r15,QWORD PTR [r15],0x76543210
    c3d5:	49 f7 ff             	idiv   r15
    c3d8:	49 f7 3f             	idiv   QWORD PTR [r15]
    c3db:	0f 8d 10 32 54 76    	jge    0x7654f5f1
    c3e1:	e9 10 32 54 76       	jmp    0x7654f5f6
    c3e6:	41 ff e7             	jmp    r15
    c3e9:	4d 8b ff             	mov    r15,r15
    c3ec:	4d 8b 3f             	mov    r15,QWORD PTR [r15]
    c3ef:	4d 89 3f             	mov    QWORD PTR [r15],r15
    c3f2:	49 bf 09 21 43 65 87 	movabs r15,0x98765432109
    c3f9:	09 00 00 
    c3fc:	49 bf 10 32 54 76 00 	movabs r15,0x76543210
    c403:	00 00 00 
    c406:	e8 10 32 54 76       	call   0x7654f61b
    c40b:	41 ff d7             	call   r15
    c40e:	c3                   	ret    
    c40f:	49 d1 ef             	shr    r15,1
    c412:	49 c1 ef 12          	shr    r15,0x12
    c416:	49 d1 2f             	shr    QWORD PTR [r15],1
    c419:	49 c1 2f 12          	shr    QWORD PTR [r15],0x12
    c41d:	49 f7 df             	neg    r15
    c420:	49 f7 1f             	neg    QWORD PTR [r15]
    c423:	0f 05                	syscall 
    c425:	41 57                	push   r15
    c427:	41 ff 37             	push   QWORD PTR [r15]
    c42a:	68 10 32 54 76       	push   0x76543210
    c42f:	41 5f                	pop    r15
    c431:	41 8f 07             	pop    QWORD PTR [r15]
    c434:	49 ff c7             	inc    r15
    c437:	49 ff 07             	inc    QWORD PTR [r15]
    c43a:	a4                   	movs   BYTE PTR es:[rdi],BYTE PTR ds:[rsi]
    c43b:	f3 e2 12             	repz loop 0xc450
    c43e:	e1 12                	loope  0xc452
    c440:	e0 12                	loopne 0xc454
    c442:	f2 45 0f 10 ff       	movsd  xmm15,xmm15
    c447:	f2 45 0f 10 3f       	movsd  xmm15,QWORD PTR [r15]
    c44c:	f2 4d 0f 2d ff       	cvtsd2si r15,xmm15
    c451:	f2 4d 0f 2d 3f       	cvtsd2si r15,QWORD PTR [r15]
    c456:	f2 4d 0f 2a ff       	cvtsi2sd xmm15,r15
    c45b:	f2 45 0f 2a 3f       	cvtsi2sd xmm15,DWORD PTR [r15]
