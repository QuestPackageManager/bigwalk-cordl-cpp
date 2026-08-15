#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerMapEnabler_Rule_Editor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/zzzz__ControllerMapEnabler_Rule_Editor_def.hpp"
#include "Rewired/Data/zzzz__ControllerSetSelector_Editor_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IDeepCloneable_def.hpp"
#include "Rewired/zzzz__ControllerMapEnabler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.get_tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::get_tag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"get_tag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.set_tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)(::StringW)>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::set_tag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"set_tag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.get_enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::get_enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"get_enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.set_enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)(bool)>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::set_enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"set_enable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.get_categoryIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::get_categoryIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"get_categoryIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.set_categoryIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)(::System::Collections::Generic::List_1<int32_t>*)>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::set_categoryIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"set_categoryIds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.get_layoutIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::get_layoutIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"get_layoutIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.set_layoutIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)(::System::Collections::Generic::List_1<int32_t>*)>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::set_layoutIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"set_layoutIds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.get_controllerSetSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ControllerSetSelector_Editor* (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::get_controllerSetSelector)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"get_controllerSetSelector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.set_controllerSetSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)(::Rewired::Data::ControllerSetSelector_Editor*)>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::set_controllerSetSelector)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"set_controllerSetSelector", {}, {::i2c::type_of<::Rewired::Data::ControllerSetSelector_Editor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818a1660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)(::Rewired::Data::ControllerMapEnabler_Rule_Editor*)>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818a15c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.ToRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMapEnabler_Rule* (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::ToRuntime)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818a14e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"ToRuntime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_Rule_Editor.Rewired_Utils_Interfaces_IDeepCloneable_DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::ControllerMapEnabler_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_Rule_Editor::Rewired_Utils_Interfaces_IDeepCloneable_DeepClone)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818a1430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"Rewired.Utils.Interfaces.IDeepCloneable.DeepClone", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_get__tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tag;
}
constexpr ::StringW const& Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_get__tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tag;
}
constexpr void Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_set__tag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tag = value;
}
constexpr bool& Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_get__enable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enable;
}
constexpr bool const& Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_get__enable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enable;
}
constexpr void Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_set__enable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enable = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_get__categoryIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_get__categoryIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryIds;
}
constexpr void Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_set__categoryIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____categoryIds = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_get__layoutIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_get__layoutIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutIds;
}
constexpr void Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_set__layoutIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layoutIds = value;
}
constexpr ::Rewired::Data::ControllerSetSelector_Editor*& Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_get__controllerSetSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerSetSelector;
}
constexpr ::Rewired::Data::ControllerSetSelector_Editor* const& Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_get__controllerSetSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerSetSelector;
}
constexpr void Rewired::Data::ControllerMapEnabler_Rule_Editor::__cordl_internal_set__controllerSetSelector(::Rewired::Data::ControllerSetSelector_Editor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerSetSelector = value;
}
inline ::StringW Rewired::Data::ControllerMapEnabler_Rule_Editor::get_tag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"get_tag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_Rule_Editor::set_tag(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"set_tag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::ControllerMapEnabler_Rule_Editor::get_enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"get_enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_Rule_Editor::set_enable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"set_enable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* Rewired::Data::ControllerMapEnabler_Rule_Editor::get_categoryIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"get_categoryIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_Rule_Editor::set_categoryIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"set_categoryIds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* Rewired::Data::ControllerMapEnabler_Rule_Editor::get_layoutIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"get_layoutIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_Rule_Editor::set_layoutIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"set_layoutIds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Data::ControllerSetSelector_Editor* Rewired::Data::ControllerMapEnabler_Rule_Editor::get_controllerSetSelector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"get_controllerSetSelector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ControllerSetSelector_Editor*>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_Rule_Editor::set_controllerSetSelector(::Rewired::Data::ControllerSetSelector_Editor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"set_controllerSetSelector", {}, {::i2c::type_of<::Rewired::Data::ControllerSetSelector_Editor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Data::ControllerMapEnabler_Rule_Editor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_Rule_Editor::_ctor(::Rewired::Data::ControllerMapEnabler_Rule_Editor*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerMapEnabler_Rule* Rewired::Data::ControllerMapEnabler_Rule_Editor::ToRuntime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"ToRuntime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMapEnabler_Rule*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::ControllerMapEnabler_Rule_Editor::Rewired_Utils_Interfaces_IDeepCloneable_DeepClone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(),
                        {"Rewired.Utils.Interfaces.IDeepCloneable.DeepClone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::Data::ControllerMapEnabler_Rule_Editor* Rewired::Data::ControllerMapEnabler_Rule_Editor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>());
}
inline ::Rewired::Data::ControllerMapEnabler_Rule_Editor* Rewired::Data::ControllerMapEnabler_Rule_Editor::New_ctor(::Rewired::Data::ControllerMapEnabler_Rule_Editor*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr  Rewired::Data::ControllerMapEnabler_Rule_Editor::operator ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* Rewired::Data::ControllerMapEnabler_Rule_Editor::i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerMapEnabler_Rule_Editor::ControllerMapEnabler_Rule_Editor()   {
}
