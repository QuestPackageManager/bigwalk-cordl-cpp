#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Browser/PresetInstance.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroVerseCore/Browser/zzzz__PresetInstance_def.hpp"
#include "JBooth/MicroVerseCore/Browser/zzzz__IContentBrowserDropAction_def.hpp"
#include "JBooth/MicroVerseCore/Browser/zzzz__PresetInstance_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_Category::PresetInstance_Category(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_Category::PresetInstance_Category()   {
}
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_Category  JBooth::MicroVerseCore::Browser::PresetInstance_Category::None{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_Category  JBooth::MicroVerseCore::Browser::PresetInstance_Category::Sky{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_Category  JBooth::MicroVerseCore::Browser::PresetInstance_Category::Fog{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_Category  JBooth::MicroVerseCore::Browser::PresetInstance_Category::Water{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction::PresetInstance_DuplicateFoundAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction::PresetInstance_DuplicateFoundAction()   {
}
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction  JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction::Hide{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction  JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction::Destroy{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Browser::PresetInstance.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Browser::PresetInstance::*)(::by_ref<bool>)>(&::JBooth::MicroVerseCore::Browser::PresetInstance::Execute)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181446db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Browser::PresetInstance*>(),
                        {"Execute", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Browser::PresetInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Browser::PresetInstance::*)()>(&::JBooth::MicroVerseCore::Browser::PresetInstance::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181446f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Browser::PresetInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_Category& JBooth::MicroVerseCore::Browser::PresetInstance::__cordl_internal_get_category()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___category;
}
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_Category const& JBooth::MicroVerseCore::Browser::PresetInstance::__cordl_internal_get_category() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___category;
}
constexpr void JBooth::MicroVerseCore::Browser::PresetInstance::__cordl_internal_set_category(::JBooth::MicroVerseCore::Browser::PresetInstance_Category  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___category = value;
}
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction& JBooth::MicroVerseCore::Browser::PresetInstance::__cordl_internal_get_duplicateFoundAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duplicateFoundAction;
}
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction const& JBooth::MicroVerseCore::Browser::PresetInstance::__cordl_internal_get_duplicateFoundAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duplicateFoundAction;
}
constexpr void JBooth::MicroVerseCore::Browser::PresetInstance::__cordl_internal_set_duplicateFoundAction(::JBooth::MicroVerseCore::Browser::PresetInstance_DuplicateFoundAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duplicateFoundAction = value;
}
inline void JBooth::MicroVerseCore::Browser::PresetInstance::Execute(::by_ref<bool>  destroyAfterExecute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Browser::PresetInstance*>(),
                        {"Execute", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destroyAfterExecute);
}
inline void JBooth::MicroVerseCore::Browser::PresetInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Browser::PresetInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Browser::PresetInstance* JBooth::MicroVerseCore::Browser::PresetInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Browser::PresetInstance*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction"
constexpr  JBooth::MicroVerseCore::Browser::PresetInstance::operator ::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction*() noexcept {
return static_cast<::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction"
constexpr ::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction* JBooth::MicroVerseCore::Browser::PresetInstance::i___JBooth__MicroVerseCore__Browser__IContentBrowserDropAction() noexcept {
return static_cast<::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Browser::PresetInstance::PresetInstance()   {
}
