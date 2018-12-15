int main()
{
	__asm
	{
		PUSH [ESP + 0x4]
		PUSH 0
		MOV EAX, 0
		CALL EAX
		ADD ESP, 0x8
		RETN
	}
}