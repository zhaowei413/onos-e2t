/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "../../../../api/e2ap/v1beta2/e2ap-v01.01.00.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RICsubscriptionDetails_H_
#define	_RICsubscriptionDetails_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RICeventTriggerDefinition.h"
#include "RICactions-ToBeSetup-List.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RICsubscriptionDetails */
typedef struct RICsubscriptionDetails {
	RICeventTriggerDefinition_t	 ricEventTriggerDefinition;
	RICactions_ToBeSetup_List_t	 ricAction_ToBeSetup_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICsubscriptionDetails_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICsubscriptionDetails;

#ifdef __cplusplus
}
#endif

#endif	/* _RICsubscriptionDetails_H_ */
#include "asn_internal.h"
