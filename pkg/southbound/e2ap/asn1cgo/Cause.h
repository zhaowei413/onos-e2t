/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "../../../../api/e2ap/v2beta1/e2ap_v2.0.1_Feb3_21.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_Cause_H_
#define	_Cause_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CauseRIC.h"
#include "CauseRICservice.h"
#include "CauseTransport.h"
#include "CauseProtocol.h"
#include "CauseMisc.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Cause_PR {
	Cause_PR_NOTHING,	/* No components present */
	Cause_PR_ricRequest,
	Cause_PR_ricService,
	Cause_PR_transport,
	Cause_PR_protocol,
	Cause_PR_misc
	/* Extensions may appear below */
	
} Cause_PR;

/* Cause */
typedef struct Cause {
	Cause_PR present;
	union Cause_u {
		CauseRIC_t	 ricRequest;
		CauseRICservice_t	 ricService;
		CauseTransport_t	 transport;
		CauseProtocol_t	 protocol;
		CauseMisc_t	 misc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Cause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Cause;
extern asn_CHOICE_specifics_t asn_SPC_Cause_specs_1;
extern asn_TYPE_member_t asn_MBR_Cause_1[5];
extern asn_per_constraints_t asn_PER_type_Cause_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Cause_H_ */
#include "asn_internal.h"
