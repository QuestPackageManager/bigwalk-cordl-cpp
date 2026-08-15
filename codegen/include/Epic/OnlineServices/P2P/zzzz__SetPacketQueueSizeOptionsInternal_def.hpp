#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SetPacketQueueSizeOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetPacketQueueSizeOptionsInternal)
namespace Epic::OnlineServices::P2P {
struct SetPacketQueueSizeOptions;
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
struct SetPacketQueueSizeOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal, "Epic.OnlineServices.P2P", "SetPacketQueueSizeOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.SetPacketQueueSizeOptionsInternal
struct CORDL_TYPE SetPacketQueueSizeOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180525730, size 0x30, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__SetPacketQueueSizeOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SetPacketQueueSizeOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IncomingPacketQueueMaxSizeBytes", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_OutgoingPacketQueueMaxSizeBytes", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr SetPacketQueueSizeOptionsInternal(int32_t  m_ApiVersion, uint64_t  m_IncomingPacketQueueMaxSizeBytes, uint64_t  m_OutgoingPacketQueueMaxSizeBytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9597};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_IncomingPacketQueueMaxSizeBytes, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_IncomingPacketQueueMaxSizeBytes;

/// @brief Field m_OutgoingPacketQueueMaxSizeBytes, offset: 0x10, size: 0x8, def value: None
 uint64_t  m_OutgoingPacketQueueMaxSizeBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal, m_IncomingPacketQueueMaxSizeBytes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal, m_OutgoingPacketQueueMaxSizeBytes) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
