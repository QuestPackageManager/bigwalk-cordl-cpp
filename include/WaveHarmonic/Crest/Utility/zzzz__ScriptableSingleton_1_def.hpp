#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/ScriptableSingleton_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__CustomScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ScriptableSingleton_1)
// Forward declare root types
namespace WaveHarmonic::Crest::Utility {
template<typename T>
class ScriptableSingleton_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::Utility::ScriptableSingleton_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::Utility::ScriptableSingleton_1, "WaveHarmonic.Crest.Utility", "ScriptableSingleton`1");
// Dependencies WaveHarmonic.Crest.Internal.CustomScriptableObject
namespace WaveHarmonic::Crest::Utility {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WaveHarmonic.Crest.Utility.ScriptableSingleton`1<T>
class CORDL_TYPE ScriptableSingleton_1 : public ::WaveHarmonic::Crest::Internal::CustomScriptableObject {
public:
// Declarations
/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) T  _Instance_k__BackingField;

static inline ::WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline T getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(T  value) ;

/// @brief Method set_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void set_Instance(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableSingleton_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableSingleton_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableSingleton_1(ScriptableSingleton_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableSingleton_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableSingleton_1(ScriptableSingleton_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest::Utility
