#pragma once
// IWYU pragma private; include "Shipmate/Utils/SingletonBehaviour_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SingletonBehaviour_1)
// Forward declare root types
namespace Shipmate::Utils {
template<typename T>
class SingletonBehaviour_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Shipmate::Utils::SingletonBehaviour_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Shipmate::Utils::SingletonBehaviour_1, "Shipmate.Utils", "SingletonBehaviour`1");
// Dependencies UnityEngine.MonoBehaviour
namespace Shipmate::Utils {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Shipmate.Utils.SingletonBehaviour`1<T>
class CORDL_TYPE SingletonBehaviour_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field mInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mInstance, put=setStaticF_mInstance)) T  mInstance;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Shipmate::Utils::SingletonBehaviour_1<T>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline T getStaticF_mInstance() ;

/// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T get_Instance() ;

static inline void setStaticF_mInstance(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingletonBehaviour_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingletonBehaviour_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingletonBehaviour_1(SingletonBehaviour_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingletonBehaviour_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingletonBehaviour_1(SingletonBehaviour_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21368};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Shipmate::Utils
