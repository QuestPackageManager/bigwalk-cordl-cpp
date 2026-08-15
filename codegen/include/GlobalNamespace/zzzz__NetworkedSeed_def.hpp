#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkedSeed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkedSeed)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkedSeed;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkedSeed*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkedSeed*, "", "NetworkedSeed");
// Dependencies Mirror.NetworkBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkedSeed
class CORDL_TYPE NetworkedSeed : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_Networkseed, put=set_Networkseed)) int32_t  Networkseed;

/// @brief Field seed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) int32_t  seed;

/// @brief Method DeserializeSyncVars, addr 0x180426e90, size 0x50, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::NetworkedSeed* New_ctor() ;

/// @brief Method OnStartServer, addr 0x180426ee0, size 0x90, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method SerializeSyncVars, addr 0x180414ae0, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

constexpr int32_t const& __cordl_internal_get_seed() const;

constexpr int32_t& __cordl_internal_get_seed() ;

constexpr void __cordl_internal_set_seed(int32_t  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Networkseed, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Networkseed() ;

/// @brief Method set_Networkseed, addr 0x180426f70, size 0x80, virtual false, abstract: false, final false
inline void set_Networkseed(::ByRefConst<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedSeed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedSeed", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedSeed(NetworkedSeed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedSeed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedSeed(NetworkedSeed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5237};

/// @brief Field seed, offset: 0x68, size: 0x4, def value: None
 int32_t  ___seed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkedSeed, ___seed) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkedSeed) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
