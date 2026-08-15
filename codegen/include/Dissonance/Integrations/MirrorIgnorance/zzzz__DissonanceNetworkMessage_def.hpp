#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/DissonanceNetworkMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DissonanceNetworkMessage)
namespace Mirror {
class NetworkMessage;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Dissonance::Integrations::MirrorIgnorance {
struct DissonanceNetworkMessage;
}
// Write type traits
MARK_VAL_T(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage);
DEFINE_IL2CPP_CLASS(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage, "Dissonance.Integrations.MirrorIgnorance", "DissonanceNetworkMessage");
// Dependencies System.ArraySegment`1<T>
namespace Dissonance::Integrations::MirrorIgnorance {
// Is value type: true
// CS Name: Dissonance.Integrations.MirrorIgnorance.DissonanceNetworkMessage
struct CORDL_TYPE DissonanceNetworkMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1803bfaa0, size 0xe0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x1803bfb80, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr DissonanceNetworkMessage() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }]
constexpr DissonanceNetworkMessage(::System::ArraySegment_1<uint8_t>  Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5823};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Data, offset: 0x0, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage, Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Integrations::MirrorIgnorance
