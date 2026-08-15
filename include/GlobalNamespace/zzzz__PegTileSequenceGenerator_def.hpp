#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileSequenceGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__PegTileSet_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PegTileSequenceGenerator)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PegTileDataSet;
}
namespace GlobalNamespace {
struct PegTileSet;
}
namespace GlobalNamespace {
struct PropGroup;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PegTileSequenceGenerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PegTileSequenceGenerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileSequenceGenerator*, "", "PegTileSequenceGenerator");
// Dependencies Mirror.NetworkBehaviour, PeckStateFilter, PeckSystemReference, PegTileSet
namespace GlobalNamespace {
// Is value type: false
// CS Name: PegTileSequenceGenerator
class CORDL_TYPE PegTileSequenceGenerator : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkisBlocked, put=set_NetworkisBlocked)) bool  NetworkisBlocked;

 __declspec(property(get=get_Networkseed, put=set_Networkseed)) int32_t  Networkseed;

/// @brief Field blockedSystem, offset 0xd8, size 0x28 
 __declspec(property(get=__cordl_internal_get_blockedSystem, put=__cordl_internal_set_blockedSystem)) ::GlobalNamespace::PeckSystemReference  blockedSystem;

/// @brief Field isBlocked, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBlocked, put=__cordl_internal_set_isBlocked)) bool  isBlocked;

/// @brief Field isTiedToSave, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTiedToSave, put=__cordl_internal_set_isTiedToSave)) bool  isTiedToSave;

/// @brief Field logVerbose, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onChange, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChange, put=__cordl_internal_set_onChange)) ::System::Action*  onChange;

/// @brief Field onScramble, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_onScramble, put=__cordl_internal_set_onScramble)) ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>*  onScramble;

/// @brief Field pegTileDataSet, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_pegTileDataSet, put=__cordl_internal_set_pegTileDataSet)) ::UnityW<::GlobalNamespace::PegTileDataSet>  pegTileDataSet;

/// @brief Field pegTileSet, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_pegTileSet, put=__cordl_internal_set_pegTileSet)) ::GlobalNamespace::PegTileSet  pegTileSet;

/// @brief Field saveSeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_saveSeed, put=__cordl_internal_set_saveSeed)) int32_t  saveSeed;

/// @brief Field scrambleStates, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_scrambleStates, put=__cordl_internal_set_scrambleStates)) ::GlobalNamespace::PeckStateFilter  scrambleStates;

/// @brief Field scrambleSystem, offset 0xa0, size 0x28 
 __declspec(property(get=__cordl_internal_get_scrambleSystem, put=__cordl_internal_set_scrambleSystem)) ::GlobalNamespace::PeckSystemReference  scrambleSystem;

/// @brief Field seed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) int32_t  seed;

/// @brief Field sequence, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequence, put=__cordl_internal_set_sequence)) ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  sequence;

/// @brief Field sequenceLength, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_sequenceLength, put=__cordl_internal_set_sequenceLength)) int32_t  sequenceLength;

/// @brief Field setsPerSlot, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_setsPerSlot, put=__cordl_internal_set_setsPerSlot)) ::System::Collections::Generic::List_1<::GlobalNamespace::PegTileSet>*  setsPerSlot;

/// @brief Method Awake, addr 0x180406a10, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BlockedPeck, addr 0x180406aa0, size 0x190, virtual false, abstract: false, final false
inline void BlockedPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method DeserializeSyncVars, addr 0x180406c30, size 0x1e0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method GetRandomTileFromSet, addr 0x180406e10, size 0x270, virtual false, abstract: false, final false
inline ::GlobalNamespace::PropGroup GetRandomTileFromSet(::GlobalNamespace::PegTileSet  pegTileSet, ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  avoidThesePropGroups) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::PegTileSequenceGenerator* New_ctor() ;

/// @brief Method OnChangeBlocked, addr 0x180407080, size 0x60, virtual false, abstract: false, final false
inline void OnChangeBlocked(bool  oldBlocked, bool  newBlocked) ;

/// @brief Method OnChangeSeed, addr 0x1804070e0, size 0x120, virtual false, abstract: false, final false
inline void OnChangeSeed(int32_t  oldSeed, int32_t  newSeed) ;

/// @brief Method Scramble, addr 0x180407260, size 0x110, virtual false, abstract: false, final false
inline void Scramble(int32_t  seed) ;

/// @brief Method ScramblePeck, addr 0x180407200, size 0x60, virtual false, abstract: false, final false
inline void ScramblePeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SerializeSyncVars, addr 0x180407370, size 0x70, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SetRandomSeed, addr 0x1804073e0, size 0x130, virtual false, abstract: false, final false
inline void SetRandomSeed() ;

/// @brief Method Start, addr 0x180407510, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_blockedSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_blockedSystem() ;

constexpr bool const& __cordl_internal_get_isBlocked() const;

constexpr bool& __cordl_internal_get_isBlocked() ;

constexpr bool const& __cordl_internal_get_isTiedToSave() const;

