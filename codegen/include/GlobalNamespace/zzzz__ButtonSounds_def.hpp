#pragma once
// IWYU pragma private; include "GlobalNamespace/ButtonSounds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ButtonSounds)
namespace GlobalNamespace {
class AudioAsset;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class ButtonSounds;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ButtonSounds*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ButtonSounds*, "", "ButtonSounds");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ButtonSounds
class CORDL_TYPE ButtonSounds : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Down, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Down, put=__cordl_internal_set_Down)) ::UnityW<::GlobalNamespace::AudioAsset>  Down;

/// @brief Field Hover, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hover, put=__cordl_internal_set_Hover)) ::UnityW<::GlobalNamespace::AudioAsset>  Hover;

/// @brief Field Sumbit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sumbit, put=__cordl_internal_set_Sumbit)) ::UnityW<::GlobalNamespace::AudioAsset>  Sumbit;

/// @brief Field Up, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Up, put=__cordl_internal_set_Up)) ::UnityW<::GlobalNamespace::AudioAsset>  Up;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr operator  ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

static inline ::GlobalNamespace::ButtonSounds* New_ctor() ;

/// @brief Method OnPointerDown, addr 0x18032ad80, size 0xb0, virtual true, abstract: false, final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x18032ae30, size 0x90, virtual true, abstract: false, final false
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x18032aec0, size 0xf0, virtual true, abstract: false, final false
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSelect, addr 0x18032afb0, size 0xa0, virtual true, abstract: false, final false
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnSubmit, addr 0x18032b050, size 0xa0, virtual true, abstract: false, final false
inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Down() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Down() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Hover() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Hover() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Sumbit() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Sumbit() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Up() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Up() ;

constexpr void __cordl_internal_set_Down(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Hover(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Sumbit(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Up(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonSounds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonSounds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonSounds(ButtonSounds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonSounds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonSounds(ButtonSounds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4814};

/// @brief Field Hover, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Hover;

/// @brief Field Up, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Up;

/// @brief Field Down, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Down;

/// @brief Field Sumbit, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Sumbit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ButtonSounds, ___Hover) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButtonSounds, ___Up) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButtonSounds, ___Down) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButtonSounds, ___Sumbit) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ButtonSounds) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
