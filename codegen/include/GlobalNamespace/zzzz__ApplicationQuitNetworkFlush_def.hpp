#pragma once
// IWYU pragma private; include "GlobalNamespace/ApplicationQuitNetworkFlush.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ApplicationQuitNetworkFlush)
// Forward declare root types
namespace GlobalNamespace {
class ApplicationQuitNetworkFlush;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ApplicationQuitNetworkFlush*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ApplicationQuitNetworkFlush*, "", "ApplicationQuitNetworkFlush");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ApplicationQuitNetworkFlush
class CORDL_TYPE ApplicationQuitNetworkFlush : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method FlushEosSends, addr 0x18038feb0, size 0xa0, virtual false, abstract: false, final false
inline void FlushEosSends(float_t  budgetMs) ;

static inline ::GlobalNamespace::ApplicationQuitNetworkFlush* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x18038ff50, size 0x100, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplicationQuitNetworkFlush() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplicationQuitNetworkFlush", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplicationQuitNetworkFlush(ApplicationQuitNetworkFlush && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationQuitNetworkFlush", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplicationQuitNetworkFlush(ApplicationQuitNetworkFlush const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5634};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ApplicationQuitNetworkFlush) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
