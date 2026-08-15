#pragma once
// IWYU pragma private; include "Animancer/AnimatedProperty_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerJob_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatedProperty_2)
namespace Animancer {
class IAnimancerComponent;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer {
template<typename TJob,typename TValue>
class AnimatedProperty_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::AnimatedProperty_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::AnimatedProperty_2, "Animancer", "AnimatedProperty`2");
// Dependencies Animancer.AnimancerJob`1<T>, Unity.Collections.NativeArray`1<T>, UnityEngine.Animations.PropertyStreamHandle
namespace Animancer {
// cpp template
template<typename TJob,typename TValue>
// Is value type: false
// CS Name: Animancer.AnimatedProperty`2<TJob,TValue>
class CORDL_TYPE AnimatedProperty_2 : public ::Animancer::AnimancerJob_1<TJob> {
public:
// Declarations
 __declspec(property(get=get_Item)) TValue  Item[];

 __declspec(property(get=get_Value)) TValue  Value;

/// @brief Field _Properties, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__Properties, put=__cordl_internal_set__Properties)) ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  _Properties;

/// @brief Field _Values, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__Values, put=__cordl_internal_set__Values)) ::Unity::Collections::NativeArray_1<TValue>  _Values;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CreateJob, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CreateJob() ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue GetValue(int32_t  index) ;

/// @brief Method GetValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<TValue> GetValues() ;

/// @brief Method GetValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GetValues(::by_ref<::ArrayW<TValue>>  values) ;

/// @brief Method InitializeProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InitializeProperty(::UnityEngine::Animator*  animator, int32_t  index, ::StringW  name) ;

/// @brief Method InitializeProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InitializeProperty(::UnityEngine::Animator*  animator, int32_t  index, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  name) ;

static inline ::Animancer::AnimatedProperty_2<TJob,TValue>* New_ctor(::Animancer::IAnimancerComponent*  animancer, int32_t  propertyCount, ::Unity::Collections::NativeArrayOptions  options) ;

static inline ::Animancer::AnimatedProperty_2<TJob,TValue>* New_ctor(::Animancer::IAnimancerComponent*  animancer, ::StringW  propertyName) ;

static inline ::Animancer::AnimatedProperty_2<TJob,TValue>* New_ctor(::Animancer::IAnimancerComponent*  animancer, ::ArrayW<::StringW>  propertyNames) ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle> const& __cordl_internal_get__Properties() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>& __cordl_internal_get__Properties() ;

constexpr ::Unity::Collections::NativeArray_1<TValue> const& __cordl_internal_get__Values() const;

constexpr ::Unity::Collections::NativeArray_1<TValue>& __cordl_internal_get__Values() ;

constexpr void __cordl_internal_set__Properties(::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  value) ;

constexpr void __cordl_internal_set__Values(::Unity::Collections::NativeArray_1<TValue>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Animancer::IAnimancerComponent*  animancer, int32_t  propertyCount, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Animancer::IAnimancerComponent*  animancer, ::StringW  propertyName) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Animancer::IAnimancerComponent*  animancer, ::ArrayW<::StringW>  propertyNames) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue get_Item(int32_t  index) ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue get_Value() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TValue op_Implicit_TValue(::Animancer::AnimatedProperty_2<TJob,TValue>*  properties) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedProperty_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedProperty_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedProperty_2(AnimatedProperty_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedProperty_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedProperty_2(AnimatedProperty_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18164};

/// @brief Field _Properties, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  ____Properties;

/// @brief Field _Values, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<TValue>  ____Values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
