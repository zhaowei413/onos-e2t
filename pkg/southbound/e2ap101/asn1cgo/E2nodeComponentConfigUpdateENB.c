/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "../../../../api/e2ap/v1beta2/e2ap-v01.01.00.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "E2nodeComponentConfigUpdateENB.h"

asn_TYPE_member_t asn_MBR_E2nodeComponentConfigUpdateENB_1[] = {
	{ ATF_POINTER, 2, offsetof(struct E2nodeComponentConfigUpdateENB, s1APconfigUpdate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s1APconfigUpdate"
		},
	{ ATF_POINTER, 1, offsetof(struct E2nodeComponentConfigUpdateENB, x2APconfigUpdate),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"x2APconfigUpdate"
		},
};
static const int asn_MAP_E2nodeComponentConfigUpdateENB_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_E2nodeComponentConfigUpdateENB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeComponentConfigUpdateENB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s1APconfigUpdate */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* x2APconfigUpdate */
};
asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentConfigUpdateENB_specs_1 = {
	sizeof(struct E2nodeComponentConfigUpdateENB),
	offsetof(struct E2nodeComponentConfigUpdateENB, _asn_ctx),
	asn_MAP_E2nodeComponentConfigUpdateENB_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_E2nodeComponentConfigUpdateENB_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentConfigUpdateENB = {
	"E2nodeComponentConfigUpdateENB",
	"E2nodeComponentConfigUpdateENB",
	&asn_OP_SEQUENCE,
	asn_DEF_E2nodeComponentConfigUpdateENB_tags_1,
	sizeof(asn_DEF_E2nodeComponentConfigUpdateENB_tags_1)
		/sizeof(asn_DEF_E2nodeComponentConfigUpdateENB_tags_1[0]), /* 1 */
	asn_DEF_E2nodeComponentConfigUpdateENB_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2nodeComponentConfigUpdateENB_tags_1)
		/sizeof(asn_DEF_E2nodeComponentConfigUpdateENB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2nodeComponentConfigUpdateENB_1,
	2,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigUpdateENB_specs_1	/* Additional specs */
};

