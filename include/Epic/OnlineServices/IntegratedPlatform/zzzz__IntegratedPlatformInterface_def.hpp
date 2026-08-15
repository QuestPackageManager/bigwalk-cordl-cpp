#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegratedPlatformInterface)
namespace Epic::OnlineServices::IntegratedPlatform {
struct AddNotifyUserLoginStatusChangedOptions;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct ClearUserPreLogoutCallbackOptions;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct CreateIntegratedPlatformOptionsContainerOptions;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct FinalizeDeferredUserLogoutOptions;
}
namespace Epic::OnlineServices::IntegratedPlatform {
class IntegratedPlatformOptionsContainer;
}
namespace Epic::OnlineServices::IntegratedPlatform {
class OnUserLoginStatusChangedCallback;
}
namespace Epic::OnlineServices::IntegratedPlatform {
class OnUserPreLogoutCallback;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct SetUserLoginStatusOptions;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct SetUserPreLogoutCallbackOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
class IntegratedPlatformInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*, "Epic.OnlineServices.IntegratedPlatform", "IntegratedPlatformInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: false
// CS Name: Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformInterface
class CORDL_TYPE IntegratedPlatformInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Field WINDOWS_STEAM_IPT, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WINDOWS_STEAM_IPT, put=setStaticF_WINDOWS_STEAM_IPT)) ::Epic::OnlineServices::Utf8String*  WINDOWS_STEAM_IPT;

/// @brief Method AddNotifyUserLoginStatusChanged, addr 0x1805170d0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyUserLoginStatusChanged(::by_ref<::Epic::OnlineServices::IntegratedPlatform::AddNotifyUserLoginStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallback*  callbackFunction) ;

/// @brief Method ClearUserPreLogoutCallback, addr 0x1805172c0, size 0x30, virtual false, abstract: false, final false
inline void ClearUserPreLogoutCallback(::by_ref<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>  options) ;

/// @brief Method CreateIntegratedPlatformOptionsContainer, addr 0x1805172f0, size 0x60, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result CreateIntegratedPlatformOptionsContainer(::by_ref<::Epic::OnlineServices::IntegratedPlatform::CreateIntegratedPlatformOptionsContainerOptions>  options, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>  outIntegratedPlatformOptionsContainerHandle) ;

/// @brief Method FinalizeDeferredUserLogout, addr 0x180517350, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result FinalizeDeferredUserLogout(::by_ref<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptions>  options) ;

static inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface* New_ctor() ;

static inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method RemoveNotifyUserLoginStatusChanged, addr 0x1805173f0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyUserLoginStatusChanged(uint64_t  notificationId) ;

/// @brief Method SetUserLoginStatus, addr 0x180517420, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetUserLoginStatus(::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>  options) ;

/// @brief Method SetUserPreLogoutCallback, addr 0x1805174c0, size 0x1e0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetUserPreLogoutCallback(::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserPreLogoutCallbackOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallback*  callbackFunction) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_WINDOWS_STEAM_IPT() ;

static inline void setStaticF_WINDOWS_STEAM_IPT(::Epic::OnlineServices::Utf8String*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntegratedPlatformInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntegratedPlatformInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntegratedPlatformInterface(IntegratedPlatformInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedPlatformInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntegratedPlatformInterface(IntegratedPlatformInterface const& ) = delete;

/// @brief Field ADDNOTIFYUSERLOGINSTATUSCHANGED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYUSERLOGINSTATUSCHANGED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CLEARUSERPRELOGOUTCALLBACK_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CLEARUSERPRELOGOUTCALLBACK_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CREATEINTEGRATEDPLATFORMOPTIONSCONTAINER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREATEINTEGRATEDPLATFORMOPTIONSCONTAINER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field FINALIZEDEFERREDUSERLOGOUT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  FINALIZEDEFERREDUSERLOGOUT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field INTEGRATEDPLATFORMOPTIONSCONTAINER_ADD_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  INTEGRATEDPLATFORMOPTIONSCONTAINER_ADD_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field OPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  OPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETUSERLOGINSTATUS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETUSERLOGINSTATUS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETUSERPRELOGOUTCALLBACK_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETUSERPRELOGOUTCALLBACK_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field WINDOWS_STEAM_MAX_STEAMAPIINTERFACEVERSIONSARRAY_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  WINDOWS_STEAM_MAX_STEAMAPIINTERFACEVERSIONSARRAY_SIZE{static_cast<int32_t>(0x1000)};

/// @brief Field WINDOWS_STEAM_OPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  WINDOWS_STEAM_OPTIONS_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8805};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
