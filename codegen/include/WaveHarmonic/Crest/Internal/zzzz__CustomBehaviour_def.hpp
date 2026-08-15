#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Internal/CustomBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomBehaviour)
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Internal {
class CustomBehaviour;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Internal::CustomBehaviour*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Internal::CustomBehaviour*, "WaveHarmonic.Crest.Internal", "CustomBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace WaveHarmonic::Crest::Internal {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Internal.CustomBehaviour
class CORDL_TYPE CustomBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _AfterStart, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__AfterStart, put=__cordl_internal_set__AfterStart)) bool  _AfterStart;

/// @brief Field _Version, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Version, put=__cordl_internal_set__Version)) int32_t  _Version;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method Awake, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Disable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Initialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::Internal::CustomBehaviour* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803501f0, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x181163b40, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x182565330, size 0x20, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMigrate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method OnStart, addr 0x181163ae0, size 0x20, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method Rebuild, addr 0x182565350, size 0xa0, virtual false, abstract: false, final false
inline void Rebuild() ;

/// @brief Method Start, addr 0x1825653f0, size 0x20, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x182565410, size 0x70, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

constexpr bool const& __cordl_internal_get__AfterStart() const;

constexpr bool& __cordl_internal_get__AfterStart() ;

constexpr int32_t const& __cordl_internal_get__Version() const;

constexpr int32_t& __cordl_internal_get__Version() ;

constexpr void __cordl_internal_set__AfterStart(bool  value) ;

constexpr void __cordl_internal_set__Version(int32_t  value) ;

/// @brief Method .ctor, addr 0x182565480, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Version, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomBehaviour(CustomBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomBehaviour(CustomBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20157};

/// @brief Field _AfterStart, offset: 0x20, size: 0x1, def value: None
 bool  ____AfterStart;

/// @brief Field _Version, offset: 0x24, size: 0x4, def value: None
 int32_t  ____Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Internal::CustomBehaviour, ____AfterStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Internal::CustomBehaviour, ____Version) == 0x24, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Internal::CustomBehaviour) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Internal
