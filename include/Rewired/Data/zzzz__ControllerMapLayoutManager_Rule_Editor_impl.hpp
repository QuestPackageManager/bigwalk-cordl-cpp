#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerMapLayoutManager_Rule_Editor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/zzzz__ControllerMapLayoutManager_Rule_Editor_def.hpp"
#include "Rewired/Data/zzzz__ControllerSetSelector_Editor_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IDeepCloneable_def.hpp"
#include "Rewired/zzzz__ControllerMapLayoutManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor.get_tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::get_tag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"get_tag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor.set_tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)(::StringW)>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::set_tag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"set_tag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor.get_categoryIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::get_categoryIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"get_categoryIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor.set_categoryIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)(::System::Collections::Generic::List_1<int32_t>*)>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::set_categoryIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"set_categoryIds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor.get_layoutId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::get_layoutId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"get_layoutId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor.set_layoutId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)(int32_t)>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::set_layoutId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"set_layoutId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor.get_controllerSetSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ControllerSetSelector_Editor* (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::get_controllerSetSelector)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"get_controllerSetSelector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor.set_controllerSetSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)(::Rewired::Data::ControllerSetSelector_Editor*)>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::set_controllerSetSelector)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"set_controllerSetSelector", {}, {::i2c::type_of<::Rewired::Data::ControllerSetSelector_Editor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818a1b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)(::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*)>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818a1ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor.ToRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMapLayoutManager_Rule* (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::ToRuntime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818a1a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"ToRuntime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor.Rewired_Utils_Interfaces_IDeepCloneable_DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::*)()>(&::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::Rewired_Utils_Interfaces_IDeepCloneable_DeepClone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818a1990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"Rewired.Utils.Interfaces.IDeepCloneable.DeepClone", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_get__tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tag;
}
constexpr ::StringW const& Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_get__tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tag;
}
constexpr void Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_set__tag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tag = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_get__categoryIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_get__categoryIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryIds;
}
constexpr void Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_set__categoryIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____categoryIds = value;
}
constexpr int32_t& Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_get__layoutId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutId;
}
constexpr int32_t const& Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_get__layoutId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutId;
}
constexpr void Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_set__layoutId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layoutId = value;
}
constexpr ::Rewired::Data::ControllerSetSelector_Editor*& Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_get__controllerSetSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerSetSelector;
}
constexpr ::Rewired::Data::ControllerSetSelector_Editor* const& Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_get__controllerSetSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerSetSelector;
}
constexpr void Rewired::Data::ControllerMapLayoutManager_Rule_Editor::__cordl_internal_set__controllerSetSelector(::Rewired::Data::ControllerSetSelector_Editor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerSetSelector = value;
}
inline ::StringW Rewired::Data::ControllerMapLayoutManager_Rule_Editor::get_tag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"get_tag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapLayoutManager_Rule_Editor::set_tag(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"set_tag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* Rewired::Data::ControllerMapLayoutManager_Rule_Editor::get_categoryIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"get_categoryIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapLayoutManager_Rule_Editor::set_categoryIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"set_categoryIds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Data::ControllerMapLayoutManager_Rule_Editor::get_layoutId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"get_layoutId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapLayoutManager_Rule_Editor::set_layoutId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"set_layoutId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Data::ControllerSetSelector_Editor* Rewired::Data::ControllerMapLayoutManager_Rule_Editor::get_controllerSetSelector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"get_controllerSetSelector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ControllerSetSelector_Editor*>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapLayoutManager_Rule_Editor::set_controllerSetSelector(::Rewired::Data::ControllerSetSelector_Editor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"set_controllerSetSelector", {}, {::i2c::type_of<::Rewired::Data::ControllerSetSelector_Editor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Data::ControllerMapLayoutManager_Rule_Editor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapLayoutManager_Rule_Editor::_ctor(::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerMapLayoutManager_Rule* Rewired::Data::ControllerMapLayoutManager_Rule_Editor::ToRuntime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"ToRuntime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMapLayoutManager_Rule*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::ControllerMapLayoutManager_Rule_Editor::Rewired_Utils_Interfaces_IDeepCloneable_DeepClone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(),
                        {"Rewired.Utils.Interfaces.IDeepCloneable.DeepClone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor* Rewired::Data::ControllerMapLayoutManager_Rule_Editor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>());
}
inline ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor* Rewired::Data::ControllerMapLayoutManager_Rule_Editor::New_ctor(::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr  Rewired::Data::ControllerMapLayoutManager_Rule_Editor::operator ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* Rewired::Data::ControllerMapLayoutManager_Rule_Editor::i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerMapLayoutManager_Rule_Editor::ControllerMapLayoutManager_Rule_Editor()   {
}
