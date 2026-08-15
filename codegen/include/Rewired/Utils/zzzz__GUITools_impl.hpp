#pragma once
// IWYU pragma private; include "Rewired/Utils/GUITools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__GUITools_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::GUITools.ToGUIContentArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::GUIContent*> (*)(::ArrayW<::StringW>)>(&::Rewired::Utils::GUITools::ToGUIContentArray)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181903ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::GUITools*>(),
                        {"ToGUIContentArray", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::GUITools.ToGUIContentArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::GUIContent*> (*)(::System::Collections::Generic::IList_1<::StringW>*)>(&::Rewired::Utils::GUITools::ToGUIContentArray)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1819038f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::GUITools*>(),
                        {"ToGUIContentArray", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::GUIContent*> Rewired::Utils::GUITools::ToGUIContentArray(::ArrayW<::StringW>  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::GUITools*>(),
                        {"ToGUIContentArray", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GUIContent*>>(nullptr, ___internal_method, items);
}
inline ::ArrayW<::UnityEngine::GUIContent*> Rewired::Utils::GUITools::ToGUIContentArray(::System::Collections::Generic::IList_1<::StringW>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::GUITools*>(),
                        {"ToGUIContentArray", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GUIContent*>>(nullptr, ___internal_method, items);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::GUITools::GUITools()   {
}
