#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserverSessionLabel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Shipmates/Utils/zzzz__OpenObserverSessionLabel_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::Shipmates::Utils::OpenObserverSessionLabel.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserverSessionLabel::*)()>(&::Shipmates::Utils::OpenObserverSessionLabel::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181acce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserverSessionLabel*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserverSessionLabel.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserverSessionLabel::*)()>(&::Shipmates::Utils::OpenObserverSessionLabel::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181acced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserverSessionLabel*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserverSessionLabel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserverSessionLabel::*)()>(&::Shipmates::Utils::OpenObserverSessionLabel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserverSessionLabel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& Shipmates::Utils::OpenObserverSessionLabel::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& Shipmates::Utils::OpenObserverSessionLabel::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void Shipmates::Utils::OpenObserverSessionLabel::__cordl_internal_set__label(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____label = value;
}
constexpr bool& Shipmates::Utils::OpenObserverSessionLabel::__cordl_internal_get__wasSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasSet;
}
constexpr bool const& Shipmates::Utils::OpenObserverSessionLabel::__cordl_internal_get__wasSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasSet;
}
constexpr void Shipmates::Utils::OpenObserverSessionLabel::__cordl_internal_set__wasSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasSet = value;
}
inline void Shipmates::Utils::OpenObserverSessionLabel::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserverSessionLabel*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserverSessionLabel::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserverSessionLabel*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserverSessionLabel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserverSessionLabel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::Utils::OpenObserverSessionLabel* Shipmates::Utils::OpenObserverSessionLabel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::Utils::OpenObserverSessionLabel*>());
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::OpenObserverSessionLabel::OpenObserverSessionLabel()   {
}
