#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnQueryAgeGateCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryAgeGateCallbackInternalImplementation)
namespace Epic::OnlineServices::KWS {
class OnQueryAgeGateCallbackInternal;
}
namespace Epic::OnlineServices::KWS {
struct QueryAgeGateCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::KWS {
class OnQueryAgeGateCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation*, "Epic.OnlineServices.KWS", "OnQueryAgeGateCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::KWS {
// Is value type: false
// CS Name: Epic.OnlineServices.KWS.OnQueryAgeGateCallbackInternalImplementation
class CORDL_TYPE OnQueryAgeGateCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18051a200, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18051a260, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryAgeGateCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryAgeGateCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryAgeGateCallbackInternalImplementation(OnQueryAgeGateCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryAgeGateCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryAgeGateCallbackInternalImplementation(OnQueryAgeGateCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8767};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
