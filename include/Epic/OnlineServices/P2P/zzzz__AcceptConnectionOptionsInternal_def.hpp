#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/AcceptConnectionOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AcceptConnectionOptionsInternal)
namespace Epic::OnlineServices::P2P {
struct AcceptConnectionOptions;
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
struct AcceptConnectionOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::AcceptConnectionOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::AcceptConnectionOptionsInternal, "Epic.OnlineServices.P2P", "AcceptConnectionOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.AcceptConnectionOptionsInternal
struct CORDL_TYPE AcceptConnectionOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AcceptConnectionOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AcceptConnectionOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1b70, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052cab0, size 0x110, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::P2P::AcceptConnectionOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AcceptConnectionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AcceptConnectionOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__AcceptConnectionOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AcceptConnectionOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RemoteUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr AcceptConnectionOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RemoteUserId, ::System::IntPtr  m_SocketId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9530};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RemoteUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RemoteUserId;

/// @brief Field m_SocketId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_SocketId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::AcceptConnectionOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::AcceptConnectionOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::AcceptConnectionOptionsInternal, m_RemoteUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::AcceptConnectionOptionsInternal, m_SocketId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::AcceptConnectionOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
