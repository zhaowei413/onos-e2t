/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "../../../../api/e2ap/v2/e2ap_v2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_GlobalE2node_ng_eNB_ID_H_
#define	_GlobalE2node_ng_eNB_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GlobalngeNB-ID.h"
#include "GlobalENB-ID.h"
#include "NGENB-DU-ID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GlobalENB_ID;

/* GlobalE2node-ng-eNB-ID */
typedef struct GlobalE2node_ng_eNB_ID {
	GlobalngeNB_ID_t	 global_ng_eNB_ID;
	GlobalENB_ID_t	*global_eNB_ID;	/* OPTIONAL */
	NGENB_DU_ID_t	*ngENB_DU_ID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalE2node_ng_eNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalE2node_ng_eNB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_GlobalE2node_ng_eNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalE2node_ng_eNB_ID_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalE2node_ng_eNB_ID_H_ */
#include "asn_internal.h"
