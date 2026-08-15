#pragma once
// IWYU pragma private; include "HouseHouse/Dream/DreamController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DreamController)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSystemBlock;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace HouseHouse::Dream {
struct DreamController_LookIdTrio;
}
namespace HouseHouse::Dream {
class Dream;
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
class Object;
}
// Forward declare root types
namespace HouseHouse::Dream {
class DreamController;
}
namespace HouseHouse::Dream {
struct DreamController_LookIdTrio;
}
// Write type traits
MARK_REF_T(::HouseHouse::Dream::DreamController*);
MARK_VAL_T(::HouseHouse::Dream::DreamController_LookIdTrio);
DEFINE_IL2CPP_CLASS(::HouseHouse::Dream::DreamController*, "HouseHouse.Dream", "DreamController");
DEFINE_IL2CPP_CLASS(::HouseHouse::Dream::DreamController_LookIdTrio, "HouseHouse.Dream", "DreamController/LookIdTrio");
// Dependencies 
namespace HouseHouse::Dream {
// Is value type: true
// CS Name: HouseHouse.Dream.DreamController/LookIdTrio
struct CORDL_TYPE DreamController_LookIdTrio {
public:
// Declarations
/// @brief Method Equals, addr 0x1803cd5c0, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1803cd570, size 0x50, virtual false, abstract: false, final false
inline bool Equals(::HouseHouse::Dream::DreamController_LookIdTrio  other) ;

/// @brief Method GetHashCode, addr 0x1803cd640, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x1803cd660, size 0x20, virtual false, abstract: false, final false
inline void _ctor(uint8_t  lookIdHead, uint8_t  lookIdTorso, uint8_t  lookIdLegs) ;

/// @brief Method op_Equality, addr 0x1803cd680, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::HouseHouse::Dream::DreamController_LookIdTrio  left, ::HouseHouse::Dream::DreamController_LookIdTrio  right) ;

/// @brief Method op_Inequality, addr 0x1803cd6b0, size 0x30, virtual false, abstract: false, final false
static inline bool op_Inequality(::HouseHouse::Dream::DreamController_LookIdTrio  left, ::HouseHouse::Dream::DreamController_LookIdTrio  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr DreamController_LookIdTrio() ;

// Ctor Parameters [CppParam { name: "lookIdHead", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "lookIdTorso", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "lookIdLegs", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DreamController_LookIdTrio(uint8_t  lookIdHead, uint8_t  lookIdTorso, uint8_t  lookIdLegs) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5777};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field lookIdHead, offset: 0x0, size: 0x1, def value: None
 uint8_t  lookIdHead;

/// @brief Field lookIdTorso, offset: 0x1, size: 0x1, def value: None
 uint8_t  lookIdTorso;

/// @brief Field lookIdLegs, offset: 0x2, size: 0x1, def value: None
 uint8_t  lookIdLegs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Dream::DreamController_LookIdTrio, lookIdHead) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::DreamController_LookIdTrio, lookIdTorso) == 0x1, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::DreamController_LookIdTrio, lookIdLegs) == 0x2, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Dream::DreamController_LookIdTrio) == 0x3, "Size mismatch!");

} // namespace end def HouseHouse::Dream
// Dependencies HouseHouse.Dream.DreamController::LookIdTrio, Mirror.NetworkBehaviour, PeckSystemReference
namespace HouseHouse::Dream {
// Is value type: false
// CS Name: HouseHouse.Dream.DreamController
class CORDL_TYPE DreamController : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using LookIdTrio = ::HouseHouse::Dream::DreamController_LookIdTrio;

 __declspec(property(get=get_Networkfriend1Looks, put=set_Networkfriend1Looks)) ::HouseHouse::Dream::DreamController_LookIdTrio  Networkfriend1Looks;

