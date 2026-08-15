#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnDeleteDeviceIdCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnDeleteDeviceIdCallbackInternalImplementation)
namespace Epic::OnlineServices::Connect {
struct DeleteDeviceIdCallbackInfoInternal;
}
namespace Epic::OnlineServices::Connect {
class OnDeleteDeviceIdCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
class OnDeleteDeviceIdCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation*, "Epic.OnlineServices.Connect", "OnDeleteDeviceIdCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Connect {
// Is value type: false
// CS Name: Epic.OnlineServices.Connect.OnDeleteDeviceIdCallbackInternalImplementation
class CORDL_TYPE OnDeleteDeviceIdCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180527610, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180527670, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnDeleteDeviceIdCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnDeleteDeviceIdCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDeleteDeviceIdCallbackInternalImplementation(OnDeleteDeviceIdCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDeleteDeviceIdCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDeleteDeviceIdCallbackInternalImplementation(OnDeleteDeviceIdCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9173};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
