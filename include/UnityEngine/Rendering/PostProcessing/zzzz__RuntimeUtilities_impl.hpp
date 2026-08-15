#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/RuntimeUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__RuntimeUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessLayer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessProfile_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessResources_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessVolume_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheet_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__RuntimeUtilities_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c._GetAllAssemblyTypes_b__95_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::*)(::System::Reflection::Assembly*)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::_GetAllAssemblyTypes_b__95_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fd0410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*>(),
                        {"<GetAllAssemblyTypes>b__95_0", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::setStaticF___9(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*, "<>9", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*>(std::forward<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*>(value));
}
inline ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c* UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*, "<>9", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::setStaticF___9__95_0(::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*, "<>9__95_0", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*>(std::forward<::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*>(value));
}
inline ::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::getStaticF___9__95_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*, "<>9__95_0", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::_GetAllAssemblyTypes_b__95_0(::System::Reflection::Assembly*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*>(),
                        {"<GetAllAssemblyTypes>b__95_0", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method, t);
}
inline ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c* UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c::RuntimeUtilities___c()   {
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>::setStaticF___9(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*, "<>9", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*>(std::forward<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*>(value));
}
template<typename T>
inline ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*, "<>9", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*>();
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>::setStaticF___9__96_0(::System::Func_2<::System::Type*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Type*,bool>*, "<>9__96_0", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*>(std::forward<::System::Func_2<::System::Type*,bool>*>(value));
}
template<typename T>
inline ::System::Func_2<::System::Type*,bool>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>::getStaticF___9__96_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*,bool>*, "<>9__96_0", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*>();
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>::_GetAllTypesDerivedFrom_b__96_0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*>(),
                        {"<GetAllTypesDerivedFrom>b__96_0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
template<typename T>
inline ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>::RuntimeUtilities___c__96_1()   {
}
template<typename T>
constexpr int32_t& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr T& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr T const& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_set___2__current(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get__queue_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queue_5__2;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* const& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get__queue_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queue_5__2;
}
template<typename T>
constexpr void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_set__queue_5__2(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queue_5__2 = value;
}
template<typename T>
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename T>
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename T>
constexpr void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_set___7__wrap2(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
template<typename T>
constexpr int32_t& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___7__wrap3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap3;
}
template<typename T>
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___7__wrap3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap3;
}
template<typename T>
constexpr void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_set___7__wrap3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap3 = value;
}
template<typename T>
constexpr ::System::Collections::IEnumerator*& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___7__wrap4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap4;
}
template<typename T>
constexpr ::System::Collections::IEnumerator* const& UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_get___7__wrap4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap4;
}
template<typename T>
constexpr void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__cordl_internal_set___7__wrap4(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap4 = value;
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>*>(),
                        {"System.Collections.Generic.IEnumerator<T>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>::RuntimeUtilities__GetAllSceneObjects_d__88_1()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_whiteTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_whiteTexture)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181fceb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_whiteTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_whiteTexture3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_whiteTexture3D)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181fce9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_whiteTexture3D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_blackTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_blackTexture)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181fcdc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_blackTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_blackTexture3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_blackTexture3D)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181fcdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_blackTexture3D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_transparentTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_transparentTexture)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181fce8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_transparentTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_transparentTexture3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_transparentTexture3D)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181fce7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_transparentTexture3D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.GetLutStrip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetLutStrip)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181fcd390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"GetLutStrip", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_fullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_fullscreenTriangle)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181fce3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_fullscreenTriangle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_copyStdMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copyStdMaterial)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fce2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copyStdMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_copyStdFromDoubleWideMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copyStdFromDoubleWideMaterial)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fce1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copyStdFromDoubleWideMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_copyMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copyMaterial)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fce010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copyMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_copyFromTexArrayMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copyFromTexArrayMaterial)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fcdd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copyFromTexArrayMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_copySheet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PropertySheet* (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copySheet)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fce100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copySheet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_copyFromTexArraySheet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PropertySheet* (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copyFromTexArraySheet)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181fcde70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copyFromTexArraySheet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.isValidResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::isValidResources)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fcec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"isValidResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.UpdateResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::PostProcessing::PostProcessResources*)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::UpdateResources)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181fcd8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"UpdateResources", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.SetRenderTargetWithLoadStoreAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::SetRenderTargetWithLoadStoreAction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fcd870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"SetRenderTargetWithLoadStoreAction", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.SetRenderTargetWithLoadStoreAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::SetRenderTargetWithLoadStoreAction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fcd790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"SetRenderTargetWithLoadStoreAction", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.SetRenderTargetWithLoadStoreAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::SetRenderTargetWithLoadStoreAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fcd7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"SetRenderTargetWithLoadStoreAction", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, bool, ::System::Nullable_1<::UnityEngine::Rect>, bool)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181fcc6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::PostProcessing::PropertySheet*, int32_t, ::UnityEngine::Rendering::RenderBufferLoadAction, ::System::Nullable_1<::UnityEngine::Rect>, bool)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181fcbf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::PostProcessing::PropertySheet*, int32_t, bool, ::System::Nullable_1<::UnityEngine::Rect>, bool)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181fcc370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BlitFullscreenTriangleFromDoubleWide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, int32_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangleFromDoubleWide)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181fcba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangleFromDoubleWide", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BlitFullscreenTriangleToDoubleWide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::PostProcessing::PropertySheet*, int32_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangleToDoubleWide)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181fcbcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangleToDoubleWide", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BlitFullscreenTriangleFromTexArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::PostProcessing::PropertySheet*, int32_t, bool, int32_t)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangleFromTexArray)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fcbb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangleFromTexArray", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BlitFullscreenTriangleToTexArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::PostProcessing::PropertySheet*, int32_t, bool, int32_t)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangleToTexArray)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fcbe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangleToTexArray", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::PostProcessing::PropertySheet*, int32_t, bool, ::System::Nullable_1<::UnityEngine::Rect>)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181fcc160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::PostProcessing::PropertySheet*, int32_t, bool, ::System::Nullable_1<::UnityEngine::Rect>)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fcc560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BuiltinBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BuiltinBlit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181fcc970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BuiltinBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.BuiltinBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BuiltinBlit)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fcc890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BuiltinBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.CopyTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::CopyTexture)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181fcca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_scriptableRenderPipelineActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_scriptableRenderPipelineActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fce700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_scriptableRenderPipelineActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_supportsDeferredShading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_supportsDeferredShading)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fce720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_supportsDeferredShading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_supportsDepthNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_supportsDepthNormals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fce760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_supportsDepthNormals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_isSinglePassStereoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isSinglePassStereoEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fce690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isSinglePassStereoEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_isVREnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isVREnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fce6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isVREnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_isAndroidOpenGL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isAndroidOpenGL)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fce640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isAndroidOpenGL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_isOpenGLES
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isOpenGLES)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fce670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isOpenGLES", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_isWebNonWebGPU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isWebNonWebGPU)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fce6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isWebNonWebGPU", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_defaultHDRRenderTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_defaultHDRRenderTextureFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_defaultHDRRenderTextureFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.isFloatingPointFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RenderTextureFormat)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::isFloatingPointFormat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fcec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"isFloatingPointFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.hasAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RenderTextureFormat)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::hasAlpha)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fcec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"hasAlpha", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::Destroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fcce10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.get_isLinearColorSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isLinearColorSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813efe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isLinearColorSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.IsResolvedDepthAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::IsResolvedDepthAvailable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fcd6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"IsResolvedDepthAvailable", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.DestroyProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::PostProcessing::PostProcessProfile*, bool)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::DestroyProfile)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181fccc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"DestroyProfile", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.DestroyVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*, bool, bool)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::DestroyVolume)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181fcccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"DestroyVolume", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.IsPostProcessingActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::IsPostProcessingActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fcd6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"IsPostProcessingActive", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.IsTemporalAntialiasingActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::IsTemporalAntialiasingActive)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fcd740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"IsTemporalAntialiasingActive", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.IsDynamicResolutionEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::IsDynamicResolutionEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fcd650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"IsDynamicResolutionEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.Exp2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::Exp2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"Exp2", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.GetJitteredPerspectiveProjectionMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Camera*, ::UnityEngine::Vector2)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetJitteredPerspectiveProjectionMatrix)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181fcd1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"GetJitteredPerspectiveProjectionMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.GetJitteredOrthographicProjectionMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Camera*, ::UnityEngine::Vector2)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetJitteredOrthographicProjectionMatrix)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181fcd0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"GetJitteredOrthographicProjectionMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.GenerateJitteredProjectionMatrixFromOriginal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector2)>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GenerateJitteredProjectionMatrixFromOriginal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181fcce50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"GenerateJitteredProjectionMatrixFromOriginal", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities.GetAllAssemblyTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)()>(&::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetAllAssemblyTypes)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181fccf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"GetAllAssemblyTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_m_WhiteTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "m_WhiteTexture", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_m_WhiteTexture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "m_WhiteTexture", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_m_WhiteTexture3D(::UnityW<::UnityEngine::Texture3D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_WhiteTexture3D", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_m_WhiteTexture3D()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_WhiteTexture3D", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_m_BlackTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "m_BlackTexture", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_m_BlackTexture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "m_BlackTexture", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_m_BlackTexture3D(::UnityW<::UnityEngine::Texture3D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackTexture3D", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_m_BlackTexture3D()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackTexture3D", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_m_TransparentTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "m_TransparentTexture", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_m_TransparentTexture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "m_TransparentTexture", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_m_TransparentTexture3D(::UnityW<::UnityEngine::Texture3D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_TransparentTexture3D", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_m_TransparentTexture3D()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_TransparentTexture3D", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_m_LutStrips(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>*, "m_LutStrips", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_m_LutStrips()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>*, "m_LutStrips", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_s_Resources(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>, "s_Resources", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>>(value));
}
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_s_Resources()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>, "s_Resources", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_s_FullscreenTriangle(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_FullscreenTriangle", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_s_FullscreenTriangle()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_FullscreenTriangle", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_s_CopyStdMaterial(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_CopyStdMaterial", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_s_CopyStdMaterial()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_CopyStdMaterial", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_s_CopyStdFromDoubleWideMaterial(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_CopyStdFromDoubleWideMaterial", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_s_CopyStdFromDoubleWideMaterial()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_CopyStdFromDoubleWideMaterial", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_s_CopyMaterial(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_CopyMaterial", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_s_CopyMaterial()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_CopyMaterial", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_s_CopyFromTexArrayMaterial(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_CopyFromTexArrayMaterial", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_s_CopyFromTexArrayMaterial()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_CopyFromTexArrayMaterial", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_s_CopySheet(::UnityEngine::Rendering::PostProcessing::PropertySheet*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::PostProcessing::PropertySheet*, "s_CopySheet", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(value));
}
inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_s_CopySheet()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::PostProcessing::PropertySheet*, "s_CopySheet", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_s_CopyFromTexArraySheet(::UnityEngine::Rendering::PostProcessing::PropertySheet*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::PostProcessing::PropertySheet*, "s_CopyFromTexArraySheet", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(value));
}
inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_s_CopyFromTexArraySheet()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::PostProcessing::PropertySheet*, "s_CopyFromTexArraySheet", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::setStaticF_m_AssemblyTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, "m_AssemblyTypes", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(std::forward<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities::getStaticF_m_AssemblyTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, "m_AssemblyTypes", ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>();
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_whiteTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_whiteTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_whiteTexture3D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_whiteTexture3D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_blackTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_blackTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_blackTexture3D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_blackTexture3D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_transparentTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_transparentTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_transparentTexture3D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_transparentTexture3D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetLutStrip(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"GetLutStrip", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, size);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_fullscreenTriangle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_fullscreenTriangle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copyStdMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copyStdMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copyStdFromDoubleWideMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copyStdFromDoubleWideMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copyMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copyMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copyFromTexArrayMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copyFromTexArrayMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copySheet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copySheet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_copyFromTexArraySheet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_copyFromTexArraySheet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::isValidResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"isValidResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::UpdateResources(::UnityEngine::Rendering::PostProcessing::PostProcessResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"UpdateResources", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, resources);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::SetRenderTargetWithLoadStoreAction(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"SetRenderTargetWithLoadStoreAction", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, rt, loadAction, storeAction);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::SetRenderTargetWithLoadStoreAction(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"SetRenderTargetWithLoadStoreAction", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, rt, loadAction, storeAction, depthLoadAction, depthStoreAction);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::SetRenderTargetWithLoadStoreAction(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"SetRenderTargetWithLoadStoreAction", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, color, colorLoadAction, colorStoreAction, depth, depthLoadAction, depthStoreAction);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, bool  clear, ::System::Nullable_1<::UnityEngine::Rect>  viewport, bool  preserveDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, clear, viewport, preserveDepth);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::System::Nullable_1<::UnityEngine::Rect>  viewport, bool  preserveDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, propertySheet, pass, loadAction, viewport, preserveDepth);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, bool  clear, ::System::Nullable_1<::UnityEngine::Rect>  viewport, bool  preserveDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, propertySheet, pass, clear, viewport, preserveDepth);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangleFromDoubleWide(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, int32_t  pass, int32_t  eye)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangleFromDoubleWide", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, material, pass, eye);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangleToDoubleWide(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, int32_t  eye)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangleToDoubleWide", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, propertySheet, pass, eye);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangleFromTexArray(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, bool  clear, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangleFromTexArray", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, propertySheet, pass, clear, depthSlice);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangleToTexArray(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, bool  clear, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangleToTexArray", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, propertySheet, pass, clear, depthSlice);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, bool  clear, ::System::Nullable_1<::UnityEngine::Rect>  viewport)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, depth, propertySheet, pass, clear, viewport);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, bool  clear, ::System::Nullable_1<::UnityEngine::Rect>  viewport)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destinations, depth, propertySheet, pass, clear, viewport);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BuiltinBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BuiltinBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::BuiltinBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  mat, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"BuiltinBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, mat, pass);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::CopyTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_scriptableRenderPipelineActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_scriptableRenderPipelineActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_supportsDeferredShading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_supportsDeferredShading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_supportsDepthNormals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_supportsDepthNormals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isSinglePassStereoEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isSinglePassStereoEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isVREnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isVREnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isAndroidOpenGL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isAndroidOpenGL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isOpenGLES()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isOpenGLES", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isWebNonWebGPU()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isWebNonWebGPU", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_defaultHDRRenderTextureFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_defaultHDRRenderTextureFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::isFloatingPointFormat(::UnityEngine::RenderTextureFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"isFloatingPointFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::hasAlpha(::UnityEngine::RenderTextureFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"hasAlpha", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::Destroy(::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::get_isLinearColorSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"get_isLinearColorSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::IsResolvedDepthAvailable(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"IsResolvedDepthAvailable", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::DestroyProfile(::UnityEngine::Rendering::PostProcessing::PostProcessProfile*  profile, bool  destroyEffects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"DestroyProfile", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, profile, destroyEffects);
}
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::DestroyVolume(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume, bool  destroyProfile, bool  destroyGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"DestroyVolume", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, volume, destroyProfile, destroyGameObject);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::IsPostProcessingActive(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"IsPostProcessingActive", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, layer);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::IsTemporalAntialiasingActive(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"IsTemporalAntialiasingActive", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, layer);
}
inline bool UnityEngine::Rendering::PostProcessing::RuntimeUtilities::IsDynamicResolutionEnabled(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"IsDynamicResolutionEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetAllSceneObjects()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                    {"GetAllSceneObjects", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(nullptr, ___internal_method);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::RuntimeUtilities::CreateIfNull(::by_ref<T>  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                    {"CreateIfNull", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline float_t UnityEngine::Rendering::PostProcessing::RuntimeUtilities::Exp2(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"Exp2", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetJitteredPerspectiveProjectionMatrix(::UnityEngine::Camera*  camera, ::UnityEngine::Vector2  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"GetJitteredPerspectiveProjectionMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, camera, offset);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetJitteredOrthographicProjectionMatrix(::UnityEngine::Camera*  camera, ::UnityEngine::Vector2  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"GetJitteredOrthographicProjectionMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, camera, offset);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GenerateJitteredProjectionMatrixFromOriginal(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::UnityEngine::Matrix4x4  origProj, ::UnityEngine::Vector2  jitter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"GenerateJitteredProjectionMatrixFromOriginal", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, context, origProj, jitter);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetAllAssemblyTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                        {"GetAllAssemblyTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetAllTypesDerivedFrom()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                    {"GetAllTypesDerivedFrom", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
template<typename T>
inline T UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetAttribute(::System::Type*  type)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                    {"GetAttribute", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Type*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, type);
}
template<typename TType,typename TValue>
inline ::ArrayW<::System::Attribute*> UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetMemberAttributes(::System::Linq::Expressions::Expression_1<::System::Func_2<TType,TValue>*>*  expr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                    {"GetMemberAttributes", {::i2c::class_of<TType>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Linq::Expressions::Expression_1<::System::Func_2<TType,TValue>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TType>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, expr);
}
template<typename TType,typename TValue>
inline ::StringW UnityEngine::Rendering::PostProcessing::RuntimeUtilities::GetFieldPath(::System::Linq::Expressions::Expression_1<::System::Func_2<TType,TValue>*>*  expr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*>(),
                    {"GetFieldPath", {::i2c::class_of<TType>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Linq::Expressions::Expression_1<::System::Func_2<TType,TValue>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TType>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, expr);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities::RuntimeUtilities()   {
}