 __declspec(property(get=get_Networkfriend2Looks, put=set_Networkfriend2Looks)) ::HouseHouse::Dream::DreamController_LookIdTrio  Networkfriend2Looks;

/// @brief Field candidates, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_candidates, put=__cordl_internal_set_candidates)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  candidates;

/// @brief Field dream, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_dream, put=__cordl_internal_set_dream)) ::UnityW<::HouseHouse::Dream::Dream>  dream;

/// @brief Field dreamPlayer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamPlayer, put=__cordl_internal_set_dreamPlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  dreamPlayer;

/// @brief Field friend1Looks, offset 0xb0, size 0x3 
 __declspec(property(get=__cordl_internal_get_friend1Looks, put=__cordl_internal_set_friend1Looks)) ::HouseHouse::Dream::DreamController_LookIdTrio  friend1Looks;

/// @brief Field friend2Looks, offset 0xb3, size 0x3 
 __declspec(property(get=__cordl_internal_get_friend2Looks, put=__cordl_internal_set_friend2Looks)) ::HouseHouse::Dream::DreamController_LookIdTrio  friend2Looks;

/// @brief Field inputBlock, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputBlock, put=__cordl_internal_set_inputBlock)) ::UnityW<::GlobalNamespace::PeckSystemBlock>  inputBlock;

/// @brief Field startDreamSystem, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_startDreamSystem, put=__cordl_internal_set_startDreamSystem)) ::GlobalNamespace::PeckSystemReference  startDreamSystem;

/// @brief Method Awake, addr 0x1803bfea0, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeSyncVars, addr 0x1803bfef0, size 0x300, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method GetDreamPlayer, addr 0x1803c01f0, size 0x330, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GetDreamPlayer(::by_ref<::GlobalNamespace::PlayerCharacter*>  friend1, ::by_ref<::GlobalNamespace::PlayerCharacter*>  friend2) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::HouseHouse::Dream::DreamController* New_ctor() ;

/// @brief Method OnSetColor1, addr 0x1803c0520, size 0x70, virtual false, abstract: false, final false
inline void OnSetColor1(::HouseHouse::Dream::DreamController_LookIdTrio  oldValue, ::HouseHouse::Dream::DreamController_LookIdTrio  newValue) ;

/// @brief Method OnSetColor2, addr 0x1803c0590, size 0x70, virtual false, abstract: false, final false
inline void OnSetColor2(::HouseHouse::Dream::DreamController_LookIdTrio  oldValue, ::HouseHouse::Dream::DreamController_LookIdTrio  newValue) ;

/// @brief Method OnStartDreamPeck, addr 0x1803c0600, size 0x280, virtual false, abstract: false, final false
inline void OnStartDreamPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SerializeSyncVars, addr 0x1803c0880, size 0x100, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* const& __cordl_internal_get_candidates() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*& __cordl_internal_get_candidates() ;

constexpr ::UnityW<::HouseHouse::Dream::Dream> const& __cordl_internal_get_dream() const;

constexpr ::UnityW<::HouseHouse::Dream::Dream>& __cordl_internal_get_dream() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_dreamPlayer() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_dreamPlayer() ;

constexpr ::HouseHouse::Dream::DreamController_LookIdTrio const& __cordl_internal_get_friend1Looks() const;

constexpr ::HouseHouse::Dream::DreamController_LookIdTrio& __cordl_internal_get_friend1Looks() ;

constexpr ::HouseHouse::Dream::DreamController_LookIdTrio const& __cordl_internal_get_friend2Looks() const;

constexpr ::HouseHouse::Dream::DreamController_LookIdTrio& __cordl_internal_get_friend2Looks() ;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& __cordl_internal_get_inputBlock() const;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& __cordl_internal_get_inputBlock() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_startDreamSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_startDreamSystem() ;

constexpr void __cordl_internal_set_candidates(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value) ;

constexpr void __cordl_internal_set_dream(::UnityW<::HouseHouse::Dream::Dream>  value) ;

constexpr void __cordl_internal_set_dreamPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_friend1Looks(::HouseHouse::Dream::DreamController_LookIdTrio  value) ;

constexpr void __cordl_internal_set_friend2Looks(::HouseHouse::Dream::DreamController_LookIdTrio  value) ;

constexpr void __cordl_internal_set_inputBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value) ;

constexpr void __cordl_internal_set_startDreamSystem(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Networkfriend1Looks, addr 0x1803c0980, size 0x20, virtual false, abstract: false, final false
inline ::HouseHouse::Dream::DreamController_LookIdTrio get_Networkfriend1Looks() ;

/// @brief Method get_Networkfriend2Looks, addr 0x1803c09a0, size 0x20, virtual false, abstract: false, final false
inline ::HouseHouse::Dream::DreamController_LookIdTrio get_Networkfriend2Looks() ;

/// @brief Method set_Networkfriend1Looks, addr 0x1803c09c0, size 0x90, virtual false, abstract: false, final false
inline void set_Networkfriend1Looks(::ByRefConst<::HouseHouse::Dream::DreamController_LookIdTrio>  value) ;

/// @brief Method set_Networkfriend2Looks, addr 0x1803c0a50, size 0x90, virtual false, abstract: false, final false
inline void set_Networkfriend2Looks(::ByRefConst<::HouseHouse::Dream::DreamController_LookIdTrio>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DreamController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DreamController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DreamController(DreamController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DreamController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DreamController(DreamController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5778};

/// @brief Field startDreamSystem, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___startDreamSystem;

/// @brief Field inputBlock, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSystemBlock>  ___inputBlock;

/// @brief Field candidates, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  ___candidates;

/// @brief Field dreamPlayer, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___dreamPlayer;

/// @brief Field dream, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::HouseHouse::Dream::Dream>  ___dream;

/// @brief Field friend1Looks, offset: 0xb0, size: 0x3, def value: None
 ::HouseHouse::Dream::DreamController_LookIdTrio  ___friend1Looks;

/// @brief Field friend2Looks, offset: 0xb3, size: 0x3, def value: None
 ::HouseHouse::Dream::DreamController_LookIdTrio  ___friend2Looks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Dream::DreamController, ___startDreamSystem) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::DreamController, ___inputBlock) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::DreamController, ___candidates) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::DreamController, ___dreamPlayer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::DreamController, ___dream) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::DreamController, ___friend1Looks) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::DreamController, ___friend2Looks) == 0xb3, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Dream::DreamController) == 0xb8, "Size mismatch!");

} // namespace end def HouseHouse::Dream
