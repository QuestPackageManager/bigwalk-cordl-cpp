#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/PacketDelaySimulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PacketDelaySimulator)
namespace Dissonance::Networking {
struct MessageTypes;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Random;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
class PacketDelaySimulator;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::Client::PacketDelaySimulator*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::PacketDelaySimulator*, "Dissonance.Networking.Client", "PacketDelaySimulator");
// Dependencies System.Object
namespace Dissonance::Networking::Client {
// Is value type: false
// CS Name: Dissonance.Networking.Client.PacketDelaySimulator
class CORDL_TYPE PacketDelaySimulator : public ::System::Object {
public:
// Declarations
/// @brief Field _rnd, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rnd, put=__cordl_internal_set__rnd)) ::System::Random*  _rnd;

/// @brief Method IsOrderedReliable, addr 0x1805e1de0, size 0x10, virtual false, abstract: false, final false
static inline bool IsOrderedReliable(::Dissonance::Networking::MessageTypes  header) ;

static inline ::Dissonance::Networking::Client::PacketDelaySimulator* New_ctor() ;

/// @brief Method ShouldLose, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool ShouldLose(::System::ArraySegment_1<uint8_t>  packet) ;

constexpr ::System::Random* const& __cordl_internal_get__rnd() const;

constexpr ::System::Random*& __cordl_internal_get__rnd() ;

constexpr void __cordl_internal_set__rnd(::System::Random*  value) ;

/// @brief Method .ctor, addr 0x1805e1df0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PacketDelaySimulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PacketDelaySimulator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PacketDelaySimulator(PacketDelaySimulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PacketDelaySimulator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PacketDelaySimulator(PacketDelaySimulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16915};

/// @brief Field _rnd, offset: 0x10, size: 0x8, def value: None
 ::System::Random*  ____rnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::Client::PacketDelaySimulator, ____rnd) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::Client::PacketDelaySimulator) == 0x18, "Size mismatch!");

} // namespace end def Dissonance::Networking::Client
