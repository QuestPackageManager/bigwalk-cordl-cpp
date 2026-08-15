#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateElement_Internal.hpp"
#include "Rewired/zzzz__IControllerTemplateElement_Internal_def.hpp"
#include "Rewired/zzzz__ControllerElementTarget_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementTarget_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElement_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplateElement_Internal.get_parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplate* (::Rewired::IControllerTemplateElement_Internal::*)()>(&::Rewired::IControllerTemplateElement_Internal::get_parent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateElement_Internal.get_elementCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::IControllerTemplateElement_Internal::*)()>(&::Rewired::IControllerTemplateElement_Internal::get_elementCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateElement_Internal.GetElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateElement* (::Rewired::IControllerTemplateElement_Internal::*)(int32_t)>(&::Rewired::IControllerTemplateElement_Internal::GetElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateElement_Internal.GetElementTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::IControllerTemplateElement_Internal::*)(::Rewired::ControllerElementTarget, ::by_ref<::System::Collections::Generic::IList_1<::Rewired::ControllerTemplateElementTarget>*>)>(&::Rewired::IControllerTemplateElement_Internal::GetElementTargets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::IControllerTemplate* Rewired::IControllerTemplateElement_Internal::get_parent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplate*>(this, ___internal_method);
}
inline int32_t Rewired::IControllerTemplateElement_Internal::get_elementCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateElement* Rewired::IControllerTemplateElement_Internal::GetElement(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateElement*>(this, ___internal_method, index);
}
inline int32_t Rewired::IControllerTemplateElement_Internal::GetElementTargets(::Rewired::ControllerElementTarget  find, ::by_ref<::System::Collections::Generic::IList_1<::Rewired::ControllerTemplateElementTarget>*>  list)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateElement_Internal*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, find, list);
}
