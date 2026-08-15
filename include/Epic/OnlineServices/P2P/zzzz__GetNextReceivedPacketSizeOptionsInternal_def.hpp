#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/GetNextReceivedPacketSizeOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetNextReceivedPacketSizeOptionsInternal)
namespace Epic::OnlineServices::P2P {
struct GetNextReceivedPacketSizeOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct GetNextReceivedPacketSizeOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal, "Epic.OnlineServices.P2P", "GetNextReceivedPacketSizeOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.GetNextReceivedPacketSizeOptionsInternal
#pragma pack(push, 8)
struct CORDL_TYPE GetNextReceivedPacketSizeOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052e820, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>  other) ;

/// @brief Method Set, addr 0x18052e8a0, size 0xd0, virtual false, abstract: false, final false
inline void Set(::by_ref<::System::Nullable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__GetNextReceivedPacketSizeOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GetNextReceivedPacketSizeOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RequestedChannel", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr GetNextReceivedPacketSizeOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RequestedChannel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9523};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RequestedChannel, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RequestedChannel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal, m_RequestedChannel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
