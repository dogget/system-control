
{REDUND_OK} FUNCTION_BLOCK drive (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		ENABLE : BOOL;
		STATE : UINT;
	END_VAR
	VAR_OUTPUT
		COM : UINT;
		real_speed : INT;
	END_VAR
END_FUNCTION_BLOCK
