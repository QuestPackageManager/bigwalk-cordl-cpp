#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Internal/CustomScriptableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomScriptableObject)
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Internal {
class CustomScriptableObject;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Internal::CustomScriptableObject*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Internal::CustomScriptableObject*, "WaveHarmonic.Crest.Internal", "CustomScriptableObject");
// Dependencies UnityEngine.ScriptableObject
namespace WaveHarmonic::Crest::Internal {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Internal.CustomScriptableObject
class CORDL_TYPE CustomScriptableObject : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _Version, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Version, put=__cordl_internal_set__Version)) int32_t  _Version;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::WaveHarmonic::Crest::Internal::CustomScriptableObject* New_ctor() ;

/// @brief Method OnMigrate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x1825654b0, size 0x70, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

constexpr int32_t const& __cordl_internal_get__Version() const;

constexpr int32_t& __cordl_internal_get__Version() ;

constexpr void __cordl_internal_set__Version(int32_t  value) ;

/// @brief Method .ctor, addr 0x182565520, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Version, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomScriptableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomScriptableObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomScriptableObject(CustomScriptableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomScriptableObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomScriptableObject(CustomScriptableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20158};

/// @brief Field _Version, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Internal::CustomScriptableObject, ____Version) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Internal::CustomScriptableObject) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Internal
