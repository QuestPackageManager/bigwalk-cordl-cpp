#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnCreateDeviceIdCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnCreateDeviceIdCallbackInternalImplementation)
namespace Epic::OnlineServices::Connect {
struct CreateDeviceIdCallbackInfoInternal;
}
namespace Epic::OnlineServices::Connect {
class OnCreateDeviceIdCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
class OnCreateDeviceIdCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation*, "Epic.OnlineServices.Connect", "OnCreateDeviceIdCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Connect {
// Is value type: false
// CS Name: Epic.OnlineServices.Connect.OnCreateDeviceIdCallbackInternalImplementation
class CORDL_TYPE OnCreateDeviceIdCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180527190, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1805271f0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnCreateDeviceIdCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnCreateDeviceIdCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnCreateDeviceIdCallbackInternalImplementation(OnCreateDeviceIdCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnCreateDeviceIdCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnCreateDeviceIdCallbackInternalImplementation(OnCreateDeviceIdCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9167};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
