#pragma once
// IWYU pragma private; include "UnityEngine/GUIStateObjects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GUIStateObjects)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class GUIStateObjects;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUIStateObjects*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUIStateObjects*, "UnityEngine", "GUIStateObjects");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIStateObjects
class CORDL_TYPE GUIStateObjects : public ::System::Object {
public:
// Declarations
/// @brief Field s_StateCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_StateCache, put=setStaticF_s_StateCache)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*  s_StateCache;

/// @brief Method GetStateObject, addr 0x1822c5990, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Object* GetStateObject(::System::Type*  t, int32_t  controlID) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>* getStaticF_s_StateCache() ;

static inline void setStaticF_s_StateCache(::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIStateObjects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIStateObjects", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIStateObjects(GUIStateObjects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIStateObjects", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIStateObjects(GUIStateObjects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19085};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUIStateObjects) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
