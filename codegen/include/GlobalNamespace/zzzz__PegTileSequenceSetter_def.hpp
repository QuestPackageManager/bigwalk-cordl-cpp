#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileSequenceSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PegTileMusicConnector_def.hpp"
#include "GlobalNamespace/zzzz__PegTileRenderer_def.hpp"
#include "GlobalNamespace/zzzz__SplitFlapGlyph_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PegTileSequenceSetter)
namespace GlobalNamespace {
class PegTileDataSet;
}
namespace GlobalNamespace {
class PegTileSequenceGenerator;
}
namespace GlobalNamespace {
struct PropGroup;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PegTileSequenceSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PegTileSequenceSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileSequenceSetter*, "", "PegTileSequenceSetter");
// Dependencies PegTileMusicConnector, PegTileRenderer, SplitFlapGlyph, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PegTileSequenceSetter
class CORDL_TYPE PegTileSequenceSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field musicConnectors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicConnectors, put=__cordl_internal_set_musicConnectors)) ::ArrayW<::UnityW<::GlobalNamespace::PegTileMusicConnector>>  musicConnectors;

/// @brief Field pegTileDataSet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pegTileDataSet, put=__cordl_internal_set_pegTileDataSet)) ::UnityW<::GlobalNamespace::PegTileDataSet>  pegTileDataSet;

/// @brief Field pegTileRenderers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pegTileRenderers, put=__cordl_internal_set_pegTileRenderers)) ::ArrayW<::UnityW<::GlobalNamespace::PegTileRenderer>>  pegTileRenderers;

/// @brief Field sequenceOrigin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequenceOrigin, put=__cordl_internal_set_sequenceOrigin)) ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  sequenceOrigin;

/// @brief Field splitFlapGlyphs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_splitFlapGlyphs, put=__cordl_internal_set_splitFlapGlyphs)) ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>  splitFlapGlyphs;

/// @brief Method Awake, addr 0x18040c680, size 0x1b0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Match, addr 0x18040c830, size 0x2e0, virtual false, abstract: false, final false
inline void Match(::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  sequence) ;

static inline ::GlobalNamespace::PegTileSequenceSetter* New_ctor() ;

/// @brief Method OnChange, addr 0x18040cb10, size 0x330, virtual false, abstract: false, final false
inline void OnChange() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PegTileMusicConnector>> const& __cordl_internal_get_musicConnectors() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PegTileMusicConnector>>& __cordl_internal_get_musicConnectors() ;

constexpr ::UnityW<::GlobalNamespace::PegTileDataSet> const& __cordl_internal_get_pegTileDataSet() const;

constexpr ::UnityW<::GlobalNamespace::PegTileDataSet>& __cordl_internal_get_pegTileDataSet() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PegTileRenderer>> const& __cordl_internal_get_pegTileRenderers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PegTileRenderer>>& __cordl_internal_get_pegTileRenderers() ;

constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator> const& __cordl_internal_get_sequenceOrigin() const;

constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>& __cordl_internal_get_sequenceOrigin() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>> const& __cordl_internal_get_splitFlapGlyphs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>& __cordl_internal_get_splitFlapGlyphs() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_musicConnectors(::ArrayW<::UnityW<::GlobalNamespace::PegTileMusicConnector>>  value) ;

constexpr void __cordl_internal_set_pegTileDataSet(::UnityW<::GlobalNamespace::PegTileDataSet>  value) ;

constexpr void __cordl_internal_set_pegTileRenderers(::ArrayW<::UnityW<::GlobalNamespace::PegTileRenderer>>  value) ;

constexpr void __cordl_internal_set_sequenceOrigin(::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  value) ;

constexpr void __cordl_internal_set_splitFlapGlyphs(::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PegTileSequenceSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PegTileSequenceSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PegTileSequenceSetter(PegTileSequenceSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PegTileSequenceSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PegTileSequenceSetter(PegTileSequenceSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5094};

/// @brief Field sequenceOrigin, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  ___sequenceOrigin;

/// @brief Field pegTileDataSet, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileDataSet>  ___pegTileDataSet;

/// @brief Field pegTileRenderers, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PegTileRenderer>>  ___pegTileRenderers;

/// @brief Field splitFlapGlyphs, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>  ___splitFlapGlyphs;

/// @brief Field musicConnectors, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PegTileMusicConnector>>  ___musicConnectors;

/// @brief Field logVerbose, offset: 0x48, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileSequenceSetter, ___sequenceOrigin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceSetter, ___pegTileDataSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceSetter, ___pegTileRenderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceSetter, ___splitFlapGlyphs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceSetter, ___musicConnectors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSequenceSetter, ___logVerbose) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileSequenceSetter) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
