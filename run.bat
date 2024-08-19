@echo off

for /l %%i in (1, 1, 100) do (
	test_gen.exe > test.inp
	test.exe < test.inp > test.out
	test_trau < test.inp > test.ans
	fc test.out test.ans > 0 || echo TEST %%i [WA] && goto :out
	echo TEST %%i [AC]
)

:out

