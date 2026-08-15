#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Holder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Holder)
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformance;
}
namespace UnityEngine::AdaptivePerformance {
class LifecycleEventHandler;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class Holder;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::Holder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Holder*, "UnityEngine.AdaptivePerformance", "Holder");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.Holder
class CORDL_TYPE Holder : public ::System::Object {
public:
// Declarations
/// @brief Field LifecycleEventHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LifecycleEventHandler, put=setStaticF_LifecycleEventHandler)) ::UnityEngine::AdaptivePerformance::LifecycleEventHandler*  LifecycleEventHandler;

/// @brief Field m_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_Instance, put=setStaticF_m_Instance)) ::UnityEngine::AdaptivePerformance::IAdaptivePerformance*  m_Instance;

static inline ::UnityEngine::AdaptivePerformance::LifecycleEventHandler* getStaticF_LifecycleEventHandler() ;

static inline ::UnityEngine::AdaptivePerformance::IAdaptivePerformance* getStaticF_m_Instance() ;

/// @brief Method get_Instance, addr 0x182221420, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::AdaptivePerformance::IAdaptivePerformance* get_Instance() ;

static inline void setStaticF_LifecycleEventHandler(::UnityEngine::AdaptivePerformance::LifecycleEventHandler*  value) ;

static inline void setStaticF_m_Instance(::UnityEngine::AdaptivePerformance::IAdaptivePerformance*  value) ;

/// @brief Method set_Instance, addr 0x182221440, size 0x80, virtual false, abstract: false, final false
static inline void set_Instance(::UnityEngine::AdaptivePerformance::IAdaptivePerformance*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Holder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Holder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Holder(Holder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Holder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Holder(Holder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19394};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::Holder) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
