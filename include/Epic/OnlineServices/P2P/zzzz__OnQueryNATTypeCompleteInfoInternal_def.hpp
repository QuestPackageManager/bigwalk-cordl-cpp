#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnQueryNATTypeCompleteInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/P2P/zzzz__NATType_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnQueryNATTypeCompleteInfoInternal)
namespace Epic::OnlineServices::P2P {
struct OnQueryNATTypeCompleteInfo;
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
namespace Epic::OnlineServices::P2P {
struct OnQueryNATTypeCompleteInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal, "Epic.OnlineServices.P2P", "OnQueryNATTypeCompleteInfoInternal");
// Dependencies Epic.OnlineServices.P2P.NATType, Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.OnQueryNATTypeCompleteInfoInternal
struct CORDL_TYPE OnQueryNATTypeCompleteInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo>*() ;

/// @brief Method Get, addr 0x180530dc0, size 0x1d0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__OnQueryNATTypeCompleteInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnQueryNATTypeCompleteInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_NATType", ty: "::Epic::OnlineServices::P2P::NATType", modifiers: "", def_value: None }]
constexpr OnQueryNATTypeCompleteInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::Epic::OnlineServices::P2P::NATType  m_NATType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9583};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_NATType, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::P2P::NATType  m_NATType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal, m_NATType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
