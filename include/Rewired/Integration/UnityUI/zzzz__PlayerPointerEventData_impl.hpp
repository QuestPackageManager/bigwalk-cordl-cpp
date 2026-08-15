#pragma once
// IWYU pragma private; include "Rewired/Integration/UnityUI/PlayerPointerEventData.hpp"
#include "Rewired/Integration/UnityUI/zzzz__PointerEventType_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "Rewired/Integration/UnityUI/zzzz__PlayerPointerEventData_def.hpp"
#include "Rewired/Integration/UnityUI/zzzz__PointerEventType_def.hpp"
#include "Rewired/UI/zzzz__IMouseInputSource_def.hpp"
#include "Rewired/UI/zzzz__ITouchInputSource_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.get_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)()>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::get_playerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803abcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_playerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.set_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)(int32_t)>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::set_playerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803abd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_playerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.get_inputSourceIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)()>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::get_inputSourceIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803abcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_inputSourceIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.set_inputSourceIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)(int32_t)>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::set_inputSourceIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803abd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_inputSourceIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.get_mouseSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::UI::IMouseInputSource* (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)()>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::get_mouseSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803abcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_mouseSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.set_mouseSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)(::Rewired::UI::IMouseInputSource*)>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::set_mouseSource)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803abd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_mouseSource", {}, {::i2c::type_of<::Rewired::UI::IMouseInputSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.get_touchSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::UI::ITouchInputSource* (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)()>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::get_touchSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803abcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_touchSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.set_touchSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)(::Rewired::UI::ITouchInputSource*)>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::set_touchSource)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803abd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_touchSource", {}, {::i2c::type_of<::Rewired::UI::ITouchInputSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.get_sourceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Integration::UnityUI::PointerEventType (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)()>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::get_sourceType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803abce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_sourceType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.set_sourceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)(::Rewired::Integration::UnityUI::PointerEventType)>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::set_sourceType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803abd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_sourceType", {}, {::i2c::type_of<::Rewired::Integration::UnityUI::PointerEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.get_buttonIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)()>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::get_buttonIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803abca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_buttonIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.set_buttonIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)(int32_t)>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::set_buttonIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803abd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_buttonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803abc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::PlayerPointerEventData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Integration::UnityUI::PlayerPointerEventData::*)()>(&::Rewired::Integration::UnityUI::PlayerPointerEventData::ToString)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803aba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__playerId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId_k__BackingField;
}
constexpr int32_t const& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__playerId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId_k__BackingField;
}
constexpr void Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_set__playerId_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerId_k__BackingField = value;
}
constexpr int32_t& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__inputSourceIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSourceIndex_k__BackingField;
}
constexpr int32_t const& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__inputSourceIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSourceIndex_k__BackingField;
}
constexpr void Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_set__inputSourceIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputSourceIndex_k__BackingField = value;
}
constexpr ::Rewired::UI::IMouseInputSource*& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__mouseSource_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseSource_k__BackingField;
}
constexpr ::Rewired::UI::IMouseInputSource* const& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__mouseSource_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseSource_k__BackingField;
}
constexpr void Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_set__mouseSource_k__BackingField(::Rewired::UI::IMouseInputSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mouseSource_k__BackingField = value;
}
constexpr ::Rewired::UI::ITouchInputSource*& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__touchSource_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchSource_k__BackingField;
}
constexpr ::Rewired::UI::ITouchInputSource* const& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__touchSource_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchSource_k__BackingField;
}
constexpr void Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_set__touchSource_k__BackingField(::Rewired::UI::ITouchInputSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchSource_k__BackingField = value;
}
constexpr ::Rewired::Integration::UnityUI::PointerEventType& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__sourceType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceType_k__BackingField;
}
constexpr ::Rewired::Integration::UnityUI::PointerEventType const& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__sourceType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceType_k__BackingField;
}
constexpr void Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_set__sourceType_k__BackingField(::Rewired::Integration::UnityUI::PointerEventType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceType_k__BackingField = value;
}
constexpr int32_t& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__buttonIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonIndex_k__BackingField;
}
constexpr int32_t const& Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_get__buttonIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonIndex_k__BackingField;
}
constexpr void Rewired::Integration::UnityUI::PlayerPointerEventData::__cordl_internal_set__buttonIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonIndex_k__BackingField = value;
}
inline int32_t Rewired::Integration::UnityUI::PlayerPointerEventData::get_playerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_playerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::PlayerPointerEventData::set_playerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_playerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Integration::UnityUI::PlayerPointerEventData::get_inputSourceIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_inputSourceIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::PlayerPointerEventData::set_inputSourceIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_inputSourceIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::UI::IMouseInputSource* Rewired::Integration::UnityUI::PlayerPointerEventData::get_mouseSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_mouseSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::UI::IMouseInputSource*>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::PlayerPointerEventData::set_mouseSource(::Rewired::UI::IMouseInputSource*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_mouseSource", {}, {::i2c::type_of<::Rewired::UI::IMouseInputSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::UI::ITouchInputSource* Rewired::Integration::UnityUI::PlayerPointerEventData::get_touchSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_touchSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::UI::ITouchInputSource*>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::PlayerPointerEventData::set_touchSource(::Rewired::UI::ITouchInputSource*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_touchSource", {}, {::i2c::type_of<::Rewired::UI::ITouchInputSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Integration::UnityUI::PointerEventType Rewired::Integration::UnityUI::PlayerPointerEventData::get_sourceType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_sourceType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Integration::UnityUI::PointerEventType>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::PlayerPointerEventData::set_sourceType(::Rewired::Integration::UnityUI::PointerEventType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_sourceType", {}, {::i2c::type_of<::Rewired::Integration::UnityUI::PointerEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Integration::UnityUI::PlayerPointerEventData::get_buttonIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"get_buttonIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::PlayerPointerEventData::set_buttonIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {"set_buttonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Integration::UnityUI::PlayerPointerEventData::_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSystem);
}
inline ::StringW Rewired::Integration::UnityUI::PlayerPointerEventData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::Integration::UnityUI::PlayerPointerEventData* Rewired::Integration::UnityUI::PlayerPointerEventData::New_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(eventSystem));
}
// Ctor Parameters []
constexpr ::Rewired::Integration::UnityUI::PlayerPointerEventData::PlayerPointerEventData()   {
}