constexpr bool& __cordl_internal_get_isTiedToSave() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::System::Action* const& __cordl_internal_get_onChange() const;

constexpr ::System::Action*& __cordl_internal_get_onChange() ;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>* const& __cordl_internal_get_onScramble() const;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>*& __cordl_internal_get_onScramble() ;

constexpr ::UnityW<::GlobalNamespace::PegTileDataSet> const& __cordl_internal_get_pegTileDataSet() const;

constexpr ::UnityW<::GlobalNamespace::PegTileDataSet>& __cordl_internal_get_pegTileDataSet() ;

constexpr ::GlobalNamespace::PegTileSet const& __cordl_internal_get_pegTileSet() const;

constexpr ::GlobalNamespace::PegTileSet& __cordl_internal_get_pegTileSet() ;

constexpr int32_t const& __cordl_internal_get_saveSeed() const;

constexpr int32_t& __cordl_internal_get_saveSeed() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_scrambleStates() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_scrambleStates() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_scrambleSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_scrambleSystem() ;

constexpr int32_t const& __cordl_internal_get_seed() const;

constexpr int32_t& __cordl_internal_get_seed() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>* const& __cordl_internal_get_sequence() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*& __cordl_internal_get_sequence() ;

constexpr int32_t const& __cordl_internal_get_sequenceLength() const;

constexpr int32_t& __cordl_internal_get_sequenceLength() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PegTileSet>* const& __cordl_internal_get_setsPerSlot() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PegTileSet>*& __cordl_internal_get_setsPerSlot() ;

constexpr void __cordl_internal_set_blockedSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_isBlocked(bool  value) ;

constexpr void __cordl_internal_set_isTiedToSave(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onChange(::System::Action*  value) ;

constexpr void __cordl_internal_set_onScramble(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>*  value) ;

constexpr void __cordl_internal_set_pegTileDataSet(::UnityW<::GlobalNamespace::PegTileDataSet>  value) ;

constexpr void __cordl_internal_set_pegTileSet(::GlobalNamespace::PegTileSet  value) ;

constexpr void __cordl_internal_set_saveSeed(int32_t  value) ;

constexpr void __cordl_internal_set_scrambleStates(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_scrambleSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_seed(int32_t  value) ;

constexpr void __cordl_internal_set_sequence(::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  value) ;

constexpr void __cordl_internal_set_sequenceLength(int32_t  value) ;

constexpr void __cordl_internal_set_setsPerSlot(::System::Collections::Generic::List_1<::GlobalNamespace::PegTileSet>*  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkisBlocked, addr 0x180407540, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisBlocked() ;

/// @brief Method get_Networkseed, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Networkseed() ;

/// @brief Method set_NetworkisBlocked, addr 0x180407550, size 0x110, virtual false, abstract: false, final false
inline void set_NetworkisBlocked(::ByRefConst<bool>  value) ;

/// @brief Method set_Networkseed, addr 0x180407660, size 0xa0, virtual false, abstract: false, final false
inline void set_Networkseed(::ByRefConst<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PegTileSequenceGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PegTileSequenceGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PegTileSequenceGenerator(PegTileSequenceGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PegTileSequenceGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PegTileSequenceGenerator(PegTileSequenceGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5093};

/// @brief Field seed, offset: 0x68, size: 0x4, def value: None
 int32_t  ___seed;

/// @brief Field isBlocked, offset: 0x6c, size: 0x1, def value: None
 bool  ___isBlocked;

/// @brief Field sequenceLength, offset: 0x70, size: 0x4, def value: None
 int32_t  ___sequenceLength;

/// @brief Field isTiedToSave, offset: 0x74, size: 0x1, def value: None
 bool  ___isTiedToSave;

/// @brief Field saveSeed, offset: 0x78, size: 0x4, def value: None
 int32_t  ___saveSeed;

/// @brief Field sequence, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  ___sequence;

/// @brief Field pegTileDataSet, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileDataSet>  ___pegTileDataSet;

/// @brief Field pegTileSet, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::PegTileSet  ___pegTileSet;

/// @brief Field setsPerSlot, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PegTileSet>*  ___setsPerSlot;

/// @brief Field scrambleSystem, offset: 0xa0, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___scrambleSystem;

/// @brief Field scrambleStates, offset: 0xc8, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___scrambleStates;

/// @brief Field blockedSystem, offset: 0xd8, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___blockedSystem;

/// @brief Field logVerbose, offset: 0x100, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field onScramble, offset: 0x108, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>*  ___onScramble;

/// @brief Field onChange, offset: 0x110, size: 0x8, def value: None
 ::System::Action*  ___onChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___seed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___isBlocked) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___sequenceLength) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___isTiedToSave) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___saveSeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___sequence) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___pegTileDataSet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___pegTileSet) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___setsPerSlot) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___scrambleSystem) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___scrambleStates) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___blockedSystem) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___logVerbose) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___onScramble) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceGenerator, ___onChange) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileSequenceGenerator) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
