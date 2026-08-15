#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/DeleteDeviceIdCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DeleteDeviceIdCallbackInfoInternal)
namespace Epic::OnlineServices::Connect {
struct DeleteDeviceIdCallbackInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct DeleteDeviceIdCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfoInternal, "Epic.OnlineServices.Connect", "DeleteDeviceIdCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.DeleteDeviceIdCallbackInfoInternal
struct CORDL_TYPE DeleteDeviceIdCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804e9c70, size 0x60, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Connect__DeleteDeviceIdCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DeleteDeviceIdCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr DeleteDeviceIdCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9135};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfoInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
