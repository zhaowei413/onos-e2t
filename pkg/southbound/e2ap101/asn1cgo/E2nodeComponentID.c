/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "../../../../api/e2ap/v1beta2/e2ap-v01.01.00.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "E2nodeComponentID.h"

#include "E2nodeComponentGNB-CU-UP-ID.h"
#include "E2nodeComponentGNB-DU-ID.h"
asn_per_constraints_t asn_PER_type_E2nodeComponentID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_E2nodeComponentID_1[] = {
	{ ATF_POINTER, 0, offsetof(struct E2nodeComponentID, choice.e2nodeComponentTypeGNB_CU_UP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2nodeComponentGNB_CU_UP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e2nodeComponentTypeGNB-CU-UP"
		},
	{ ATF_POINTER, 0, offsetof(struct E2nodeComponentID, choice.e2nodeComponentTypeGNB_DU),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2nodeComponentGNB_DU_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e2nodeComponentTypeGNB-DU"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeComponentID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e2nodeComponentTypeGNB-CU-UP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* e2nodeComponentTypeGNB-DU */
};
asn_CHOICE_specifics_t asn_SPC_E2nodeComponentID_specs_1 = {
	sizeof(struct E2nodeComponentID),
	offsetof(struct E2nodeComponentID, _asn_ctx),
	offsetof(struct E2nodeComponentID, present),
	sizeof(((struct E2nodeComponentID *)0)->present),
	asn_MAP_E2nodeComponentID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentID = {
	"E2nodeComponentID",
	"E2nodeComponentID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_E2nodeComponentID_constr_1, CHOICE_constraint },
	asn_MBR_E2nodeComponentID_1,
	2,	/* Elements count */
	&asn_SPC_E2nodeComponentID_specs_1	/* Additional specs */
};

