#pragma once
// IWYU pragma private; include "Rewired/Components/ComponentWrapper_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ComponentWrapper_1)
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Components {
template<typename T>
class ComponentWrapper_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Components::ComponentWrapper_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Components::ComponentWrapper_1, "Rewired.Components", "ComponentWrapper`1");
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired::Components {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Components.ComponentWrapper`1<T>
class CORDL_TYPE ComponentWrapper_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OHRGXrCjbVxooZyCIRswlDXfuBIt, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OHRGXrCjbVxooZyCIRswlDXfuBIt, put=__cordl_internal_set_OHRGXrCjbVxooZyCIRswlDXfuBIt)) T  OHRGXrCjbVxooZyCIRswlDXfuBIt;

/// @brief Field WnFLHQgFvHYWdqaMMFlWKYRiDyBf, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_WnFLHQgFvHYWdqaMMFlWKYRiDyBf, put=__cordl_internal_set_WnFLHQgFvHYWdqaMMFlWKYRiDyBf)) bool  WnFLHQgFvHYWdqaMMFlWKYRiDyBf;

 __declspec(property(get=get_initialized)) bool  initialized;

 __declspec(property(get=get_source)) T  source;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateSource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T CreateSource(::System::Object*  args) ;

/// @brief Method DFYKWuBJatirlPGsgoqtJUJHMMeh, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DFYKWuBJatirlPGsgoqtJUJHMMeh() ;

/// @brief Method Deinitialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Deinitialize() ;

/// @brief Method GetCreateSourceArgs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* GetCreateSourceArgs() ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Rewired::Components::ComponentWrapper_1<T>* New_ctor() ;

/// @brief Method OnAwake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAwake() ;

/// @brief Method OnAwakeFinished, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAwakeFinished() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDestroyed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroyed() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDisabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnReset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnReset() ;

/// @brief Method OnStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnValidate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OnValidated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnValidated() ;

/// @brief Method PostInitialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PostInitialize() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Subscribe() ;

/// @brief Method TryInitialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryInitialize() ;

/// @brief Method Unsubscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Unsubscribe() ;

constexpr T const& __cordl_internal_get_OHRGXrCjbVxooZyCIRswlDXfuBIt() const;

constexpr T& __cordl_internal_get_OHRGXrCjbVxooZyCIRswlDXfuBIt() ;

constexpr bool const& __cordl_internal_get_WnFLHQgFvHYWdqaMMFlWKYRiDyBf() const;

constexpr bool& __cordl_internal_get_WnFLHQgFvHYWdqaMMFlWKYRiDyBf() ;

constexpr void __cordl_internal_set_OHRGXrCjbVxooZyCIRswlDXfuBIt(T  value) ;

constexpr void __cordl_internal_set_WnFLHQgFvHYWdqaMMFlWKYRiDyBf(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_initialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_initialized() ;

/// @brief Method get_source, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_source() ;

/// @brief Method ztrIiEkeGArSGEewGVjbJneNAsMO, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ztrIiEkeGArSGEewGVjbJneNAsMO() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentWrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentWrapper_1(ComponentWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentWrapper_1(ComponentWrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2724};

/// @brief Field OHRGXrCjbVxooZyCIRswlDXfuBIt, offset: 0x20, size: 0x8, def value: None
 T  ___OHRGXrCjbVxooZyCIRswlDXfuBIt;

/// @brief Field WnFLHQgFvHYWdqaMMFlWKYRiDyBf, offset: 0x28, size: 0x1, def value: None
 bool  ___WnFLHQgFvHYWdqaMMFlWKYRiDyBf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Components
