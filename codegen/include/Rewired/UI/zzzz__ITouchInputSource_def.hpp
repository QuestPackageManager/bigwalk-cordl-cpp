#pragma once
// IWYU pragma private; include "Rewired/UI/ITouchInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITouchInputSource)
namespace UnityEngine {
struct Touch;
}
// Forward declare root types
namespace Rewired::UI {
class ITouchInputSource;
}
// Write type traits
MARK_REF_T(::Rewired::UI::ITouchInputSource*);
DEFINE_IL2CPP_CLASS(::Rewired::UI::ITouchInputSource*, "Rewired.UI", "ITouchInputSource");
// Dependencies 
namespace Rewired::UI {
// Is value type: false
// CS Name: Rewired.UI.ITouchInputSource
class CORDL_TYPE ITouchInputSource {
public:
// Declarations
 __declspec(property(get=get_playerId)) int32_t  playerId;

 __declspec(property(get=get_touchCount)) int32_t  touchCount;

 __declspec(property(get=get_touchSupported)) bool  touchSupported;

/// @brief Method GetTouch, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Touch GetTouch(int32_t  index) ;

/// @brief Method get_playerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_playerId() ;

/// @brief Method get_touchCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_touchCount() ;

/// @brief Method get_touchSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_touchSupported() ;

// Ctor Parameters [CppParam { name: "", ty: "ITouchInputSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITouchInputSource(ITouchInputSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2891};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::UI
