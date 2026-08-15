#pragma once
// IWYU pragma private; include "Dissonance/VoiceProximityReceiptTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__BaseProximityTrigger_1_def.hpp"
#include "Dissonance/zzzz__RoomMembership_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceProximityReceiptTrigger)
namespace Dissonance {
template<typename THandle>
class BaseProximityTrigger_1_Grid;
}
namespace Dissonance {
class IVoiceReceiptTrigger;
}
namespace Dissonance {
struct RoomMembership;
}
namespace Dissonance {
class VoiceProximityReceiptTrigger_ReceiptGrid;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace Dissonance {
class VoiceProximityReceiptTrigger;
}
namespace Dissonance {
class VoiceProximityReceiptTrigger_ReceiptGrid;
}
// Write type traits
MARK_REF_T(::Dissonance::VoiceProximityReceiptTrigger*);
MARK_REF_T(::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*);
DEFINE_IL2CPP_CLASS(::Dissonance::VoiceProximityReceiptTrigger*, "Dissonance", "VoiceProximityReceiptTrigger");
DEFINE_IL2CPP_CLASS(::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*, "Dissonance", "VoiceProximityReceiptTrigger/ReceiptGrid");
// Dependencies Dissonance.BaseProximityTrigger`1::Grid<THandle>, Dissonance.RoomMembership
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.VoiceProximityReceiptTrigger/ReceiptGrid
class CORDL_TYPE VoiceProximityReceiptTrigger_ReceiptGrid : public ::Dissonance::BaseProximityTrigger_1_Grid<::Dissonance::RoomMembership> {
public:
// Declarations
/// @brief Field _parent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::UnityW<::Dissonance::VoiceProximityReceiptTrigger>  _parent;

/// @brief Method CloseHandle, addr 0x1805ce2b0, size 0x50, virtual true, abstract: false, final false
inline void CloseHandle(::Dissonance::RoomMembership  handle) ;

/// @brief Method CreateHandle, addr 0x1805ce300, size 0xa0, virtual true, abstract: false, final false
inline ::Dissonance::RoomMembership CreateHandle(::UnityEngine::Vector3Int  id, ::StringW  name) ;

static inline ::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid* New_ctor(::Dissonance::VoiceProximityReceiptTrigger*  parent) ;

constexpr ::UnityW<::Dissonance::VoiceProximityReceiptTrigger> const& __cordl_internal_get__parent() const;

constexpr ::UnityW<::Dissonance::VoiceProximityReceiptTrigger>& __cordl_internal_get__parent() ;

constexpr void __cordl_internal_set__parent(::UnityW<::Dissonance::VoiceProximityReceiptTrigger>  value) ;

/// @brief Method .ctor, addr 0x1805ce3a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::VoiceProximityReceiptTrigger*  parent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceProximityReceiptTrigger_ReceiptGrid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceProximityReceiptTrigger_ReceiptGrid", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceProximityReceiptTrigger_ReceiptGrid(VoiceProximityReceiptTrigger_ReceiptGrid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceProximityReceiptTrigger_ReceiptGrid", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceProximityReceiptTrigger_ReceiptGrid(VoiceProximityReceiptTrigger_ReceiptGrid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16838};

/// @brief Field _parent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Dissonance::VoiceProximityReceiptTrigger>  ____parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid, ____parent) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid) == 0x48, "Size mismatch!");

} // namespace end def Dissonance
// Dependencies Dissonance.BaseProximityTrigger`1<THandle>, Dissonance.RoomMembership
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.VoiceProximityReceiptTrigger
class CORDL_TYPE VoiceProximityReceiptTrigger : public ::Dissonance::BaseProximityTrigger_1<::Dissonance::RoomMembership> {
public:
// Declarations
using ReceiptGrid = ::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid;

/// @brief Field _colliderExpanded, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get__colliderExpanded, put=__cordl_internal_set__colliderExpanded)) bool  _colliderExpanded;

/// @brief Field _roomExpanded, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__roomExpanded, put=__cordl_internal_set__roomExpanded)) bool  _roomExpanded;

/// @brief Field _tokensExpanded, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__tokensExpanded, put=__cordl_internal_set__tokensExpanded)) bool  _tokensExpanded;

/// @brief Convert operator to "::Dissonance::IVoiceReceiptTrigger"
constexpr operator  ::Dissonance::IVoiceReceiptTrigger*() noexcept;

/// @brief Method CreateGrid, addr 0x1805d47b0, size 0x50, virtual true, abstract: false, final false
inline ::Dissonance::BaseProximityTrigger_1_Grid<::Dissonance::RoomMembership>* CreateGrid() ;

static inline ::Dissonance::VoiceProximityReceiptTrigger* New_ctor() ;

constexpr bool const& __cordl_internal_get__colliderExpanded() const;

constexpr bool& __cordl_internal_get__colliderExpanded() ;

constexpr bool const& __cordl_internal_get__roomExpanded() const;

constexpr bool& __cordl_internal_get__roomExpanded() ;

constexpr bool const& __cordl_internal_get__tokensExpanded() const;

constexpr bool& __cordl_internal_get__tokensExpanded() ;

constexpr void __cordl_internal_set__colliderExpanded(bool  value) ;

constexpr void __cordl_internal_set__roomExpanded(bool  value) ;

constexpr void __cordl_internal_set__tokensExpanded(bool  value) ;

/// @brief Method .ctor, addr 0x1805d4800, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Dissonance::IVoiceReceiptTrigger"
constexpr ::Dissonance::IVoiceReceiptTrigger* i___Dissonance__IVoiceReceiptTrigger() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceProximityReceiptTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceProximityReceiptTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceProximityReceiptTrigger(VoiceProximityReceiptTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceProximityReceiptTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceProximityReceiptTrigger(VoiceProximityReceiptTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16839};

/// @brief Field _roomExpanded, offset: 0x78, size: 0x1, def value: None
 bool  ____roomExpanded;

/// @brief Field _tokensExpanded, offset: 0x79, size: 0x1, def value: None
 bool  ____tokensExpanded;

/// @brief Field _colliderExpanded, offset: 0x7a, size: 0x1, def value: None
 bool  ____colliderExpanded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::VoiceProximityReceiptTrigger, ____roomExpanded) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityReceiptTrigger, ____tokensExpanded) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityReceiptTrigger, ____colliderExpanded) == 0x7a, "Offset mismatch!");

static_assert(sizeof(::Dissonance::VoiceProximityReceiptTrigger) == 0x80, "Size mismatch!");

} // namespace end def Dissonance
