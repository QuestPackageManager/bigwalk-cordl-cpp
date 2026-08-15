#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/ReceivePacketOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReceivePacketOptionsInternal)
namespace Epic::OnlineServices::P2P {
struct ReceivePacketOptions;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct ReceivePacketOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal, "Epic.OnlineServices.P2P", "ReceivePacketOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.ReceivePacketOptionsInternal
#pragma pack(push, 8)
struct CORDL_TYPE ReceivePacketOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x1805334c0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptions>  other) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReceivePacketOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_MaxDataSizeBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_RequestedChannel", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ReceivePacketOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, uint32_t  m_MaxDataSizeBytes, ::System::IntPtr  m_RequestedChannel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9526};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_MaxDataSizeBytes, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_MaxDataSizeBytes;

/// @brief Field m_RequestedChannel, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_RequestedChannel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal, m_MaxDataSizeBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal, m_RequestedChannel) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
