#pragma once
// IWYU pragma private; include "GlobalNamespace/FullScreenPassRendererFeature_OldGUID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__FullScreenPassRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(FullScreenPassRendererFeature_OldGUID)
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class FullScreenPassRendererFeature_OldGUID;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FullScreenPassRendererFeature_OldGUID*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FullScreenPassRendererFeature_OldGUID*, "", "FullScreenPassRendererFeature_OldGUID");
// Dependencies UnityEngine.Rendering.Universal.FullScreenPassRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: FullScreenPassRendererFeature_OldGUID
class CORDL_TYPE FullScreenPassRendererFeature_OldGUID : public ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::GlobalNamespace::FullScreenPassRendererFeature_OldGUID* New_ctor() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method .ctor, addr 0x1820c0b30, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FullScreenPassRendererFeature_OldGUID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FullScreenPassRendererFeature_OldGUID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FullScreenPassRendererFeature_OldGUID(FullScreenPassRendererFeature_OldGUID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FullScreenPassRendererFeature_OldGUID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FullScreenPassRendererFeature_OldGUID(FullScreenPassRendererFeature_OldGUID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12165};

/// @brief Size padding 0x50 - 0x48 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FullScreenPassRendererFeature_OldGUID) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
