/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
			{ "TRYK_OVERALL_flesh", "", 1200, { "", "", -1 } },
			{ "TTRYK_OVERALL_SAGE", "", 1200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_gry", "", 1200, { "", "", -1 } },
			{ "TRYK_U_B_wh_blk_Rollup_CombatUniform", "", 1200, { "", "", -1 } },
			{ "TRYK_SUITS_BLK_F", "", 10000, { "", "", -1 } },
			{ "TRYK_SUITS_BR_F", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLK_T_BK", "", 1200, { "", "", -1 } },
			{ "TRYK_U_B_BLK_T_WH", "", 1200, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_BK", "", 1200, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_WH", "", 1200, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
			{ "TRYK_U_B_C02_Tsirt", "", 1100, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "TRYK_ESS_CAP", "", 200, { "", "", -1 } },
			{ "TRYK_ESS_CAP_OD", "", 200, { "", "", -1 } },
			{ "TRYK_ESS_CAP_tan", "", 200, { "", "", -1 } },
			{ "TRYK_R_CAP_BLK", "", 200, { "", "", -1 } },
			{ "TRYK_Kio_Balaclava", "", 2500, { "", "", -1 } },
			{ "TRYK_H_wig", "", 250, { "", "", -1 } },
			{ "H_Cap_brn_SPECOPS", "", 250, { "", "", -1 } },
			{ "H_Cap_khaki_specops_UK", "", 250, { "", "", -1 } },
			{ "H_Cap_oli", "", 250, { "", "", -1 } },
			{ "H_Cap_tan", "", 250, { "", "", -1 } },
			{ "H_Cap_red", "", 250, { "", "", -1 } },
			{ "H_Cap_tan_specops_US", "", 250, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 250, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 250, { "", "", -1 } },
			{ "H_Bandanna_gry", "", 250, { "", "", -1 } },
			{ "H_Bandanna_khk", "", 250, { "", "", -1 } },
			{ "H_Bandanna_mcamo", "", 250, { "", "", -1 } },
			{ "H_Bandanna_sgg", "", 250, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 250, { "", "", -1 } },
			{ "H_Cap_blk", "", 250, { "", "", -1 } },
			{ "H_Cap_grn", "", 250, { "", "", -1 } },
			{ "H_Cap_blu", "", 250, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } },
			{ "TRYK_B_AssaultPack_MARPAT_Desert", "", 800, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack", "", 800, { "", "", -1 } },
			{ "TRYK_B_Alicepack", "", 800, { "", "", -1 } },
			{ "TRYK_B_Belt", "", 800, { "", "", -1 } },
			{ "TRYK_B_Belt_CYT", "", 800, { "", "", -1 } }
			
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "rhs_uniform_cu_ucp", "", 350, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_B_TRYK_UCP_T", "", 100, { "life_coplevel", "SCALAR", 4 } },
			{ "U_B_FullGhillie_ard", "", 5000, { "life_coplevel", "SCALAR", 1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "rhsusf_ach_helmet_ucp", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "rhsusf_ach_helmet_ESS_ucp", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "rhsusf_ach_helmet_headset_ucp", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "rhsusf_ach_helmet_headset_ess_ucp", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Cap_usblack", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "H_PilotHelmetHeli_B", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "rhs_Booniehat_ucp", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "mgsr_headbag", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Booniehat_mcamo", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Beret_Colonel", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Beret_02", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_H_Booniehat_MARPAT_Desert", "", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_Kio_Balaclava", "", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_R_CAP_TAN", "", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_R_CAP_OD_US", "", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_ESS_CAP_OD", "", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_ESS_CAP_tan", "", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Cap_usblack", "", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_H_Booniehat_AOR1", "", 25, { "life_coplevel", "SCALAR", 1 } },
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "rhs_googles_black", "", 25, { "", "", -1 } },
			{ "rhs_googles_yellow", "", 25, { "", "", -1 } },
			{ "rhs_googles_clear", "", 25, { "", "", -1 } },
			{ "rhs_googles_orange", "", 25, { "", "", -1 } },
			{ "TRYK_US_ESS_Glasses_BLK", "", 25, { "", "", -1 } },
			{ "mgsr_eyepatch_goggles", "", 25, { "", "", -1 } },
			{ "T_HoodACUBLK", "", 25, { "", "", -1 } },
			{ "TRYK_US_ESS_Glasses_TAN_BLK", "", 25, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "TRYK_Shemagh", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Spectacles", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_PlateCarrier2_rgr", "", 1500, { "life_coplevel", "SCALAR", 1 } },
			{ "rhsusf_iotv_ucp_Grenadier", "", 1500, { "life_coplevel", "SCALAR", 1 } },
			{ "rhsusf_iotv_ucp_Medic", "", 1500, { "life_coplevel", "SCALAR", 1 } },
			{ "rhsusf_iotv_ucp_Rifleman", "", 1500, { "life_coplevel", "SCALAR", 1 } },
			{ "rhsusf_iotv_ucp_SAW", "", 1500, { "life_coplevel", "SCALAR", 1 } },
			{ "rhsusf_iotv_ucp_Squadleader", "", 1500, { "life_coplevel", "SCALAR", 1 } },
			{ "rhsusf_iotv_ucp_Teamleader", "", 1500, { "life_coplevel", "SCALAR", 1 } },
			{ "V_PlateCarrierGL_rgr", "", 1500, { "life_coplevel", "SCALAR", 1 } },
			{ "V_TacVest_blk_POLICE", "", 1500, { "life_coplevel", "SCALAR", 1 } }
			
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 800, { "", "", -1 } },
			{ "rhsusf_assault_eagleaiii_ucp", "", 800, { "", "", -1 } },
			{ "TRYK_B_Medbag_ucp", "", 800, { "", "", -1 } },
			{ "B_AssaultPack_Kerry", "", 800, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 800, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 500, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 2500, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 3500, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack", "", 35, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_B_Medbag", "", 35, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_B_Belt_CYT", "", 35, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_B_FieldPack_Wood", "", 35, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_B_Alicepack", "", 35, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_B_Belt", "", 35, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_B_Carryall_blk", "", 35, { "life_coplevel", "SCALAR", 1 } },
			{ "B_UAV_01_backpack_F", "", 350, { "life_coplevel", "SCALAR", 1 } },
			{ "B_Carryall_ocamo", "", 35, { "life_coplevel", "SCALAR", 1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } },
			{ "TRYK_SUITS_BLK_F", "", 10000, { "", "", -1 } },
			{ "TRYK_SUITS_BR_F", "", 10000, { "", "", -1 } },
			{ "MEC_dishda_black", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_jacket", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_blk_jacket", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_des_jacket", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_des2_jacket", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_wood_jacket", "", 1000, { "", "", -1 } },
			{ "MEC_dishdaw_des_jacket", "", 1000, { "", "", -1 } },
			{ "MEC_dishdaw_des2_jacket", "", 1000, { "", "", -1 } },
			{ "MEC_dishdaw_wood_jacket", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_vest", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_vestA", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_vestB", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_vestC", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_vestD", "", 1000, { "", "", -1 } },
			{ "rhs_uniform_msv_emr", "", 1000, { "", "", -1 } },
			{ "U_I_FullGhillie_ard", "", 50000, { "", "", -1 } },
			{ "U_I_Wetsuit", "", 1000, { "", "", -1 } },
			{ "U_O_Wetsuit", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_vestD", "", 1000, { "", "", -1 } },
			{ "MEC_dishda_vestE", "", 1000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "MEC_headband_hamas", "", 250, { "", "", -1 } },
			{ "MEC_headband_hezbollah", "", 250, { "", "", -1 } },
			{ "MEC_headband_isis", "", 250, { "", "", -1 } },
			{ "MEC_headband_islamist", "", 250, { "", "", -1 } },
			{ "MEC_pakol_black", "", 250, { "", "", -1 } },
			{ "MEC_pakol_brown", "", 250, { "", "", -1 } },
			{ "MEC_Pakol_grey", "", 850, { "", "", -1 } },
			{ "TRYK_H_Bandana_H", "", 250, { "", "", -1 } },
			{ "TRYK_H_Bandana_wig", "", 250, { "", "", -1 } },
			{ "TRYK_H_ghillie_over", "", 850, { "", "", -1 } },
			{ "rhs_tsh4_bala", "", 250, { "", "", -1 } },
			{ "rhs_tsh4_ess_bala", "", 250, { "", "", -1 } },
			{ "mgsr_headbag", "", 550, { "", "", -1 } },
			{ "mgsr_eyepatch", "", 550, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 200, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 200, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } },
			{ "TRYK_Kio_Balaclava", "", 200, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "PU_shemagh_OD", "", 30, { "", "", -1 } },
			{ "PU_shemagh_Tan", "", 30, { "", "", -1 } },
			{ "PU_shemagh_GryBLK", "", 30, { "", "", -1 } },
			{ "PU_shemagh_ODBLK", "", 30, { "", "", -1 } },
			{ "PU_shemagh_TanBLK", "", 30, { "", "", -1 } },
			{ "MEC_shemag_black", "", 30, { "", "", -1 } },
			{ "MEC_shemag_bw", "", 30, { "", "", -1 } },
			{ "MEC_shemag_red", "", 30, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "Mask_M40", "", 30, { "", "", -1 } },
			{ "Mask_M40_OD", "", 30, { "", "", -1 } },
			{ "Mask_M50", "", 30, { "", "", -1 } },
			{ "SFG_Tac_smallBeardB", "", 30, { "", "", -1 } },
			{ "SFG_Tac_smallBeardD", "", 30, { "", "", -1 } },
			{ "SFG_Tac_smallBeardG", "", 30, { "", "", -1 } },
			{ "SFG_Tac_smallBeardO", "", 30, { "", "", -1 } },
			{ "SFG_Tac_chinlessbD", "", 30, { "", "", -1 } },
			{ "SFG_Tac_chinlessbO", "", 30, { "", "", -1 } },
			{ "SFG_Tac_ChopsD", "", 30, { "", "", -1 } },
			{ "SFG_Tac_ChopsO", "", 30, { "", "", -1 } },
			{ "TRYK_TAC_SET_OD", "", 30, { "", "", -1 } },
			{ "TRYK_TAC_SET_TAN", "", 30, { "", "", -1 } },
			{ "TRYK_TAC_SET_WH", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 12500, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500, { "", "", -1 } },
            		{ "V_BandollierB_blk", "Black Bandollier", 9000, { "", "", -1 } },
        		{ "V_BandollierB_cbr", "", 9000, { "", "", -1 } },
        		{ "V_BandollierB_khk", "Khaki Bandollier", 9000, { "", "", -1 } },
        		{ "V_BandollierB_oli", "", 9000, { "", "", -1 } },
            		{ "V_BandollierB_rgr", "", 9000, { "", "", -1 } },
            		{ "V_HarnessO_brn", "", 9000, { "", "", -1 } },
            		{ "V_HarnessO_gry", "", 9000, { "", "", -1 } },
            		{ "v_tacvest_blk", "Black Tacvest", 9000, { "", "", -1 } },
            		{ "v_tacvest_brn", "Brown Tacvest", 9000, { "", "", -1 } },
            		{ "v_tacvest_camo", "Camo Tacvest", 9000, { "", "", -1 } },
            		{ "v_tacvest_khk", "Khaki Tacvest", 9000, { "", "", -1 } },
            		{ "v_tacvest_oli", "Olive Tacvest", 9000, { "", "", -1 } },
            		{ "TRYK_V_Bulletproof", "Bulletproof Vest", 9500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

};
