#pragma once
// IWYU pragma private; include "UnityEngine/Screen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Screen)
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct DisplayInfo;
}
namespace UnityEngine {
struct FullScreenMode;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RefreshRate;
}
namespace UnityEngine {
struct Resolution;
}
namespace UnityEngine {
struct ScreenOrientation;
}
// Forward declare root types
namespace UnityEngine {
class Screen;
}
// Write type traits
MARK_REF_T(::UnityEngine::Screen*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Screen*, "UnityEngine", "Screen");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Screen
class CORDL_TYPE Screen : public ::System::Object {
public:
// Declarations
/// @brief Method GetMSAASamples, addr 0x18225c090, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetMSAASamples() ;

/// @brief Method GetMainWindowDisplayInfo, addr 0x18225c0b0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::DisplayInfo GetMainWindowDisplayInfo() ;

/// @brief Method GetMainWindowDisplayInfo_Injected, addr 0x18225c0a0, size 0x10, virtual false, abstract: false, final false
static inline void GetMainWindowDisplayInfo_Injected(::by_ref<::UnityEngine::DisplayInfo>  ret) ;

/// @brief Method GetScreenOrientation, addr 0x18225c0e0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::ScreenOrientation GetScreenOrientation() ;

/// @brief Method SetMSAASamples, addr 0x18225c0f0, size 0x10, virtual false, abstract: false, final false
static inline void SetMSAASamples(int32_t  numSamples) ;

/// @brief Method SetResolution, addr 0x18225c130, size 0x30, virtual false, abstract: false, final false
static inline void SetResolution(int32_t  width, int32_t  height, ::UnityEngine::FullScreenMode  fullscreenMode) ;

/// @brief Method SetResolution, addr 0x18225c110, size 0x20, virtual false, abstract: false, final false
static inline void SetResolution(int32_t  width, int32_t  height, ::UnityEngine::FullScreenMode  fullscreenMode, ::UnityEngine::RefreshRate  preferredRefreshRate) ;

/// @brief Method SetResolution_Injected, addr 0x18225c100, size 0x10, virtual false, abstract: false, final false
static inline void SetResolution_Injected(int32_t  width, int32_t  height, ::UnityEngine::FullScreenMode  fullscreenMode, ::by_ref<::UnityEngine::RefreshRate>  preferredRefreshRate) ;

/// @brief Method get_currentResolution, addr 0x18225c170, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Resolution get_currentResolution() ;

/// @brief Method get_currentResolution_Injected, addr 0x18225c160, size 0x10, virtual false, abstract: false, final false
static inline void get_currentResolution_Injected(::by_ref<::UnityEngine::Resolution>  ret) ;

/// @brief Method get_dpi, addr 0x18225c190, size 0x10, virtual false, abstract: false, final false
static inline float_t get_dpi() ;

/// @brief Method get_fullScreen, addr 0x18225c1b0, size 0x10, virtual false, abstract: false, final false
static inline bool get_fullScreen() ;

/// @brief Method get_fullScreenMode, addr 0x18225c1a0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::FullScreenMode get_fullScreenMode() ;

/// @brief Method get_height, addr 0x18225c1c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_height() ;

/// @brief Method get_mainWindowDisplayInfo, addr 0x18225c0b0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::DisplayInfo get_mainWindowDisplayInfo() ;

/// @brief Method get_msaaSamples, addr 0x18225c090, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_msaaSamples() ;

/// @brief Method get_orientation, addr 0x18225c0e0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::ScreenOrientation get_orientation() ;

/// @brief Method get_resolutions, addr 0x18225c1e0, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Resolution> get_resolutions() ;

/// @brief Method get_resolutions_Injected, addr 0x18225c1d0, size 0x10, virtual false, abstract: false, final false
static inline void get_resolutions_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method get_safeArea, addr 0x18225c260, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect get_safeArea() ;

/// @brief Method get_safeArea_Injected, addr 0x18225c250, size 0x10, virtual false, abstract: false, final false
static inline void get_safeArea_Injected(::by_ref<::UnityEngine::Rect>  ret) ;

/// @brief Method get_width, addr 0x18225c280, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_width() ;

/// @brief Method set_fullScreenMode, addr 0x18225c290, size 0x10, virtual false, abstract: false, final false
static inline void set_fullScreenMode(::UnityEngine::FullScreenMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Screen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Screen(Screen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Screen(Screen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10490};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Screen) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
