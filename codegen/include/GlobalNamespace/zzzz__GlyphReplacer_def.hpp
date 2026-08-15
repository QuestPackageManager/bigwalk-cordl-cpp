#pragma once
// IWYU pragma private; include "GlobalNamespace/GlyphReplacer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphReplacer)
namespace GlobalNamespace {
struct GlyphButtonType;
}
namespace GlobalNamespace {
struct GlyphControllerType;
}
namespace GlobalNamespace {
struct GlyphText;
}
namespace GlobalNamespace {
struct LocalizedText_MaterialType;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlyphReplacer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GlyphReplacer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlyphReplacer*, "", "GlyphReplacer");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GlyphReplacer
class CORDL_TYPE GlyphReplacer : public ::System::Object {
public:
// Declarations
/// @brief Field results, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_results, put=setStaticF_results)) ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results;

/// @brief Method GetBestMap, addr 0x1803e82a0, size 0x6a0, virtual false, abstract: false, final false
static inline ::Rewired::ActionElementMap* GetBestMap(::Rewired::Player*  player, ::Rewired::Controller*  controller, int32_t  actionId, ::Rewired::AxisRange  axisRange) ;

/// @brief Method GetButtonTypeForGenericGamepad, addr 0x1803e8940, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GlyphButtonType GetButtonTypeForGenericGamepad(int32_t  elementId) ;

/// @brief Method GetGlyph, addr 0x1803e9640, size 0x1f0, virtual false, abstract: false, final false
static inline ::StringW GetGlyph(::GlobalNamespace::LocalizedText_MaterialType  materialType, ::Rewired::Player*  player, ::Rewired::Controller*  controller, int32_t  actionId, ::Rewired::AxisRange  axisRange) ;

/// @brief Method GetGlyphControllerType, addr 0x1803e89c0, size 0x420, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GlyphControllerType GetGlyphControllerType(::Rewired::Controller*  controller) ;

/// @brief Method GetGlyphForMap, addr 0x1803e8de0, size 0x860, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GlyphText GetGlyphForMap(::Rewired::ActionElementMap*  map) ;

/// @brief Method IsJoyStick0, addr 0x1803e9830, size 0x90, virtual false, abstract: false, final false
static inline bool IsJoyStick0(::Rewired::Controller*  controller) ;

/// @brief Method MapIsBetter, addr 0x1803e98c0, size 0x30, virtual false, abstract: false, final false
static inline bool MapIsBetter(::Rewired::ActionElementMap*  mapA, ::Rewired::ActionElementMap*  mapB) ;

/// @brief Method MapMatchesAxisRange, addr 0x1803e98f0, size 0x50, virtual false, abstract: false, final false
static inline bool MapMatchesAxisRange(::Rewired::ActionElementMap*  map, ::Rewired::AxisRange  axisRange) ;

/// @brief Method ReplaceGlyphTags, addr 0x1803e9940, size 0x390, virtual false, abstract: false, final false
static inline ::StringW ReplaceGlyphTags(::StringW  text, ::GlobalNamespace::LocalizedText_MaterialType  materialType) ;

static inline ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>* getStaticF_results() ;

static inline void setStaticF_results(::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlyphReplacer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlyphReplacer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlyphReplacer(GlyphReplacer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlyphReplacer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlyphReplacer(GlyphReplacer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GlyphReplacer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
