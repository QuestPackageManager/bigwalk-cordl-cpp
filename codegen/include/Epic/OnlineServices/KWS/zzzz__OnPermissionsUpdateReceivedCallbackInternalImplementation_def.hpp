#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnPermissionsUpdateReceivedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnPermissionsUpdateReceivedCallbackInternalImplementation)
namespace Epic::OnlineServices::KWS {
class OnPermissionsUpdateReceivedCallbackInternal;
}
namespace Epic::OnlineServices::KWS {
struct PermissionsUpdateReceivedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::KWS {
class OnPermissionsUpdateReceivedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation*, "Epic.OnlineServices.KWS", "OnPermissionsUpdateReceivedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::KWS {
// Is value type: false
// CS Name: Epic.OnlineServices.KWS.OnPermissionsUpdateReceivedCallbackInternalImplementation
class CORDL_TYPE OnPermissionsUpdateReceivedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180519fb0, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18051a020, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnPermissionsUpdateReceivedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnPermissionsUpdateReceivedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnPermissionsUpdateReceivedCallbackInternalImplementation(OnPermissionsUpdateReceivedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnPermissionsUpdateReceivedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnPermissionsUpdateReceivedCallbackInternalImplementation(OnPermissionsUpdateReceivedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8764};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
