#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/DissonanceNetworkMessageExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DissonanceNetworkMessageExtensions)
namespace Dissonance::Datastructures {
template<typename T>
class ConcurrentPool_1;
}
namespace Dissonance::Integrations::MirrorIgnorance {
class DissonanceNetworkMessageExtensions___c;
}
namespace Dissonance::Integrations::MirrorIgnorance {
struct DissonanceNetworkMessage;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace Dissonance::Integrations::MirrorIgnorance {
class DissonanceNetworkMessageExtensions;
}
namespace Dissonance::Integrations::MirrorIgnorance {
class DissonanceNetworkMessageExtensions___c;
}
// Write type traits
MARK_REF_T(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions*);
MARK_REF_T(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*);
DEFINE_IL2CPP_CLASS(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions*, "Dissonance.Integrations.MirrorIgnorance", "DissonanceNetworkMessageExtensions");
DEFINE_IL2CPP_CLASS(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*, "Dissonance.Integrations.MirrorIgnorance", "DissonanceNetworkMessageExtensions/<>c");
// Dependencies System.Object
namespace Dissonance::Integrations::MirrorIgnorance {
// Is value type: false
// CS Name: Dissonance.Integrations.MirrorIgnorance.DissonanceNetworkMessageExtensions/<>c
class CORDL_TYPE DissonanceNetworkMessageExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*  __9;

static inline ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x1803d15d0, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DissonanceNetworkMessageExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DissonanceNetworkMessageExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DissonanceNetworkMessageExtensions___c(DissonanceNetworkMessageExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DissonanceNetworkMessageExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DissonanceNetworkMessageExtensions___c(DissonanceNetworkMessageExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Integrations::MirrorIgnorance
// Dependencies System.Object
namespace Dissonance::Integrations::MirrorIgnorance {
// Is value type: false
// CS Name: Dissonance.Integrations.MirrorIgnorance.DissonanceNetworkMessageExtensions
class CORDL_TYPE DissonanceNetworkMessageExtensions : public ::System::Object {
public:
// Declarations
using __c = ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c;

/// @brief Field SerializationBuffers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SerializationBuffers, put=setStaticF_SerializationBuffers)) ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  SerializationBuffers;

/// @brief Method Deserialize, addr 0x1803bf7c0, size 0x190, virtual false, abstract: false, final false
static inline ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage Deserialize(::Mirror::NetworkReader*  reader) ;

/// @brief Method Serialize, addr 0x1803bf950, size 0x90, virtual false, abstract: false, final false
static inline void Serialize(::Mirror::NetworkWriter*  writer, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage  value) ;

static inline ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>* getStaticF_SerializationBuffers() ;

static inline void setStaticF_SerializationBuffers(::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DissonanceNetworkMessageExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DissonanceNetworkMessageExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DissonanceNetworkMessageExtensions(DissonanceNetworkMessageExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DissonanceNetworkMessageExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DissonanceNetworkMessageExtensions(DissonanceNetworkMessageExtensions const& ) = delete;

/// @brief Field BufferLength offset 0xffffffff size 0x4
static constexpr int32_t  BufferLength{static_cast<int32_t>(0x400)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Integrations::MirrorIgnorance
