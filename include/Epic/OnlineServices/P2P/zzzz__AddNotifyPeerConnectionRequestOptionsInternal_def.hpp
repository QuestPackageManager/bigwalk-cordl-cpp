#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/AddNotifyPeerConnectionRequestOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddNotifyPeerConnectionRequestOptionsInternal)
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionRequestOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionRequestOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal, "Epic.OnlineServices.P2P", "AddNotifyPeerConnectionRequestOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.AddNotifyPeerConnectionRequestOptionsInternal
struct CORDL_TYPE AddNotifyPeerConnectionRequestOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052ddb0, size 0x2e0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__AddNotifyPeerConnectionRequestOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyPeerConnectionRequestOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr AddNotifyPeerConnectionRequestOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_SocketId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9540};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_SocketId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_SocketId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal, m_SocketId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
