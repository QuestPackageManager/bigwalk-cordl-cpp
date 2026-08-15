#pragma once
// IWYU pragma private; include "Rewired/PidVid.hpp"
#include "Rewired/zzzz__PidVid_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::PidVid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PidVid::*)(uint16_t, uint16_t)>(&::Rewired::PidVid::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18150a400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PidVid::*)(::StringW)>(&::Rewired::PidVid::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181845fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PidVid::*)(::System::Guid)>(&::Rewired::PidVid::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181846080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.get_isZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PidVid::*)()>(&::Rewired::PidVid::get_isZero)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818460f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"get_isZero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PidVid::*)(::StringW)>(&::Rewired::PidVid::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181845de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"Equals", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.ToProductGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::PidVid::*)()>(&::Rewired::PidVid::ToProductGuid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181845f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"ToProductGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.EItlnZIPxNQjcvnoEDHTnfDYqdtw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PidVid::*)(::StringW)>(&::Rewired::PidVid::EItlnZIPxNQjcvnoEDHTnfDYqdtw)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181845d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"EItlnZIPxNQjcvnoEDHTnfDYqdtw", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PidVid::*)(::System::Object*)>(&::Rewired::PidVid::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181845e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PidVid>(),
                    {::i2c::class_of<::Rewired::PidVid>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PidVid::*)()>(&::Rewired::PidVid::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181845ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PidVid>(),
                    {::i2c::class_of<::Rewired::PidVid>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PidVid::*)(::Rewired::PidVid)>(&::Rewired::PidVid::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181845e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::PidVid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::PidVid, ::Rewired::PidVid)>(&::Rewired::PidVid::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181846110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::PidVid>(), ::i2c::type_of<::Rewired::PidVid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::PidVid, ::Rewired::PidVid)>(&::Rewired::PidVid::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181846130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::PidVid>(), ::i2c::type_of<::Rewired::PidVid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::PidVid::*)()>(&::Rewired::PidVid::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181845f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PidVid>(),
                    {::i2c::class_of<::Rewired::PidVid>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.ArrayContains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>, ::by_ref<::Rewired::PidVid>)>(&::Rewired::PidVid::ArrayContains)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181845cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"ArrayContains", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<::Rewired::PidVid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PidVid.yBcjnmfJhBFALyMZFwKomyIsIcCKA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Rewired::PidVid::yBcjnmfJhBFALyMZFwKomyIsIcCKA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181846150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"yBcjnmfJhBFALyMZFwKomyIsIcCKA", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::PidVid::_ctor(uint16_t  _cordl_fixed_empty_name_whitespace, uint16_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::PidVid::_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::PidVid::_ctor(::System::Guid  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::PidVid::get_isZero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"get_isZero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Rewired::PidVid::Equals(::StringW  pidVid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"Equals", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pidVid);
}
inline ::System::Guid Rewired::PidVid::ToProductGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"ToProductGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline bool Rewired::PidVid::EItlnZIPxNQjcvnoEDHTnfDYqdtw(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"EItlnZIPxNQjcvnoEDHTnfDYqdtw", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::PidVid::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PidVid>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Rewired::PidVid::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PidVid>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Rewired::PidVid::Equals(::Rewired::PidVid  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::PidVid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Rewired::PidVid::op_Equality(::Rewired::PidVid  x, ::Rewired::PidVid  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::PidVid>(), ::i2c::type_of<::Rewired::PidVid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Rewired::PidVid::op_Inequality(::Rewired::PidVid  x, ::Rewired::PidVid  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::PidVid>(), ::i2c::type_of<::Rewired::PidVid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::StringW Rewired::PidVid::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PidVid>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Rewired::PidVid::ArrayContains(::ArrayW<::StringW>  pidVids, ::by_ref<::Rewired::PidVid>  vidPid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"ArrayContains", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<::Rewired::PidVid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pidVids, vidPid);
}
inline ::StringW Rewired::PidVid::yBcjnmfJhBFALyMZFwKomyIsIcCKA(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PidVid>(),
                        {"yBcjnmfJhBFALyMZFwKomyIsIcCKA", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
/// @brief Convert operator to "::System::IEquatable_1<::Rewired::PidVid>"
constexpr  Rewired::PidVid::operator ::System::IEquatable_1<::Rewired::PidVid>*()  {
return static_cast<::System::IEquatable_1<::Rewired::PidVid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Rewired::PidVid>"
constexpr ::System::IEquatable_1<::Rewired::PidVid>* Rewired::PidVid::i___System__IEquatable_1___Rewired__PidVid_()  {
return static_cast<::System::IEquatable_1<::Rewired::PidVid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "productId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vendorId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::PidVid::PidVid(uint16_t  productId, uint16_t  vendorId) noexcept  {
this->productId = productId;
this->vendorId = vendorId;
}
// Ctor Parameters []
constexpr ::Rewired::PidVid::PidVid()   {
}
